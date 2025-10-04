#ifndef GOA_H
#define GOA_H

#include <string>

class goa {
private:
    char type;              // Type of the cell (e.g., 'R', 'C', 'I', etc.)
    int population;         // Population in the cell
    int pollution;          // Pollution level in the cell
    bool powerline;         // Indicates if the cell contains a powerline

public:
    // Constructor
    goa();

    // Getters and Setters
    char getType() const;
    void setType(char type);

    int getPopulation() const;
    void updatePopulation();

    int getPollution() const;
    void setPollution(int pollution);

    bool isPowerline() const;
    void setPowerline(bool hasPowerline);

    // Utility functions
    void reset(); // Resets the cell to its default state
};

#endif
