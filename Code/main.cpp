#include <iostream>

using namespace std;

#include "Map.h"
#include "Cell.h"
#include "Plane.h"
#include "Road.h"
#include "Airport.h"
int main() {

    vector<vector<Cell*>> cellMap(5, vector<Cell*>(5, nullptr));
    vector<vector<Cell*>> matrix(5, vector<Cell*>(5, nullptr));

    Map myMap(cellMap, matrix);
    myMap.addNode(new Cell("Building 1"), 0, 0, 2, 2);
    myMap.addNode(new Cell("Building 2"), 3, 3, 2, 2);

    myMap.printMap();

    return 0;
}
