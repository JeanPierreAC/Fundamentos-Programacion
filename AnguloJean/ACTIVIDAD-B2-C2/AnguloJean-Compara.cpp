//================================================
//==> Nombre del programa: Compara dos números
//==> Archivo : AnguloJean-Compara.cpp
//==>Autor: Angulo Cedeño Jean Pierre
//==>Fecha de elaboración: 2022-04-18
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;
int main()
{
  float aj_a,aj_c;

        cout<<endl<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara dos números"<<endl;
	cout<<"//==> Archivo : AnguloJean-Compara.cpp"<<endl;
	cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
	cout<<"//================================================="<<endl;

  cout<<"Ingrese el valor a: "; cin>>aj_a;
  cout<<"Ingrese el valor c: "; cin>>aj_c;
  if(aj_a==aj_c)
  {
    cout<<"El valor de: "<<aj_a<<" es igual a: "<<aj_c<<endl;
  }
  else
  {
    if(aj_a<aj_c)
    {
      cout<<"El valor de: "<<aj_a<<" Es menor a: "<<aj_c<<endl;
    }
    else
    {
      cout<<"El valor de: "<<aj_c<<" Es menor a: "<<aj_a<<endl;
    }
  }
  return 0;
}
