#include <iostream>
#include "robot.h"
#include "trabajador.h"
#include "sirviente.h"
#include "abastecedor.h"
#include <vector>
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char const *argv[])
{
	int opcion=0,dia=0;
	double dinero=15000,amperaje=200000;
	vector<Robot*> disponibles;
	vector<Robot*> comprados;
	while(opcion!=7){
		cout<<"Dia:"<<dia<<endl;
		cout<<"Dinero:"<<dinero<<endl;
		cout<<"Amperios Disponibles:"<<amperaje<<endl;
		cout<<"Que desea hacer?\n1-Agregar Robots\n2-Modificar Robots\n3-Eliminar Robots\n4-Comprar Robots\n5-Usar Robots\n6-Botar Robots\n7-salir"<<endl;
		cin>>opcion;
		if (opcion==1)
		{
			int opcion2=0;
			while(opcion2!=4){
				cout<<"Que tipo de robot desea?\n1-trabajador\n2-sirviente\n3-abastecedor\n4-salir de Agregar"<<endl;
				cin>>opcion2;
				if (opcion2==1)
				{
					string serie,material;
					double amperios,precio;
					cout<<"ingrese el numero de serie del robot"<<endl;
					cin>>serie;
					cout<<"ingrese el material del que esta hecho el robot"<<endl;
					cin>>material;
					cout<<"ingrese el amperaje del robot"<<endl;
					cin>>amperios;
					cout<<"ingrese el precio del robot"<<endl;
					cin>>precio;
					disponibles.push_back(new Trabajador(serie,material,amperios,precio));
					cout<<"robot trabajador creado exitosamente"<<endl;
				}
				if (opcion2==2)
				{
					string serie,material;
					double amperios,precio;
					cout<<"ingrese el numero de serie del robot"<<endl;
					cin>>serie;
					cout<<"ingrese el material del que esta hecho el robot"<<endl;
					cin>>material;
					cout<<"ingrese el amperaje del robot"<<endl;
					cin>>amperios;
					cout<<"ingrese el precio del robot"<<endl;
					cin>>precio;
					disponibles.push_back(new Sirviente(serie,material,amperios,precio,0));
					cout<<"robot sirviente creado exitosamente"<<endl;
				}
				if (opcion2==3)
				{
					string serie,material;
					double amperios,precio;
					cout<<"ingrese el numero de serie del robot"<<endl;
					cin>>serie;
					cout<<"ingrese el material del que esta hecho el robot"<<endl;
					cin>>material;
					cout<<"ingrese el amperaje del robot"<<endl;
					cin>>amperios;
					cout<<"ingrese el precio del robot"<<endl;
					cin>>precio;
					disponibles.push_back(new Abastecedor(serie,material,amperios,precio));
					cout<<"robot abastecedor creado exitosamente"<<endl;
				}
			}
		}
		if (opcion==2)
		{
			int opcion2=0;
			while(opcion2!=2){
				for (int i = 0; i < disponibles.size(); ++i){
					cout<<i<<"-"<<disponibles[i]->toString()<<endl;
				}
				int modify;
				cout<<"ingrese la posicion que desea Modificar"<<endl;
				cin>>modify;
				if(modify<disponibles.size()){
					double amperios,precio;
					cout<<"ingrese el nuevo amperaje"<<endl;
					cin>>amperios;
					cout<<"ingrese el nuevo precio"<<endl;
					cin>>precio;
					disponibles[modify]->setAmperios(amperios);
					disponibles[modify]->setPrecio(precio);
					cout<<"robot modificado exitosamente"<<endl;
					cout<<"que desea hacer?\n1-seguir modificando\n2-salir de Modificar"<<endl;
					cin>>opcion2;
				}else{
					cout<<"posicion ingresada no existe "<<endl;
				}
			}
		}
		if (opcion==3)
		{
			int opcion2=0;
			while(opcion2!=2){
				for (int i = 0; i < disponibles.size(); ++i){
					cout<<i<<"-"<<disponibles[i]->toString()<<endl;
				}
				int borrar;
				cout<<"ingrese la posicion que desea eliminar"<<endl;
				cin>>borrar;
				if(borrar<disponibles.size()){
					disponibles.erase(disponibles.begin()+borrar);
					cout<<"robot eliminado correctamente"<<endl;
					cout<<"Que desea hacer?\n1-continuar borrando\n2-salir de eliminar"<<endl;
					cin>>opcion2;

				}else{
					cout<<"posicion ingresada no existe"<<endl;
				}
			}
			
		}
		if (opcion==4)
		{
			int opcion2=0;
			while(opcion2!=2){
				for (int i = 0; i < disponibles.size(); ++i){
					cout<<i<<"-"<<disponibles[i]->toString()<<endl;
				}
				int comprar;
				cout<<"ingrese la posicion que desea comprar"<<endl;
				cin>>comprar;
				if(comprar<disponibles.size()){
					dinero=dinero-disponibles[comprar]->getPrecio();
					comprados.push_back(disponibles[comprar]);
					disponibles.erase(disponibles.begin()+comprar);
					cout<<"robot comprado exitosamente"<<endl;
					cout<<"Que desea hacer?\n1-continuar comprando\n2-salir de compras"<<endl;
					cin>>opcion2;
				}else{
					cout<<"posicion ingresada no existe"<<endl;
				}
			}
		}
		if (opcion==5)
		{
			/* code */
		}
		if (opcion==6)
		{
			/* code */
		}
	}
	return 0;
}