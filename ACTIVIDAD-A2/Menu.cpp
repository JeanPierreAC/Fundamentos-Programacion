// Autores: Angulo Cedeño jean,
// Fecha de creación: 2022-05-27
// Fecha de ultima actualizacion: 2022-05-27
#include<iostream>
#include<cstdlib>
using namespace std;
//librerias
#include"AnguloJean.h"
#include"chichande.h":wq
#include"anthonygarcia.h"
int main() {
        int a,r,d,flag;
	
	do{
		system("clear");
        cout<<"\nINGRESE LA OPCION QUE DESEE INGRESAR:"<<endl;        
	cout<<"\n1.->ANGULO CEDENO JEAN PIERRE"<<endl;
        cout<<"\n2.->CHICHANDE MENDEZ EUGENIA"<<endl;
        cout<<"\n3.->GARCIA BONE ANTHONY"<<endl;
        cout<<"\n4.->VELASCO VITE RENE"<<endl;
        cout<<"\n5.->Salir"""<<endl;
        cout<<"  "; cin>>a;
        system("clear");

                switch(a){

                case 1: cout<<"\nEJERCICIOS DE ANGULO CEDEÑO JEAN PIERRE"<<endl;
			cout<<"\n1.|-Compara dos numeros:"<<endl;
			cout<<"\n2.|-Contador de monedas:"<<endl;
			cout<<"\n3.|-Cacular la edad de una persona:"<<endl;
			cout<<"\n4.|-Suma de numeros:"<<endl;
			cout<<"\n5.|-Punto de venta :"<<endl;
			cout<<"\n6.|-Salir :"<<endl;
		cout<<""<<endl; cin>>d;
system ("clear");
			switch (d) {	
					case 1: {AJ_Compara();}break;
					case 2: {AJ_CuentaMoneda();} break; 
					case 3: {AJ_Laedad();} break;
					case 4: {AJ_SumaN();} break;		
					case 5: {AJ_PuntoVenta();} break;
			                case 6: {cout<<"PARA SALIR PRESIONE (1)"; cout<<"     ";cout<<"PARA VOLVER AL MENU PRINCIPAL PRESIONE (2) "<<endl;
       cout<<"  ";
       cin>>r;
        system("clear");
	if (r==1){
		return 0;}
			}
	}	

//==========================================================================================









//==========================================================================================			
		}


	if(a!=6 && a>5){
	cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	
  }		  
	if(a==5){
	cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;
  }
flag=cin.ignore().get();
cout<<flag;
	}while(a!=5);
	return(0);
}


