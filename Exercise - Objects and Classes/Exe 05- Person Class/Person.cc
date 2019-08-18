#include "Person.h"

//============================================================================
//Functions of Person Class

//Default constructor
Person::Person(){name="Javad Ebadi"; bornYear=1990; deadYear=2057;};

//Copy constructor
Person::Person(const Person& file){
	name = file.name;
	bornYear= file.bornYear;
	deadYear = file.deadYear;
}

//Destructor
Person::~Person() {cout<<"The created object is now destroyed. "<<endl;};

//setter functions
void Person::setPerson(string nam, int born, int dead){
	name = nam;
	bornYear = born;
	deadYear = dead;
}


//displayer function
void Person::displayPerson(){
	cout<<"Name of the person      : "<<name<<endl;
	cout<<"Born Year of the Person : "<<bornYear<<endl;
	cout<<"Dead Year of the Person : "<<deadYear<<endl;
}


//Getter Functions
//a function to get name of the person
string Person::getName(){
	return name;
};
//a function to get born year of the person
int Person::getBornYear(){
		return bornYear;
	};

//a function to get dead year of the person
int Person::getDeadYear(){
		return deadYear;
}
