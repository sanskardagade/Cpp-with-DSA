// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Vehicle {
public:
	virtual void GeeksforGeeks_Print()
	{
		cout << "Base Function" << endl;
	}
};

class Bike : public Vehicle {
public:
	virtual void GeeksforGeeks_Print()
	{
		cout << "Derived Function" << endl;
	}
};

int main()
{
	Bike b;
    Vehicle *a;
    a = &b;
    a->GeeksforGeeks_Print();
}
 