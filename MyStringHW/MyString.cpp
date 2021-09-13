#include "MyString.h"
#include <iostream>
using namespace std;
MyString::MyString()//constructor
{
    this->str = nullptr;
    this->lenght = 80;
    counter++;
}

MyString::MyString(const char* s)//constructor with param
{
    this->lenght = strlen(s) + 1;
    this->str = new char[this->lenght];
    strcpy_s(this->str, this->lenght, s);
    counter++;
}

MyString::MyString(int lenght)//constuctor with param
{
    this->lenght = lenght;
    this->str = new char[lenght + 1];
    counter++;
}

MyString::~MyString()//destructor
{
    delete[]this->str;
    this->str = nullptr;
}

void MyString::Input()//inputing
{
    char buff[512];
    cout << "Enter you string: ";
    cin.getline(buff, 512);
    this->lenght = strlen(str) + 1;
    strcpy_s(this->str, lenght, buff);
}

void MyString::Print()//printing
{
    cout << "String: " << str << endl;
    cout << "Count of objects: " << counter << endl;
}

void MyString::MyStrcpy(MyString& obj)//copying
{
    for (int i = 0; i < obj.lenght; i++)
    {
        this->str[i] = obj.str[i];
    }
}

bool MyString::MyStrStr(const char* str)//finding under string in string
{
    int buff = strlen(str);
    int count = 0;
    for (size_t i = 0; i < this->lenght; i++)
    {
        if (str[i] == this->str[i])
        {
            count++;
        }
        else if (count == buff)
        {
            return true;
        }
        else if (str[i]!= this->str[i])
        {
            count = 0;
        }
        else if (i == this->lenght - 1 && count != buff)
        {
            return false;
        }
    }
}

int MyString::MyChar(char c)//finding symbol
{
    for (int i = 0; i < this->lenght; i++)
    {
        if (this->str[i] == c)
        {
            return i;
        }
    }
    return -1;
}

int MyString::MyStrLen()//length of string
{
    for (int i = 0; i < this->lenght; i++)
    {
        if (this->str[i]!='\0')
        {
            counter++;
        }
    }
    return counter;
}

void MyString::MyStrCat(MyString& b)//unite strings
{   
    int lenght = strlen(this->str);
    int ObjLenght = strlen(b.str);
    int SumLenght = lenght + ObjLenght;

    char* buff = new char[(lenght + 1) + ObjLenght];
    for (int i = 0; i < lenght; i++)
    {
        buff[i] = str[i];
    }
    for (int i = lenght; i < SumLenght; i++)
    {
        buff[i] = b.str[i - lenght];
    }
    buff[SumLenght] = '\0';
    cout << "\n" << buff;
}

void MyString::MyDelChr(char c)//delete symbol
{
    int lenght = strlen(this->str) + 1;
    char* buff = new char[lenght];
    int count = 0;
    for (size_t i = 0; i < lenght + 1; i++)
    {
        if (this->str[i] == c)
        {
            buff[count] = ' ';
        }
        else
        {
            buff[count] = this->str[i];
            count++;
        }
    }
    buff[lenght - 2] = '\0';
    cout << endl;
    cout << count;
}

int MyString::MyStrCmp(MyString& b)//show value of objects
{
    int lenght = strlen(this->str);
    int ObjLenght = strlen(b.str);
    if (lenght > ObjLenght)
    {
        return 1;
    }
    else if (lenght < ObjLenght)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}
