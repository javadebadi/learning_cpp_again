// a program that finds repeated words
#include <iostream>
#include <string>

using namespace std;

int main(){
	string previous="";
	string current;

	while(cin>>current){
		if(previous == current){
			cout<<"Repeated word: "<<current<<endl;
		}
		previous = current;
	}
	return 0;
}
