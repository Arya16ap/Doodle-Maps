#include "core/Map.hpp"
#include "core/Cell.hpp"
#include <iostream>

void Map::initMap(){
    std::cout<<"Hello world";
    Cell cell(1,2,CellType::Treasure);
    std::cout << cell.toString() << '\n';
    std::cout << "Walkable: " << cell.isWalkable() << '\n';

    cell.setType(CellType::Wall);

    std::cout << "Walkable after wall: "
              << cell.isWalkable() << '\n';

}
