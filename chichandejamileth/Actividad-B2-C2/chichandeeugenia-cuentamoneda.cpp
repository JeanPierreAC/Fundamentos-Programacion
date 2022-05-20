//================================================
//==> Nombre del programa: cuenta moneda
//==> Archivo :cuentamodema.cpp
//==>Autor: jamielth chichande 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main()
{
	int EM_n,EM_c,EM_c1,EM_c2,EM_cl,EM_cz;
	float x,al,a,a1,a2,az;
	EM_c=0;
	EM_c1=0;
	EM_c2=0;
	EM_a=0;
	EM_a1=0;
	EM_a2=0;
	cout<<"\n\tCuenta Moneda\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";cin>>EM_n;
	do
	{
	cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "; cin>>EM_x;
	
	EM_c=EM_c+1;
		EM_a=EM_a+EM_x;
		if(EM_x==0.25)
		{
			EM_c1=EM_c1+1;
			EM_a1=EM_x+va1;
		}else{
			EM_c2=EM_c2+1;
			EM_a2=EM_a2+EM_x;
		}
	}
		while(EM_c<EM_n);
		cout<<"\n\tResultado\n\n"<<endl;
		cout<<"Cantidad de monedas ingresadas: "<<EM_c<<endl;
		cout<<"Cantidad total de dinero contado: "<<EM_a<<endl;
		cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<EM_c2<<endl;
		cout<<"Cantidad total en dinero de las monedas de $0.10: "<<EM_a2<<endl;
		cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<EM_c1<<endl;
		cout<<"Cantidad total en dinero de las monedas de $0.25: "<<EM_a1<<endl;
		return 0;
}
