
// NexusTestForCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <stdlib.h>
using namespace std;

int sum(int i, int j)
{
	return i + j;
}

double division(int a, int b)
{
	return (a / b);
}


void fun()
{
	int a = 10;
	int b = 20;
	float f = 0.33;
	string a1 = "hello,nice to meet you!";
	string a2 = "my name is alisa!!!";
	string a3 = a1 + a2;
	int c = sum(a, b);
	while (true)
	{
		int num;
		cout << "please iuput a num:" << endl;
		cin >> num;
		if (num != 0)
		{
			cout << "the number is:" << num << endl;
		}
		else
		{
			cout << "exception devide zero" << endl;
		}
	}
}

string readFileIntoString(const char* filename)
{
	ifstream ifile(filename);
	ostringstream buf;
	char ch;
	while (buf && ifile.get(ch))
		buf.put(ch);
	return buf.str();
}

int main()
{
	const char* fn1 = "C:\\workspace\\NexusTestForCpp\\x64\\Debug\\table.txt";
	const char* fn2 = "C:\\workspace\\NexusTestForCpp\\x64\\Debug\\xml";
	const char* fn3 = "C:\\workspace\\NexusTestForCpp\\data.json";
	string ht2 = readFileIntoString(fn1);
	string ht4 = readFileIntoString(fn2);
	string json1 = readFileIntoString(fn3);
	//fun();
	string ht1 = "<html><body>(Correct formate)hello world!</body><html>";
	string ht3 = "<html3><body2>(Wrong formate)hello world!nice to meet you!</body1><html2>";
	int y = 0;
	int x = 50;
	double z = 0;

	try {
		z = division(x, y);
	}
	catch (const char* msg) {
	}

	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file



