#include "analysis.h"

bool isAdjacentToPowerline(std::vector<std::vector<goa>>& Region, int x, int y) {
    int directions[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    for (int i = 0; i < 8; i++) {
        int newX = x + directions[i][0];
        int newY = y + directions[i][1];
        if (newX >= 0 && newX < Region.size() && newY >= 0 && newY < Region[0].size()) {
            if (Region[newX][newY].isPowerline()) {
                return true;
            }
        }
    }
    return false;
}

int countAdjacentOfPopulation(std::vector<std::vector<goa>>& Region, int x, int y, int population) {
    int count = 0;
    int directions[8][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
    for (int i = 0; i < 8; i++) {
        int newX = x + directions[i][0];
        int newY = y + directions[i][1];
        if (newX >= 0 && newX < Region.size() && newY >= 0 && newY < Region[0].size() && Region[newX][newY].getPopulation() >= population) {
            count++;
        }
    }
    return count;
}
