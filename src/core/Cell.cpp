#include "core/Cell.hpp"

Cell::Cell(int x, int y, CellType type)
    : x(x), y(y), type(type) {}

int Cell::getX() const {
    return x;
}

int Cell::getY() const {
    return y;
}

CellType Cell::getType() const {
    return type;
}

void Cell::setType(CellType type) {
    this->type = type;
}

bool Cell::isWalkable() const {
    return type != CellType::Wall;
}

char Cell::getSymbol() const {
    switch (type) {
        case CellType::Wall:
            return '#';

        case CellType::Empty:
            return '.';

        case CellType::Start:
            return 'P';

        case CellType::Treasure:
            return 'T';
    }

    return '?';
}

std::string Cell::toString() const {
    return "(" + std::to_string(x) + ", " +
           std::to_string(y) + ") " + getSymbol();
}

