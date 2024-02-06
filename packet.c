// packet.c

#include "packet.h"
#include "routing_algorithms.h"
#include "network_topology.h" // Include network topology header to access MAX_ROUTERS

#include <stdio.h>

void transmitPacket(Packet packet) {
    printf("Transmitting packet from router %d to router %d\n", packet.source, packet.destination);
    // Call routing algorithm to find the shortest path to the destination
    dijkstra(packet.source, MAX_ROUTERS); // Now MAX_ROUTERS should be recognized
}
