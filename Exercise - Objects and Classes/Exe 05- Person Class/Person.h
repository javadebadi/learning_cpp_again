//Person Class


#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

class Person{

public:
	//Default constructor
	Person();

	//Copy constructor
	Person(const Person& );

	//setter functions
	//a function to set data in a Person object
	void setPerson(string , int , int );

	//displayer function
	// a function to print all data values in a Person object
	void displayPerson();

	//Destructor
	~Person();

	//Getter functions
	//a function to get name of the person
	string getName();
	//a function to get born year of the person
	int getBornYear();
	//a function to get dead year of the person
	int getDeadYear();
private:
	string name; int bornYear; double deadYear;

};
