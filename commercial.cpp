#include "commercial.h"
#include "analysis.h"

goa commercialProcess(goa& city, std::vector<std::vector<goa>>& region, int x, int y) {
    goa updatedCity = city;
    if (city.getPopulation() == 0 && isAdjacentToPowerline(region, x, y)) {
        updatedCity.updatePopulation();
    } else if (city.getPopulation() == 1 && countAdjacentOfPopulation(region, x, y, 2) >= 4) {
        updatedCity.updatePopulation();
    }
    return updatedCity;
}
