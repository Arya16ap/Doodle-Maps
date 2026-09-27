#pragma once
#include <iostream>
using namespace std;


class Cell{
    public:
        int x;
        int y;
        Cell(int x, int y);
        void update();
};
