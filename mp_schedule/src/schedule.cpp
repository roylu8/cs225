/**
 * @file schedule.cpp
 * Exam scheduling using graph coloring
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <map>
#include <unordered_map>

#include "Color.h"
#include "schedule.h"
#include "utils.h"
#include <algorithm>
#include <sstream>
#include <fstream>

using namespace std;

/**
 * Takes a filename and reads in all the text from the file
 * Newline characters are also just characters in ASCII
 *
 * @param filename The name of the file that will fill the string
 */
std::string file_to_string(const std::string &filename)
{
  std::ifstream text(filename);

  std::stringstream strStream;
  if (text.is_open())
  {
    strStream << text.rdbuf();
  }
  return strStream.str();
}

/**
 * Given a filename to a CSV-formatted text file, create a 2D vector of strings where each row
 * in the text file is a row in the V2D and each comma-separated value is stripped of whitespace
 * and stored as its own string.
 *
 * Your V2D should match the exact structure of the input file -- so the first row, first column
 * in the original file should be the first row, first column of the V2D.
 *
 * @param filename The filename of a CSV-formatted text file.
 */
V2D file_to_V2D(const std::string &filename)
{
  // Your code here!
  V2D content;
  vector<string> row;
  string line, word;
  ifstream file;
  file.open(filename);
  while (getline(file, line))
  {
    row.clear();

    stringstream str(line);

    while (getline(str, word, ','))
    {
      str.ignore();
      row.push_back(word);
    }
    content.push_back(row);
  }
  return content;
}

/**
 * Given a course roster and a list of students and their courses,
 * perform data correction and return a course roster of valid students (and only non-empty courses).
 *
 * A 'valid student' is a student who is both in the course roster and the student's own listing contains the course
 * A course which has no students (or all students have been removed for not being valid) should be removed
 *
 * @param cv A 2D vector of strings where each row is a course ID followed by the students in the course
 * @param student A 2D vector of strings where each row is a student ID followed by the courses they are taking
 */
V2D clean(V2D &cv, V2D &student)
{
  // YOUR CODE HERE
  V2D correctedRoster;

  for (unsigned i = 0; i < cv.size(); i++)
  {
    std::vector<std::string> course;
    course.push_back(cv[i][0]);
    for (unsigned j = 1; j < cv[i].size(); j++)
    {
      for (unsigned k = 0; k < student.size(); k++)
      {
        if (student[k][0] == cv[i][j])
        {
          for (unsigned l = 1; l < student[k].size(); l++)
          {
            if (student[k][l] == cv[i][0])
            {
              course.push_back(student[k][0]);
              break;
            }
          }
          break;
        }
      }
    }
    if (course.size() >= 2)
    {
      correctedRoster.push_back(course);
    }
  }
  return correctedRoster;
}

/**
 * Given a collection of courses and a list of available times, create a valid scheduling (if possible).
 *
 * A 'valid schedule' should assign each course to a timeslot in such a way that there are no conflicts for exams
 * In other words, two courses who share a student should not share an exam time.
 * Your solution should try to minimize the total number of timeslots but should not exceed the timeslots given.
 *
 * The output V2D should have one row for each timeslot, even if that timeslot is not used.
 *
 * As the problem is NP-complete, your first scheduling might not result in a valid match. Your solution should
 * continue to attempt different schedulings until 1) a valid scheduling is found or 2) you have exhausted all possible
 * starting positions. If no match is possible, return a V2D with one row with the string '-1' as the only value.
 *
 * @param courses A 2D vector of strings where each row is a course ID followed by the students in the course
 * @param timeslots A vector of strings giving the total number of unique timeslots
 */
V2D schedule(V2D courses, std::vector<std::string> timeslots)
{
  // Your code here!
  V2D sched;
  vector<vector<int>> adjMatrix = matrix(courses);
  vector<vector<int>> adjList = convert(adjMatrix);

  Color g1(courses.size());
  for (unsigned i = 0; i < adjList.size(); i++)
  {
    for (unsigned j = 0; j < adjList[i].size(); j++)
    {
      g1.addEdge(i, adjList[i][j]);
    }
  }
  vector<int> coloredMap = g1.greedyColoring();

  unsigned maxColor = timeslots.size();
  // unsigned maxColorsUsed = 0;
  // for (unsigned i = 0; i < coloredMap.size(); i++)
  // {
  //   if ((unsigned)(coloredMap[i]) > maxColorsUsed)
  //   {
  //     maxColorsUsed = coloredMap[i];
  //   }
  // }

  // if (maxColor < maxColorsUsed)
  // {
  //   sched.push_back(vector<string>());
  //   sched[0].push_back("-1");
  //   return sched;
  // }

  for (unsigned int i = 0; i < maxColor; i++)
  {
    sched.push_back(vector<string>());
    sched[i].push_back(timeslots[i]);
  }

  for (unsigned i = 0; i < coloredMap.size(); i++)
  {
    sched[coloredMap[i]].push_back(courses[i][0]);
  }

  return sched;
}

vector<vector<int>> matrix(V2D course_list)
{
  vector<vector<int>> m;
  for (auto course_one : course_list)
  {
    vector<int> temp;
    for (auto course_two : course_list)
    {
      bool edge = 0;
      if (course_one == course_two)
      {
        temp.push_back(0);
        continue;
      }
      for (auto time_one : course_one)
      {
        for (auto time_two : course_two)
        {
          if (time_one == time_two)
          {
            edge = 1;
            break;
          }
        }
        if (edge)
        {
          break;
        }
      }
      temp.push_back(edge);
    }
    m.push_back(temp);
  }

  // prints matrix
  for (unsigned int i = 0; i < m.size(); i++)
  {
    for (unsigned int j = 0; j < m[i].size(); j++)
    {
      cout << m[i][j] << " ";
    }
    // Newline for new row
    cout << endl;
  }
  return m;
}

vector<vector<int>> convert(vector<vector<int>> a)
{
  vector<vector<int>> adjList(a.size());
  for (unsigned i = 0; i < a.size(); i++)
  {

    for (unsigned j = 0; j < a[i].size(); j++)
    {
      if (a[i][j] == 1)
      {
        adjList[i].push_back(j);
      }
    }
  }
  for (unsigned int i = 0; i < adjList.size(); i++)
  {
    for (unsigned int j = 0; j < adjList[i].size(); j++)
    {
      cout << adjList[i][j] << " ";
    }
    // Newline for new row
    cout << endl;
  }
  return adjList;
}