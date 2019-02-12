#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

// below function is for Windows systems
// It prevents cmd from dissappearing after program execution
inline void keep_window_open() {char ch; cin>>ch;}

// this program outputs the message "Hello World!"

int main(){

	cout<<"Hello World!\n";
	cout<<"Here we go!\n";
	keep_window_open();
	return 0;

}
