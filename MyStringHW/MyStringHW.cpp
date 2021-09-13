#include <iostream>
#include "MyString.h"
using namespace std;

int main()
{
	MyString obj1("Test");
	obj1.Print();

	MyString obj2("Test 2");
	obj2.MyStrcpy(obj1);

	MyString obj3(30);
	obj3.Input();
	obj3.MyChar('g');
	obj3.Print();

	MyString obj4("Test 4");
	if (obj4.MyStrStr("Something") == true)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
	obj4.Print();

	MyString obj5("Something");
	cout << "Lenght of string: " << obj5.MyStrLen();
	obj5.MyDelChr('t');
	obj5.MyStrCmp(obj4);
	obj5.Print();
}

