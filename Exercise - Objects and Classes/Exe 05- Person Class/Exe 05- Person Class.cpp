//============================================================================
// Name        : Exe 05.cpp
// Author      : Javad Ebadi
// Version     :
// Description : Class of person
//Date: 06/22/2017
//============================================================================


#include "Person.h"



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


