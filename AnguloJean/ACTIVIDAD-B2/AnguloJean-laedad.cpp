#include<iostream>
using namespace std;
int main()
{
  int aac,mac,dac,ana,mna,dna,año,mes,dia;
  cout<<"Ingrese el año actual: "; cin>>aac;
  cout<<"Ingrese el mes actual: "; cin>>mac;
  cout<<"Ingrese el dia actual: "; cin>>dac;

  cout<<"Ingrese su año de nacimiento: "; cin>>ana;
  cout<<"ingrese su mes de nacimiento: "; cin>>mna;
  cout<<"Ingrese su dia de nacimiento: "; cin>>dna;
  if(dac<dna)
  {
    dac=dac+30;
    mac=mac-1;
    dia=dac-dna;
  }
  else
dia=dac-dna;
  if(mac<mna)
  {
    mac=mac+12;
    aac=aac-1;
    mes=mac-mna;
  }
  else
    mes=mac-mna;
  cout<<"Edad: "<<aac-ana<<endl;
  cout<<"Mes: "<<mes<<endl;
  cout<<"Dia: "<<dia<<endl;
  return 0;
}
