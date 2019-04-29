/*
Author : Javad Ebadi
Date   : 30 Mar 2019
Description: a program to read a csv file into memory
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "CSV_ENUM.h"

using namespace std;

int main(){
	
	CSV_ENUM::CSVTable csv_table;
	csv_table.info();
	return 0;
}
