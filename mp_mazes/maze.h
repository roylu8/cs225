/* Your code here! */
#pragma once

#include "dsets.h"
#include "cs225/PNG.h"
#include <stack>

using namespace cs225;
using namespace std;

class SquareMaze
{
public:
    SquareMaze();
    void makeMaze(int width, int height);
    bool canTravel(int x, int y, int dir) const;
    void setWall(int x, int y, int dir, bool exists);
    vector<int> solveMaze();
    PNG *drawMaze() const;
    PNG *drawMazeWithSolution();

private:
    int width_;
    int height_;
    int size;
    DisjointSets dsj;
    vector<vector<bool>> down;
    vector<vector<bool>> right;
};