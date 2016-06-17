#pragma once
#include "robot.h"
#include <string>
using std::string;

class Abastacedor:public Robot
{
public:
	Abastacedor(string,string,double,double);	
	string toString();
};