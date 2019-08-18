//============================================================================
// Name        : Exe 05.cpp
// Author      : Javad Ebadi
// Version     :
// Description : Class of person
//Date: 06/22/2017
//============================================================================

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;


//============================================================================
//Classes

class Person{

private:
	string name; int bornYear; double deadYear;

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

};

//============================================================================






//============================================================================
//main program
int main() {

	//build a Person object
	Person myPerson;


	//testing displayer function
	cout<<"=============================================="<<endl;
	cout<<"=========== Testing displayPerson  ==========="<<endl;
	cout<<"=============================================="<<endl;
	myPerson.displayPerson();


	//testing setter function
	cout<<"=============================================="<<endl;
	cout<<"============= Testing setPerson  ============="<<endl;
	cout<<"=============================================="<<endl;
	myPerson.setPerson("Albert Einstein", 1875, 1955);
	cout<<"If setPerson works properly, we will get "<<endl;
	cout<<"identities of Albert Einstein in continue ..."<<endl;


	//testing getName function
	cout<<"=============================================="<<endl;
	cout<<"============== Testing getName  =============="<<endl;
	cout<<"=============================================="<<endl;
	cout<<myPerson.getName()<<endl;

	//testing getBornYear function
	cout<<"=============================================="<<endl;
	cout<<"============ Testing getBornYear  ============"<<endl;
	cout<<"=============================================="<<endl;
	cout<<myPerson.getBornYear()<<endl;

	//testing getDeadYear function
	cout<<"=============================================="<<endl;
	cout<<"============ Testing getDeadYear  ============"<<endl;
	cout<<"=============================================="<<endl;
	cout<<myPerson.getDeadYear()<<endl;

	//testing Copy constructor function
	cout<<"=============================================="<<endl;
	cout<<"========= Testing Copy Constructor  =========="<<endl;
	cout<<"=============================================="<<endl;
	cout<<"newPerson is another Person object \n"
			" which is a copy of myPerson object \n "<<endl;
	Person newPerson(myPerson);
	newPerson.displayPerson();


	//testing Destructor function
	cout<<"=============================================="<<endl;
	cout<<"============ Testing Destructor  ============="<<endl;
	cout<<"=============================================="<<endl;

	return 0;
}
//============================================================================


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
