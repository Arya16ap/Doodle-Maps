#pragma once
#include <vector>
#include "core/Cell.hpp"
class Map{
    private:
        int rows;
        int cols;
        std::vector<std::vector<Cell>> grid;
    public:
        Map(int rows, int cols);
        void initMap();
        void print() const;
        bool isValidPosition(x,y) const;
        Cell& getCell(x,y) const;
        void setCellTypes(x,y,CellType type)
        int getRows() const;
        int getCols() const;
};
