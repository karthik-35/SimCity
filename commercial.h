#ifndef COMMERCIAL_H
#define COMMERCIAL_H

#include "pune.h"
#include "main.h"

// Helper function to determine if the cell is adjacent to a powerline
bool isAdjacentToPowerline(std::vector<std::vector<pune>>& region, int x, int y);

// Function to count adjacent cells with a specified population or more
int countAdjacentOfPopulation(std::vector<std::vector<pune>>& region, int x, int y, int population);

// Main processing function for the commercial zone locality
pune commercialProcess(pune& city, std::vector<std::vector<pune>>& region, int x, int y);

#endif
