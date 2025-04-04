#include<iostream>
// programa que determina si un numero es par o impar 
using namespace std;

int n;
char r;

int main(){
	
	
	do{
		cout<<"* NO SE ACEPTAN NUMEROS DECIMALES*"<<endl;
		cout<<"Cual es el numero del que desea saber si es par o impar"<<endl;
		cout<<"Por favor ingrese el numero: "<<endl;
		cin>>n;
	
		if (n%2==0){
			cout<<"El numero ingresado"<<n<<": es par."<<endl;
		}else{
			cout<<"El numero ingresado"<<n<<": es impar."<<endl;
		}
		
		cout<<"Desea ingresar otro numero (s/n)"<<endl;
		cin>>r;
		
		system("cls");
		
	}while(r=='s'||r=='S');
	
	
	system("pause");
	
	return 0;
}
