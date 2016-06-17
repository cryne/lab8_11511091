#pragma once
#include "robot.h"
#include <string>
using std::string;

class Sirviente:public Robot
{
	int oxido;
public:
	Sirviente(string,string,double,double,int);
	int getOxido();
	void setOxido(int);
	string toString();
};