// network_topology.c

#include "network_topology.h"

#include <stdio.h>

int adjacencyMatrix[MAX_ROUTERS][MAX_ROUTERS]; // Define adjacencyMatrix

void initializeNetworkTopology() {
    // Initialize adjacency matrix with link costs
    // For simplicity, let's assume a small network with 4 routers
    // Costs are represented as infinity (9999) for disconnected routers

    int i, j;
    for (i = 0; i < MAX_ROUTERS; i++) {
        for (j = 0; j < MAX_ROUTERS; j++) {
            if (i == j)
                adjacencyMatrix[i][j] = 0; // Cost to itself is 0
            else
                adjacencyMatrix[i][j] = 9999; // Infinity represents no connection
        }
    }

    // Define connections between routers (update adjacency matrix accordingly)
    adjacencyMatrix[0][1] = 2; // Cost from router 0 to router 1 is 2
    adjacencyMatrix[0][2] = 5; // Cost from router 0 to router 2 is 5
    adjacencyMatrix[1][2] = 1; // Cost from router 1 to router 2 is 1
    adjacencyMatrix[1][3] = 7; // Cost from router 1 to router 3 is 7
    adjacencyMatrix[2][3] = 3; // Cost from router 2 to router 3 is 3
}
