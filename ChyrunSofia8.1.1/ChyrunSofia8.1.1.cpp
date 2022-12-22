// ChyrunSofia8.1.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_08_1.cpp
// < Чирун Софія >
// Лабораторна робота № 8.1.1
// Пошук та заміна символів у літерному рядку ітераційним способом
// Варіант 18

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int Count(char* str)
{
	if (strlen(str) < 0)
	   return 0;
	int k = 0;
	for (int i = 0; str[i] != 0; i++)
		if (str[i] == '.')
		   k++;
	return k;
}

int Count4Poit(char* str, int number)
{
	if (strlen(str) < 0)
	   return 0;
	int k = 0, j=0;
	if (number < 4) 
	{
	   cout << ". <4"<<endl;
	   return 0;
	}
	else 
	{
	   for (int i = strlen(str) - 1; i >= 0; i--)
		   if (str[i] == '.' && k < 4)
		   {
			  k++;
			  j = i;
		   }
	}
	return j;
}

char* Change(char* str)
{
	size_t len = strlen(str);
	if (len < 0)
	   return str;
	char* tmp = new char[len * 2 / 1 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;
		while (i < len && str[i] != 0)
		{
			if (str[i] == '.')
			{
			   strcat(t, "**");
			   t += 2;
			   i += 1;
			}
			else
			{
			   *t++ = str[i++];
			   *t = '\0';
			}
		}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy(str, tmp);
	return tmp;
}

int main()
{
	char str[101];
	int number;
	cout << "Enter string with '. >=4':" << endl;
	cin.getline(str, 100);
	number = Count(str);
	cout << "String contained " << number << " groups of '. >=4'" << endl;
	cout << "Number i is " << Count4Poit(str, number)+1 << endl;
	char* dest = new char[151];
	dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}
