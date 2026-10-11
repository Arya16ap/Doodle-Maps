#include "core/Map.hpp"
#include <iostream>

Map::Map(int rows, int cols){
    this->rows = rows;
    this->cols = cols;
    this->grid = std::vector<std::vector<Cell>>(
        rows,
        std::vector<Cell>(cols, Cell(0, 0, CellType::Empty))

    );

    initMap();
}


void Map::initMap(){
    for(int y = 0; y < rows; y++) {
        for(int x = 0; x< cols; x++){
            grid[y][x] = Cell(x,y, CellType:: Empty);
        }
    }
}

void Map::print() const{
    for( int i = 0; i< rows; i++){
        for(int j = 0; j< cols; j++){
            std::cout<<grid[i][j].getSymbol() << ' ';
        }
        std::cout << '\n';
    }
}

bool Map::isValidPosition(x,y){
    return x >= 0 && x < cols &&
           y >= 0 && y < rows;
}

Cell& Map::getCell(x,y){
    if(!isValidPosition(x,y)){
        throw std::out_of_range("invalid map position");
    }
    return grid[x][y];
}

void Map::setCellTypes(x,y, CellType type){
    getCell(x,y).setType(type);
}

int Map::getRows(){
    return rows;
}
int Map::getCols(){
    return cols;
}
