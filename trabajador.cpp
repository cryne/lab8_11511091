#include <string>
#include "robot.h"
#include "trabajador.h"
#include <sstream>
using std::string;
using std::stringstream;

Trabajador::Trabajador(string serie,string material,double amperios,double precio):Robot(serie,material,amperios,precio){

}
string Trabajador::toString(){
	stringstream ss;
	ss<<"Trabajador "<<Robot::toString();
	return ss.str();
}