#include <string>
#include "robot.h"
#include "sirviente.h"
#include <sstream>
using std::string;
using std::stringstream;

Sirviente::Sirviente(string serie,string material,double amperios,double precio,int oxido):Robot(serie,material,amperios,precio){
	this->oxido=oxido;
}
int Sirviente::getOxido(){
	return oxido;
}
void Sirviente::setOxido(int){
	this->oxido=oxido;
}
string Sirviente::toString(){
	stringstream ss;
	ss<<"Sirviente "<<Robot::toString();
	return ss.str();
}