#include<iostream>
using namespace std;
int main()
{
  float p,cp,i,vp,c=0,tp=0,d,vbr1,vbr2,vd,vi;
  cout<<"Ingrese el numero de productos: "; cin>>cp;
  cout<<"Ingrese el valor del iva: "; cin>>i;
  cout<<"Ingrese el descuento: "; cin>>d;
  do
  {
    cout<<"Ingrese el valor del producto: "; cin>>p;
    c=c+1;
    tp=tp+p;
  }
  while(c<cp);
    vbr1=tp;
    vd=(vbr1*d)/100;
    vbr2=vbr1-d;
    vi=(vbr1*i)/100;
    vp=vbr2+i;
    cout<<"El valor de los productos: "<<tp<<endl;
    cout<<"El iva es de: "<<i<<endl;
    cout<<"El descuento es de: "<<d<<endl;
    cout<<"El valor total a pagar es de: "<<vp<<endl;
return 0;
}
