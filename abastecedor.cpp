#include <string>
#include "robot.h"
#include "abastecedor.h"
#include <sstream>
using std::string;
using std::stringstream;

Abastecedor::Abastacedor(string serie,string material,double amperios,double precio):Robot(serie,material,amperios,precio){

}	
string Abastecedor::toString(){
	stringstream ss;
	ss<<"Abastecedor "<<Robot::toString();
	return ss.str();
}