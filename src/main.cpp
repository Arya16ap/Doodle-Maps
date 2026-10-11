#include<iostream>
#include "core/Cell.hpp"

int main(){
    Cell cell(2,3, CellType::Treasure);
    std::cout<<cell.toString()<<'\n';
    std::cout << "Walkable: " << cell.isWalkable() << '\n';

    cell.setType(CellType::Wall);

    std::cout << "Walkable after wall: "
              << cell.isWalkable() << '\n';

    return 0;
}
