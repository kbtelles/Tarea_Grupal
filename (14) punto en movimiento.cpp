#include <iostream>
#include <conio.h>  
#include <cstdlib>
#include <unistd.h> 
using namespace std;

char r;

void gotoxy(int x, int y) {
    cout << "\033[" << y << ";" << x << "H";
}

int main() {
    int maxX = 50, maxY = 20;
    int x = 0, y = 0; 
	
	do{
		 while (true) {
        	if (_kbhit()) {
            
          	  char tecla = _getch(); 
         	   if (tecla) {
         	       break; 
         	   }
       	 }

        	system("cls"); 
        	gotoxy(x, y);
       	 cout << "*";

       	 usleep(100000); 
       	 x++;
       	 if (x >= maxX) {
       	     x = 0;
      	      y++;
      	  }
      	  if (y >= maxY) {
     	       y = 0;
    	    }
  	  }

  	  cout << "\nEl movimiento se detuvo debido a tocar una tecla " << endl;
  	  
  	  cout<<"\nDesea que vuelva a moverse (s/n)"<<endl;
  	  cin>>r;
		
	}while(r=='s'||r=='S');     


    return 0;
}
