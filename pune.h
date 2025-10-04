#ifndef PUNE_H
#define PUNE_H

#include <vector>
using namespace std;

class pune {
public:
    
    pune(char T = '\0', int P = 0);

    void setType(char t);

    // Setter for a pollution level
    void setPollution(int p);

    // Getter for city type
    char getType();

    // Getter for pollution level
    int getPollution();

    // Getter for the number of workers
    int getWorkers();

    // Getter for the number of goods
    int getGoods();

    // Getter for the population 
    int getPopulation();

    void updatePopulation();
	
	// Check if adjacent file is powerline
	bool isPowerline();
	
	// Assign worker to pune element
	void assignWorker();
	
	void assignGoods();

private:
    char type = '\0';
    int pollution = 0;
    int workers = 0;
    int goods = 0;
    int population = 0;
	bool hasWorker = false;
	bool hasGood = false;

    // Adjacency list to store neighboring cities
    vector<pune> adjacencyList;
};

#endif
