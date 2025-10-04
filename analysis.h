#ifndef ANALYSIS_H
#define ANALYSIS_H

#include "goa.h"
#include <vector>

bool isAdjacentToPowerline(std::vector<std::vector<goa>>& Region, int x, int y);
int countAdjacentOfPopulation(std::vector<std::vector<goa>>& Region, int x, int y, int population);

#endif
