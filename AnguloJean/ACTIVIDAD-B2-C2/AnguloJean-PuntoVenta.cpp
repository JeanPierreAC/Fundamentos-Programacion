//================================================
//==> Nombre del programa: Punto Venta
//==> Archivo : AnguloJean-PuntoVenta.cpp
//==>Autor: Angulo Cedeño Jean Pierre
//==>Fecha de elaboración: 2022-04-18
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;
int main()
{
  float aj_p,aj_cp,aj_i,aj_vp,aj_c=0,aj_tp=0,aj_d,aj_vbr1,aj_vbr2,aj_vd,aj_vi;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto Venta"<<endl;
cout<<"//==> Archivo : AnguloJean-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

  cout<<"Ingrese el numero de productos: "; cin>>aj_cp;
  cout<<"Ingrese el valor del iva: "; cin>>aj_i;
  cout<<"Ingrese el descuento: "; cin>>aj_d;
  do
  {
    cout<<"Ingrese el valor del producto: "; cin>>aj_p;
    aj_c=aj_c+1;
    aj_tp=aj_tp+aj_p;
  }
  while(aj_c<aj_cp);
    aj_vbr1=aj_tp;
    aj_vd=(aj_vbr1*aj_d)/100;
    aj_vbr2=aj_vbr1-aj_d;
    aj_vi=(aj_vbr1*aj_i)/100;
    aj_vp=aj_vbr2+aj_i;
    cout<<"//================================================="<<endl;
    cout<<"El valor de los productos: "<<aj_tp<<endl;
    cout<<"El iva es de: "<<aj_i<<endl;
    cout<<"El descuento es de: "<<aj_d<<endl;
    cout<<"El valor total a pagar es de: "<<aj_vp<<endl;
return 0;
}
