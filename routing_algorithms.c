// routing_algorithms.c

#include "routing_algorithms.h"
#include "network_topology.h"

#include <stdio.h>

void dijkstra(int sourceRouter, int numRouters) {
    int dist[MAX_ROUTERS]; // Distance from source to each router
    int visited[MAX_ROUTERS]; // Flag to track visited routers
    int i, j, minIndex, minDist;

    // Initialize distances and visited flags
    for (i = 0; i < numRouters; i++) {
        dist[i] = adjacencyMatrix[sourceRouter][i];
        visited[i] = 0; // Not visited
    }

    // Set distance to source router as 0 and mark it as visited
    dist[sourceRouter] = 0;
    visited[sourceRouter] = 1;

    // Iterate over all routers
    for (i = 0; i < numRouters; i++) {
        minDist = 9999; // Initialize minimum distance to infinity
        // Find the router with the shortest distance that has not been visited
        for (j = 0; j < numRouters; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                minIndex = j;
            }
        }
        visited[minIndex] = 1; // Mark the router as visited
        // Update distances to adjacent routers
        for (j = 0; j < numRouters; j++) {
            if (!visited[j] && (minDist + adjacencyMatrix[minIndex][j]) < dist[j]) {
                dist[j] = minDist + adjacencyMatrix[minIndex][j];
            }
        }
    }

    // Print shortest distances from the source router
    printf("Shortest distances from router %d:\n", sourceRouter);
    for (i = 0; i < numRouters; i++) {
        printf("Router %d: %d\n", i, dist[i]);
    }
}
