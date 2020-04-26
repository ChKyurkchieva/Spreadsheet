#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

class Expression
{
	char* expression;
public:
	virtual void evaluate() = 0;
};