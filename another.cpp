// another c++ program

#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout << "running constructor" << endl;
	}
	~A()
	{
		cout << "running destructor" << endl;
	}
};

int main()
{
	A foo;

	return 0;
}
