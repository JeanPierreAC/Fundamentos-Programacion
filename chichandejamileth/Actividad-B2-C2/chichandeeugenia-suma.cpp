//================================================
//==> Nombre del programa: suma
//==> Archivo :suma.cpp
//==>Autor: jamielth chichande 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main ()
{
	float EM_x,EM_c=0,EM_a=0,EM_N;
	cout<<"ingrese laa cantidad de numeros que vas a sumar:"; cin>>EM_N;
	do{
		cout<<"ingrese el numero :"; cin>>EM_x;
		EM_c=EM_c+1;
		EM_a=EM_a+EM_x;
	}while(EM_c<EM_N);
	cout<<"suma total:"<<EM_a;
	return 0;
}


