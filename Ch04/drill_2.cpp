#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// a fucntion to convert all distances to meter units
double convert(double number, string unit){
	double val{1.0};
	
	constexpr double m_to_cm = 100;
	constexpr double in_to_cm = 2.54;
	constexpr double ft_to_in = 12;

	if(unit == "m" )	val = number;
	if(unit == "cm")	val = number/m_to_cm;
	if(unit == "in")	val = number*in_to_cm/m_to_cm;
	if(unit == "ft")	val = number*ft_to_in*in_to_cm/m_to_cm;
	
	return val;
}

int main(){
	
	double number, small,large;
	double sum = 0.0;
	vector<double> values;
	string unit="";
	vector<string> units_list = {"m","cm","in","ft"};

	
	int j=0; // to initialize the first small and large according to first acceptable element
	cout<<"Please Enter a value"<<endl;
	for(int i=0; cin>>number>>unit;++i){
		cout<<"entered value: "<<number<<unit<<endl;
		//reject non-acceptable untis
		bool reject = true;
		for(string check: units_list){
			if (check == unit) reject = false;	
		}
		if (reject == true){
			j++;
			cout<<"bad input! Enter new value:"<<endl;
			continue;
		}
		double value = convert(number, unit);
		values.push_back(value); 
		sum += value;
		if(i==j){ // to initialize small and large for accepted inputs
			small = value;
			large = value;
		}
		if(value < small){
			cout<<"the smallest so far"<<endl;
			small = value;
		}
		if(value > large){
			cout<<"the largest so far"<<endl;
			large = value;
		}
		cout<<"Please Enter a value"<<endl;
	}
	cout<<"largest:          "<<large<<endl;
	cout<<"smallest:         "<<small<<endl;
	cout<<"sum:              "<<sum<<endl;
	cout<<"number of values: "<<values.size()<<endl;
	//print all sorted values
	sort(values.begin(), values.end());
	cout<<" ==== All entered values are: ===="<<endl;
	for(double value: values){
		cout<<value<<endl;
	}

	return 0;
}
