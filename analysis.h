#ifndef ANALYSIS_H // Prevents multiple inclusions of this header
#define ANALYSIS_H

#include "main.h"
#include "init.h"
#include "pune.h" // Include pune class definition
#include <vector>

// Checks if the city is at the coordinates (x, y) is adjacent to a power line
bool isAdjacentToPowerline(std::vector<std::vector<pune>>& region, int x, int y);

// Counts adjacent cities with a population greater than or equal to a specified value
int countAdjacentOfPopulation(std::vector<std::vector<pune>>& region, int x, int y, int population);

#endif // ANALYSIS_H 



