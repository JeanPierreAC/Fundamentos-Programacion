#include<iostream>
using namespace std;
int main ()
{
	float x,N,iva,vf,c=0,a=0,desc,vb,vdes,vb2,viva;
	cout<<"ingrese el numero de producto,valor del iva y del descuento :"; cin>>N>>iva>>desc;
	do{
		
		cout<<"ingresar el precio del producto";cin>>x;
		c=c+1;
		a=a+x;
		
	}while(c<N);
	
	   vb=a;
	   vdes=vb*desc/100;
	   vb2=vb-vdes;
	   viva=vb*iva/100;
	   vf=vb2+viva;
	   cout<<"el valor a pagar es:"<<vf<<endl;
	   cout<<"tuvo un iva de:"<<viva<<endl;
       cout<<"y con el descuento de :"<<vdes;


	return 0;
}
