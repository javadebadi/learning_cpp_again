#ifndef CSV_ENUM_H_
#define CSV_ENUM_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

namespace CSV_ENUM{

class CSVTable{
public:
	string delimator = ",";
	string file_path = "data.csv";

	CSVTable(){};
	CSVTable(const string& delimator_arg,
		 const string file_path_arg):
		delimator{delimator_arg}, 
		file_path{file_path_arg}{};

	void set_delimator(const string& d=","){delimator = d;};
	void info();
};

}
#endif
