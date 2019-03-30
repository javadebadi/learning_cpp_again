/*
Author      : Javad Ebadi
Date        : 30 Mar 2019
Description : a program to concatinte two text files (vertically)
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

constexpr char new_line_character = '\n';

vector<string> read_file_as_lines_of_string(const string& file_name_for_read){
	ifstream ist{file_name_for_read};
	if(!ist){
		cout<<"ERROR: can't read "<<file_name_for_read<<endl;
		vector<string> s(0);
		return s;
	}
	
	char ch;
	string s="";
	vector<string> lines;

	while(ch=ist.get()){
		if(ist.eof()) break;	
		if( ch != new_line_character ){
			s += ch;
		}
		else{
			lines.push_back(s);
			s = "";
		}
	}
	
	ist.close();
	return lines;
}

string concatinate_strings_vertically(const vector<string>& v1, 
					const vector<string>& v2){
	string s = "";
	for(string str: v1){
		s += str;
		s += new_line_character ;
	}
	for(string str: v2){
		s += str;
		s += new_line_character ;
	}

	return s;

}

string concatinate_strings_horizontally(const vector<string>& v1,
					const vector<string>& v2){

	string s = "";
	vector<string> v;
	if( v1.size() != v2.size() ){
		cout<<"ERROR: can't concatinate two vectors of strings with"
			<<" non equal sizes!"<<endl;
		return s;
	}

	for(int i=0; i<v1.size(); i++){
		s = v1.at(i) + v2.at(i);
		s += new_line_character ;
		v.push_back(s);
		s = "";
	}

	s = "";
	for(auto str: v){
		s += str;
	}	
	return s;
}


string concatinate_strings(const vector<string>& s1,
				const vector<string>& s2,
				const string& how="v"){
	const string vertically = "v";
	const string horizontally = "h";
	string s = "";

	if( how == vertically){
		s = concatinate_strings_vertically(s1,s2);
	}
	else if( how == horizontally){
		s = concatinate_strings_horizontally(s1,s2);
	}
	else{
		s = "";
	}
	
	return s;

	
	
}

void write_strings_to_file(const string& file_name_for_write, 
				const string& s){
	ofstream ost{file_name_for_write};
	if(!ost){
		cout<<"ERROR: output file "<<file_name_for_write<<endl;
		return;
	}
	ost<<s;
	ost.close();
	return;
}
int main(){

	string input_file_1 = "data_1.txt";
	string input_file_2 = "data_2.txt";
	string output_file_V = "data_concat_V.txt";
	string output_file_H = "data_concat_H.txt";
	
	vector<string> s1{read_file_as_lines_of_string(input_file_1)};
        vector<string> s2{read_file_as_lines_of_string(input_file_2)};
	string s_v = concatinate_strings(s1,s2,"v");
	string s_h = concatinate_strings(s1,s2,"h");
	cout<<" ======== Vertically ========="<<endl;
	cout<<s_v;
	write_strings_to_file(output_file_V,s_v);
	cout<<" ======= Horizontally ========"<<endl;
	cout<<s_h;
	write_strings_to_file(output_file_H,s_h);
	return 0;
}
