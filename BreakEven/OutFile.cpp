#include "OutFile.h"
#include <fstream>
#include <string>


using namespace std;

void OutputData(int send)
{
	ofstream OutFile;
	OutFile.open("InformationData.txt");
	ifstream InFile;
	InFile.open("InputData.txt");
	
	string example;

	InFile >> example;

	OutFile << send << endl << example;

	InFile.close();
	OutFile.close();
}