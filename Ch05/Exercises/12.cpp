// Author: Javad Ebadi
// Date  : 11 Feb 2019
// "Bulls and Cows" game
// the program has a vector of 4 digits

#include<iostream>
#include<cmath>
#include<vector>

using namespace std;

constexpr int n_digits=4;

// tokenize a 4digit number to 4 separte digits
vector<int> get_guess(int num){
	vector<int> guess(n_digits);
	for(int i=0; i<n_digits; i++){
		guess[i]= -1;// assignned with -1 so that to get error when compared to numbers between 0 ... 9 for bad inputs
	}

	if(num < 0){
		cout<<"Bad input! The number should be non-negative!"<<endl;
	}
	else if(num > pow(10,n_digits) ){
		cout<<"Bad input! The number should be at most "<<n_digits<<" digits"<<endl;
	}
	else{
		for(int k=0; k<n_digits; k++){
			guess[k]=( num /  int(pow(10,n_digits-k-1)) )%10;
		}
	}
	return guess;
}

// a function to report number of bulls
int count_bulls(vector<int> number, vector<int> guess){

	int bull = 0;
	if( number.size() != guess.size() ){
		cout<<"The size of guessed number and the number you are trying to guess does not match!"<<endl;
		return -1;
	}
	for(int i=0; i<number.size(); i++){
		if( number[i] == guess[i]) bull++;
	}	
	return bull;
}

// a function to report number of cows
int count_cows(vector<int> number, vector<int> guess){

	int cow =0;
	vector<int> number_2;
	vector<int> guess_2;
	for(int i=0; i<number.size(); i++){
		if (number[i] != guess[i]){
			number_2.push_back(number[i]);
			guess_2.push_back(guess[i]);
		}
	}

	for( int i=0; i<guess_2.size(); i++){
		for( int j=0 ; j<number_2.size() ; j++){
			if ( guess_2[i] == number_2[j] ){ 
				cow++;
				break;
			}
		}
	}
	return cow;
}

// main code
int main(){

	vector<int> number{1,3,5,9};	// a vector of size 4 to store 
						// int types between 0 and 9

	vector<int> guess(n_digits);			// a vector of size 4 to store 
						// int types between 0 and 9
	int num = 0;	// an int vairable to read values from input to it
	cout<<"Guess a "<<n_digits<<"-digit number until you win:"<<endl;
	while(cin>>num){
		guess = get_guess(num);
		int bulls = count_bulls(number, guess);
		int cows = count_cows(  number, guess);
		if (bulls == number.size() ){
			cout<<"Congratulation! You WON! The number was "<<num<<endl;
			break;
		}
		cout<<bulls<<" bulls (right digit at right place)"<<endl;
		cout<<cows<< " cows (right digit at wrong place)"<<endl;
	}
	
	return 0;
}
