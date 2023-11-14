#include <stdio.h>
#include <conio.h> 
#include <string.h>
#include <iostream>
#include "FrameLib.h"

int main()
{
	int numRaw;
	int numSNAP;
	int numLLC;
	int numIPv4;
	int numARP;
	while (true) {
		numRaw = 0;
		numSNAP = 0;
		numLLC = 0;
		numIPv4 = 0;
		numARP = 0;
		char fileName[20];
		int i = 1;
		printf("Enter the file name(max lenght is 20): ");
		gets_s(fileName);
		FILE* in;
		int check = fopen_s(&in, fileName, "rb");
		if (check == 0) {
			do
			{
				printf("\nFrame %d\n", i);
				i++;
			} while (!readFrame(in, numRaw, numSNAP, numLLC, numIPv4, numARP));
			fclose(in);
			printStat(i, numRaw, numSNAP, numLLC, numIPv4, numARP);
		}
		else {
			std::cout << "file reading Err" << std::endl << "try to put your frames in the same directory as this programm" << std::endl;
			continue;
		}
	}
	return 0;
}
