#include <string>
#include "robot.h"
#include <sstream>
using std::string;
using std::stringstream;

Robot::Robot(string serie,string material,double amperios,double precio){
	this->serie=serie;
	this->material=material;
	this->amperios=amperios;
	this->precio=precio;
}
string Robot::toString(){
	stringstream ss;
	ss<<"Robot:"<<serie<<"\n-Amperios:"<<amperios<<"\n-Material:"<<material<<"\n-Precio:"<<precio<<"\n";
	return ss.str();
}
string Robot::getSerie(){
	return serie;
}
string Robot::getMaterial(){
	return material;
}
double Robot::getAmperios(){
	return amperios;
}
double Robot::getPrecio(){
	return precio;
}
void Robot::setSerie(string serie){
	this->serie=serie;
}
void Robot::setMaterial(string material){
	this->material=material;
}
void Robot::setAmperios(double amperios){
	this->amperios=amperios;
}
void Robot::setPrecio(double precio){
	this->precio=precio;
}