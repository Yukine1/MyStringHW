#pragma once
class MyString
{
	char* str;//string
	int lenght;
	static int counter;//counter of objects
public:
	MyString();//default constructor
	MyString(const char* s);//constructor with param
	MyString(int l);//constructor with param
	~MyString();//destructor
	void Input();//inputing
	void Print();//printing
	void MyStrcpy(MyString& obj);//copy string
	bool MyStrStr(const char* str);//finding under string in our string
	int MyChar(char c);//finding symbol
	int MyStrLen();//lenght of string
	void MyStrCat(MyString& b);//unite strings
	void MyDelChr(char c);//delete symbol
	int MyStrCmp(MyString& b);//show diferences in lenght of strings
};

