// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"
#include <iostream>
#include "mylib.h"
using namespace std;

int main()
{
	string str = "Hello World from Cmake";
	cout <<str<< endl;
	Myfunction();
	return 0;
}
