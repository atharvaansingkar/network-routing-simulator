// packet.h

#ifndef PACKET_H
#define PACKET_H

typedef struct Packet {
    int source;
    int destination;
} Packet;

void transmitPacket(Packet packet);

#endif
