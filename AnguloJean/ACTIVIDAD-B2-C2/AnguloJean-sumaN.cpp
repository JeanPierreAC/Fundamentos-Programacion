//================================================
//==> Nombre del programa: Suma de varios números
//==> Archivo : AnguloJean-SumaN.cpp
//==>Autor: Angulo Cedeño Jean Pierre
//==>Fecha de elaboración: 2022-04-18
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;
int main()
{
  float aj_n,aj_cv,aj_c=0,aj_t=0;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de varios numeros"<<endl;
cout<<"//==> Archivo : AnguloJean-SumaN.cpp"<<endl;
cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

  cout<<"Ingrese la cantidad de valores a sumar: "; cin>>aj_cv;
  do
  {
    cout<<"Ingrese los valores: "; cin>>aj_n;
    aj_c=aj_c+1;
    aj_t=aj_t+aj_n;
  }
  while(aj_c<aj_cv);
  cout<<"El resultado de la suma es: "<<aj_t<<endl;
  return 0;
}
