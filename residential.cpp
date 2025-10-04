#include "residential.h"
#include "analysis.h"

goa residentialProcess(goa& city, std::vector<std::vector<goa>>& Region, int x, int y) {
    goa updatedCity = city;

    // If the city has no population
    if (city.getPopulation() == 0) {
        // Check if the city is adjacent to a powerline or has at least one adjacent populated city
        if (isAdjacentToPowerline(Region, x, y) || countAdjacentOfPopulation(Region, x, y, 1) >= 1) {
            updatedCity.updatePopulation();
            return updatedCity;
        }
        return updatedCity;    
    } 
    // If the city has a population of 1 and at least two adjacent populated cities
    else if (city.getPopulation() == 1 && countAdjacentOfPopulation(Region, x, y, 1) >= 2) {
        updatedCity.updatePopulation();
        return updatedCity;
    } 
    // If the city has a population of 2 and at least four adjacent cities with a population of 2
    else
