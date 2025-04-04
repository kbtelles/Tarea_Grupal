#include<iostream>
#include<vector>
//mostrar de forma grafica la multiplicacion manual 
using namespace std;

int n;
int res=1;
char r;

int main(){
	
	do{
		cout<<"*Solo ingresar numeros enteros*"<<endl;
		cout<<"\n -----Forma grafica de multiplicacion manual-----"<<endl;
		
		cout<<"\nCuantos datos desea multiplicar: "<<endl;
		cin>>n;
		
		vector <int> num(n);
		
		cout<<"ingrese los "<<n<<" datos a multiplicar"<<endl;
		for (int l=0; l<n; l++){
			cout<<"Numero "<<(l + 1) << ": ";
      		cin>> num[l];
		}
		system("cls");
		
		for (int i=0; i<n; i++){
			res *=num[i];
			if(i==0){
				cout<<"      "<<num[i]<<endl;
			}else{
				cout<<"  x  "<<num[i]<<endl;
				cout<< " __________________ " <<endl<<endl;
  				cout<<"    "<<res<<endl;
			}	
		}
		
		cout<<"desea efectuar otra multiplicacion (s/n)"<<endl;
		cin>>r;
		
	}while(r=='s'||r=='S');
	
	
	
	
	system("pause");
	return 0;
}
