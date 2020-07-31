// another c++ program

#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "How old are you? ";
	cin >> age;

	if(age >= 21)
		cout << "You can drink and smoke." << endl;
	if(age >= 16)
		cout << "You can drive." << endl;
	if(age < 16)
		cout << "Sorry, not much you can do yet." << endl;

	return 0;
}
