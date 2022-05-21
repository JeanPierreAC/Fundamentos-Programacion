//================================================
//==> Nombre del programa: Cuenta Moneda
//==> Archivo : AnguloJean-CuentaMoneda.cpp
//==>Autor: Angulo Cedeño Jean Pierre
//==>Fecha de elaboración: 2022-04-18
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;
int main()
{
  int aj_nm,aj_c=0,aj_c1=0, aj_c2=0;
  float aj_x, aj_t=0,aj_t1=0, aj_t2=0, aj_mon=0.10;

        cout<<endl<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Cuenta Moneda"<<endl;
	cout<<"//==> Archivo : AnguloJean-CuentaMoneda.cpp"<<endl;
	cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
	cout<<"//================================================="<<endl;

cout<<"Ingrese la cantidad de monedas: "; cin>>aj_nm;
  do
  {
    cout<<"Ingrese el valor de la monedac(0.10, 0.25): "; cin>>aj_x;
    aj_c=aj_c+1;
    aj_t=aj_t+aj_x;
    if (aj_x==aj_mon)
    {
      aj_c1=aj_c1+1;
      aj_t1=aj_t1+aj_x;
    }
    else if(aj_x==0.25)
    {
      aj_c2=aj_c2+1;
      aj_t2=aj_t2+aj_x;
    }
  }
    while(aj_c<aj_nm);
    cout<<"El numero de monedas de 0.10ctvs ingresadas es de: "<<aj_c1<<endl;
    cout<<"El valor total de monedas de 0.10ctvs es: "<<aj_t1<<endl;
    cout<<"El numero de monedas de 0.25ctvs ingresadas es: "<<aj_c2<<endl;
    cout<<"El valor total de monedas de 0.25ctvs es: "<<aj_t2<<endl;
    return 0;
  
}
