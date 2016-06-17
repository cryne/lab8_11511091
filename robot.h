#pragma once
#include <string>
using std::string;

class Robot
{
	string serie;
	string material;
	double amperios;
	double precio;
public:
	Robot(string,string,double,double);
	string toString();
	string getSerie();
	string getMaterial();
	double getAmperios();
	double getPrecio();
	void setSerie(string);
	void setMaterial(string);
	void setAmperios(double);
	void setPrecio(double);
	
};