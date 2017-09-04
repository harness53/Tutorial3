#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;

	if (a > b)
	{
		cout << "variable a is greater than variable b" << endl;
		cout << "Value of a is " << a << " value of b is " << b << endl;
	}
	else if (a == b)
	{
		cout << "variables are the exact same, idiot" << endl;
		cout << "a = b" << endl;
	}
	else
	{
		cout << "variable a is less than variable b" << endl;
		cout << "Value of a is " << a << " value of b is " << b << endl;
	}
	system("pause");
	return 0;
}