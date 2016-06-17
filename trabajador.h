#pragma once
#include "robot.h"
#include <string>
using std::string;

class Trabajador:public Robot
{
public:
	Trabajador(string,string,double,double);
	string toString();
};