// FileIO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string root = "F:\\1015\\";
	int num = 6;
	string filename = root + to_string(num) + ".txt";
	FILE* op;
	fopen_s(&op, filename.c_str(), "w+");
	for (int i = 0;i < 5;i++) {
		fprintf(op,"%d\n",i);
	}
	fclose(op);
    return 0;
}

