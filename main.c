// main.c

#include <stdio.h>
#include "network_topology.h"
#include "packet.h"

int main() {
    // Initialize network topology
    initializeNetworkTopology();

    // Simulate packet transmission
    Packet packet = {0, 3}; // Source router: 0, Destination router: 3
    transmitPacket(packet);

    return 0;
}
