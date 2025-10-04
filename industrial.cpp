#include "industrial.h"
#include "analysis.h"

void calculatePollution(std::vector<std::vector<goa>>& region, int x, int y) {
    int population = region[x][y].getPopulation();
    if (population > 0) {
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                int newX = x + i;
                int newY = y + j;
                if (newX >= 0 && newX < region.size() && newY >= 0 && newY < region[0].size()) {
                    region[newX][newY].setPollution(population - 1);
                }
            }
        }
    }
}
