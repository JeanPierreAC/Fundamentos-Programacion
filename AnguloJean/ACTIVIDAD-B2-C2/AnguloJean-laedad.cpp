//================================================
//==> Nombre del programa: Calcula la edad
//==> Archivo : AnguloJean-laedad.cpp
//==>Autor: Angulo Cedeño Jean Pierre
//==>Fecha de elaboración: 2022-04-18
//==>Fecha ultima actualización: 2022-05-20
//=================================================
#include<iostream>
using namespace std;
int main()
{
  int aj_aac,aj_mac,aj_dac,aj_ana,aj_mna,aj_dna,aj_anio,aj_mes,aj_dia;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Calcula la edad"<<endl;
cout<<"//==> Archivo : AnguloJean-laedad.cpp"<<endl;
cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

  cout<<"Ingrese el año actual: "; cin>>aj_aac;
  cout<<"Ingrese el mes actual: "; cin>>aj_mac;
  cout<<"Ingrese el dia actual: "; cin>>aj_dac;

  cout<<"Ingrese su año de nacimiento: "; cin>>aj_ana;
  cout<<"ingrese su mes de nacimiento: "; cin>>aj_mna;
  cout<<"Ingrese su dia de nacimiento: "; cin>>aj_dna;
  if(aj_dac<aj_dna)
  {
    aj_dac=aj_dac+30;
    aj_mac=aj_mac-1;
    aj_dia=aj_dac-aj_dna;
  }
  else
aj_dia=aj_dac-aj_dna;
  if(aj_mac<aj_mna)
  {
    aj_mac=aj_mac+12;
    aj_aac=aj_aac-1;
    aj_mes=aj_mac-aj_mna;
  }
  else
    aj_mes=aj_mac-aj_mna;
  cout<<"Edad: "<<aj_aac-aj_ana<<endl;
  cout<<"Mes: "<<aj_mes<<endl;
  cout<<"Dia: "<<aj_dia<<endl;
  return 0;
}
