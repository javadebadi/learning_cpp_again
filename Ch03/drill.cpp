// Drill of the chapter 3 of the book
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;	// first_name is a variable of type string
	cin >> first_name;	// read characters into first_name

	cout << "Enter the name of the friend you want to ask about:\n";
	string friend_name;	// friend_name is a variable of type string
	cin >> friend_name;	// read characters into friend_name

	cout << "Enter sex of "<<friend_name<<": Press f (if friend is female), Press m (if friend is male))\n";
	char friend_sex{0};	// friend_sex is a variable for type char and stores the friend's sex
	cin >> friend_sex;	// read character intor friend_sex

	cout << "Enter age of the recipient:\n";
	int age{0};	// age is a variable for type int and it stores the age of the recipient
	cin >> age;
	if(age <= 0 || age >110){
		cout << "you ' re kidding!\n";
		return 0;
	}

	// text of the form letter
	cout << "Dear " << first_name << ",\n";
	cout << "\n How are you? I am fine. I miss you. Please forgive me, I never said that I love you. \nI have hear that you are married now. I am very happy about that and I hope all the best for you and your partner.\n";
	cout << "Have you seen "<<friend_name<<" lately?\n";
	if(friend_sex == 'm'){
		cout << "If you see "<<friend_name<<" please ask him to call me.\n";
	}
	if(friend_sex == 'f'){
		cout << "If you see "<<friend_name<<" please ask her to call me.\n";
	}
	cout << "I hear you just had a birthday and you are "<<age<<" years old.";
	if(age < 12){
		cout << "Next year you will be "<<age+1<<".\n";
	}
	else if(age == 17){
		cout << "Next year you will be able to vote.\n";
	}
	else if(age > 70){
		cout << "I hope you are enjoying retirement.\n";
	}
	cout<<"\nYours sincerely\n\n\n";
}
