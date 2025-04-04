#include<iostream>
// programa para convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa

using namespace std;

int n;
double datos,res;
char r;

int main(){
	
	do{
		cout<<"________________Conversiones__________________"<<endl;
		cout<<"Elija la opcion que desea utilizar"<<endl;
		cout<<"Kilometos a millas____(1)"<<endl;
		cout<<"Metros a pulgadas_____(2)"<<endl;
		cout<<"Libras a kilos________(3)"<<endl;
		cout<<"Millas a kilometros___(4)"<<endl;
		cout<<"Pulgadas a metros_____(5)"<<endl;
		cout<<"Kilos a libras________(6)"<<endl;
		cin>>n;
		
		system("cls");
		
		switch (n){
			case 1://ingrese kilometros 
				cout<<"----Kilometos a millas----"<<endl;
				cout<<"Ingrese la cantidad de kilometros: "<<endl;
				cin>>datos;
				res= datos*0.621371;
				cout<<"Los "<<datos<<" kilometros en millas son: "<<res<<endl;
				
				break;
			
			case 2://ingrese metros 
				cout<<"----Metros a pulgadas----"<<endl;
				cout<<"Ingrese la cantidad de metros: "<<endl;
				cin>>datos;
				res= datos*39.3701 ;
				cout<<"Los "<<datos<<" metros en pulgadas son: "<<res<<endl;
				
				break;
				
			case 3:// ingrese libras
				cout<<"----Libras a kilos----"<<endl;
				cout<<"Ingrese la cantidad de libras: "<<endl;
				cin>>datos;
				res= datos*0.453592;
				cout<<"Las "<<datos<<" libras en kilos son: "<<res<<endl;
				
				break;
				
			case 4://ingrese millas
				cout<<"----Millas a kilometros----"<<endl;
				cout<<"Ingrese la cantidad de millas: "<<endl;
				cin>>datos;
				res= datos*1.60934;
				cout<<"Las "<<datos<<" millas en kilometros son: "<<res<<endl;
				
				break;
				
			case 5://ingrese pulgadas 
				cout<<"----Pulgadas a metros----"<<endl;
				cout<<"Ingrese la cantidad de pulgadas: "<<endl;
				cin>>datos;
				res= datos*0.0254;
				cout<<"Las "<<datos<<" pulgadas en kilometros son: "<<res<<endl;
				
				break;
				
			case 6:// ingrese kilos 
				cout<<"----Kilos a libras----"<<endl;
				cout<<"Ingrese la cantidad de kilos: "<<endl;
				cin>>datos;
				res= datos*2.20462;
				cout<<"Los "<<datos<<" kilos en libas son: "<<res<<endl;
				
				break;			
			
			default :
				cout<<"Opcion seleccionada no existe"<<endl;
		}
		
		cout<<"Desea utilizar una conversion de nuevo (s/n)"<<endl;
		cin>>r;
		
	}while(r=='s'||r=='S');
	
	
	system("pause");
	
	return 0;
}
