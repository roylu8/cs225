/* Your code here! */
#include "maze.h"
#include <map>
#include <queue>
#include <cmath>

using namespace std;
using namespace cs225;

SquareMaze::SquareMaze()
{
}

void SquareMaze::makeMaze(int width, int height)
{
    width_ = width;
    height_ = height;
    size = width * height;
    dsj.addelements(size);

    for (int i = 0; i < width_; i++)
    {
        right.push_back(vector<bool>());
        down.push_back(vector<bool>());
        for (int j = 0; j < height_; j++)
        {
            right[i].push_back(true);
            down[i].push_back(true);
        }
    }

    int c = 0;

    while (c != size - 1)
    {
        int rX = rand() % width_;
        int rY = rand() % height_;
        int rW = rand() % 2;
        int sqIdx = width_ * rY + rX;
        int rIdx = width_ * rY + rX + 1;
        int dIdx = width_ * rY + rX + width_;

        switch (rW)
        {
        case 0:
            if ((rX != width_ - 1) && (dsj.find(sqIdx) != dsj.find(rIdx)) && (right[rX][rY] == true))
            {
                c++;
                dsj.setunion(sqIdx, rIdx);
                setWall(rX, rY, 0, false);
            }
        case 1:
            if ((rY != height_ - 1) && (dsj.find(sqIdx) != dsj.find(dIdx)) && (down[rX][rY] == true))
            {
                c++;
                dsj.setunion(sqIdx, dIdx);
                setWall(rX, rY, 1, false);
            }
        }
    }
}

bool SquareMaze::canTravel(int x, int y, int dir) const
{
    switch (dir)
    {
    case 0:
        if (x == width_ - 1)
        {
            return false;
        }
        break;
    case 1:
        if (y == height_ - 1)
        {
            return false;
        }
        break;
    case 2:
        if (x == 0)
        {
            return false;
        }
        break;
    case 3:
        if (y == 0)
        {
            return false;
        }
    }
    switch (dir)
    {
    case 0:
        if (right[x][y] == false)
        {
            return true;
        }
        break;
    case 1:
        if (down[x][y] == false)
        {
            return true;
        }
        break;
    case 2:
        if (right[x - 1][y] == false)
        {
            return true;
        }
        break;
    case 3:
        if (down[x][y - 1] == false)
        {
            return true;
        }
    }
    return false;
}

void SquareMaze::setWall(int x, int y, int dir, bool exists)
{
    switch (dir)
    {
    case 0:
        right[x][y] = exists;
        break;
    case 1:
        down[x][y] = exists;
    }
}

vector<int> SquareMaze::solveMaze()
{
    vector<vector<bool>> visited;
    vector<int> tempLong;
    map<int, int> path;
    stack<int> s;
    for (int i = 0; i < width_; i++)
    {
        visited.push_back(vector<bool>());
        for (int j = 0; j < height_; j++)
        {
            visited[i].push_back(false);
        }
    }
    visited[0][0] = true;
    s.push(0);

    while (!s.empty())
    {
        int curr = s.top();
        int cX = s.top() % width_;
        int cY = s.top() / width_;
        s.pop();
        int caseh;

        if (canTravel(cX, cY, 2) && visited[cX - 1][cY] == false)
        {
            visited[cX - 1][cY] = true;
            s.push(width_ * cY + cX - 1);
            path[width_ * cY + cX - 1] = curr;
        }
        if (canTravel(cX, cY, 0) && visited[cX + 1][cY] == false)
        {
            visited[cX + 1][cY] = true;
            s.push(width_ * cY + cX + 1);
            path[width_ * cY + cX + 1] = curr;
        }
        if (canTravel(cX, cY, 3) && visited[cX][cY - 1] == false)
        {
            visited[cX][cY - 1] = true;
            s.push(width_ * cY + cX - width_);
            path[width_ * cY + cX - width_] = curr;
        }
        if (canTravel(cX, cY, 1) && visited[cX][cY + 1] == false)
        {
            visited[cX][cY + 1] = true;
            s.push(width_ * cY + cX + width_);
            path[width_ * cY + cX + width_] = curr;
        }
    }
    int max = 0;
    vector<int> longestPath;
    for (int i = 0; i < width_; i++)
    {
        tempLong.clear();
        int length = 0;
        int dest = width_ * (height_ - 1) + i;

        while (dest != 0)
        {
            switch (dest - path[dest])
            {
            case 1:
                tempLong.push_back(0);
                break;
            case -1:
                tempLong.push_back(2);
                break;
            }
            if (dest - path[dest] == width_)
            {
                tempLong.push_back(1);
            }
            else if (dest - path[dest] == -width_)
            {
                tempLong.push_back(3);
            }
            dest = path[dest];
            length++;
        }

        if (length > max)
        {
            max = length;
            longestPath = tempLong;
        }
    }

    reverse(longestPath.begin(), longestPath.end());
    return longestPath;
}

PNG *SquareMaze::drawMaze() const
{

    PNG *maze = new PNG(width_ * 10 + 1, height_ * 10 + 1);

    for (int i = 10; i < width_ * 10 + 1; i++)
    {
        HSLAPixel &pix = maze->getPixel(i, 0);
        pix.h = 0;
        pix.s = 0;
        pix.l = 0;
    }
    for (int i = 0; i < height_ * 10 + 1; i++)
    {
        HSLAPixel &pix = maze->getPixel(0, i);
        pix.h = 0;
        pix.s = 0;
        pix.l = 0;
    }

    for (int i = 0; i < width_; i++)
    {
        for (int j = 0; j < height_; j++)
        {
            for (int k = 0; k < 11; k++)
            {
                if (right[i][j])
                {
                    HSLAPixel &pix = maze->getPixel((i + 1) * 10, (j * 10 + k));
                    pix.h = 0;
                    pix.s = 0;
                    pix.l = 0;
                }
                if (down[i][j])
                {
                    HSLAPixel &pix = maze->getPixel((10 * i + k), (j + 1) * 10);
                    pix.h = 0;
                    pix.s = 0;
                    pix.l = 0;
                }
            }
        }
    }
    return maze;
}

PNG *SquareMaze::drawMazeWithSolution()
{
    PNG *maze = drawMaze();
    vector<int> path = solveMaze();
    int x = 5;
    int y = 5;

    for (size_t i = 0; i < path.size(); i++)
    {
        for (int j = 0; j < 10; j++)
        {
            HSLAPixel &pix = maze->getPixel(x, y);
            switch (path[i])
            {
            case 0:
                x++;
                pix.h = 0;
                pix.s = 1;
                pix.l = 0.5;
                break;
            case 1:
                y++;
                pix.h = 0;
                pix.s = 1;
                pix.l = 0.5;
                break;
            case 2:
                x--;
                pix.h = 0;
                pix.s = 1;
                pix.l = 0.5;
                break;
            case 3:
                y--;
                pix.h = 0;
                pix.s = 1;
                pix.l = 0.5;
                break;
            default:
                break;
            }
        }
    }

    HSLAPixel &pix = maze->getPixel(x, y);
    pix.h = 0;
    pix.s = 1;
    pix.l = 0.5;
    pix.a = 1;
    x = x - 4;
    y = y + 5;

    for (int i = 0; i < 9; i++)
    {
        HSLAPixel &pix = maze->getPixel(x, y);
        pix.h = 0;
        pix.s = 0;
        pix.l = 1;
        pix.a = 1;
        x++;
    }

    return maze;
}
