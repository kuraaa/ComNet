#pragma once
#include <stdio.h>
#include <conio.h> 
#include <string.h>


const int maxFrameLength = 0x05FE;
const int Ethernet802_3 = 0xFFFF;
const int EthernetSNAP = 0xAA;
const int numMAC = 6;




int readFrame(FILE* in, int &numRaw, int &numSNAP, int &numLLC, int &numIPv4, int &numARP);
int readDatagram(FILE* in);
int BPDU(FILE* in);
int ARP(FILE* in);
void printStat(int i, int numRaw, int numSNAP, int numLLC, int numIPv4, int numARP);