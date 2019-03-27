#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main(){

	string file_name_1 = "example_01.txt";
	ifstream ist{file_name_1};
	if(!ist){
		cout<<"ERROR: can't open the "<<file_name_1<<" file"<<endl;
	}
	for(string s; ist>>s;){
		cout<<s<<endl;
	}
	ist.close();

	string file_name_2 = "example_011.txt";
	ofstream ost{file_name_2};
	if(!ost){
		cout<<"ERROR: can't open the "<<file_name_2<<" file"<<endl;
	}
	for(int i=0; i<10; i++){
		ost<<"# "<<i<<"\n";
	}
	ost.close();
	return 0;
}
