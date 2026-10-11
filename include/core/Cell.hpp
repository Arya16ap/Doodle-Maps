#pragma once

#include <string>

enum class CellType {
    Wall,
    Empty,
    Start,
    Treasure
};

class Cell {
private:
    int x;
    int y;
    CellType type;

public:
    Cell(int x, int y, CellType type = CellType::Empty);

    int getX() const;
    int getY() const;
    CellType getType() const;

    void setType(CellType type);

    bool isWalkable() const;
    char getSymbol() const;
    std::string toString() const;
};
