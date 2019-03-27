// Author: Javad Ebadi
// Date: 23 Mar 2019
// A program to read a data file and fill a vector of class

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

class Student{
public:
	string first_name{""};
	string last_name{""};
	double score{0.0};
	Student(const string& f_name, 
		const string& l_name, 
		const double& scr): 
		first_name{f_name}, last_name{l_name}, score{scr}{};

	void print();
};

void  Student::print(){
	cout<<first_name<<" "<<last_name<<" "<<score<<endl;
}


int main(){

	string file_name{"example_02_score.dat"};
	ifstream ist{file_name};
	if(!ist){
		cout<<"ERROR: can't open the file"<<endl;
	}

	vector<Student> students;
	string f_name;
	string l_name;
	double scr;
	
	while(ist>>f_name>>l_name>>scr){
		Student student(f_name,l_name,scr);
		students.push_back(student);
	}

	
	for(auto s: students){
		s.print();
	}
	return -1;

}
