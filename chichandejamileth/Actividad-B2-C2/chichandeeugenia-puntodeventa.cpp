//================================================
//==> Nombre del programa: punto de venta
//==> Archivo :punta.cpp
//==>Autor: jamielth chichande 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main ()
{
	float EM_x,EM_N,EM_iva,EM_vf,EM_c=0,EM_a=0,EM_desc,EM_vb1,EM_vdes,EM_vb2,EM_viva;
	cout<<"ingrese el numero de producto,valor del iva y del descuento :"; cin>>EM_N>>EM_iva>>EM_desc;
	do{
		cout<<"ingrese el precio del producto";cin>>EM_x;
		EM_c=EM_c+1;
		EM_a=EM_a+EM_x;
	}while(EM_c<EM_N);
	EM_vb1=EM_a;
	EM_vdes=EM_vb1*EM_desc/100;
	EM_vb2=EM_vb1-EM_vdes;
	EM_viva=EM_vb1*EM_iva/100;
	EM_vf=EM_vb2+EM_viva;
	cout<<"su valor a pagar es de:"<<EM_vf<<endl;
	cout<<"tuvo un iva de:"<<EM_viva<<endl;
cout<<"y con un descuento de :"<<EM_vdes;
	return 0;
}


