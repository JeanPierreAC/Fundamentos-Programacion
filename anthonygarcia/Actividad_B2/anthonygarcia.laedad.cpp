//================================================
//==> Nombre del programa: la edad
//==> Archivo : laedad.cpp
//==>Autor: Anthony Garcia
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-20
//=================================================

#include<iostream>
using namespace std;

int main()
{
  int ag_aa,ag_ma,ag_da,ag_an,ag_mn,ag_dn,ag_a,ag_m,ag_d;
	cin>>ag_aa>>ag_ma>>ag_da>>ag_an>>ag_mn>>ag_dn;
	if(ag_da>=ag_dn){
		ag_d=ag_da-ag_dn;
	}
	else{
		ag_ma=ag_ma+1;
		ag_da=ag_da+30;
		ag_d=ag_da-ag_dn;
	}
	if(ag_ma>=ag_mn){
		ag_m=ag_ma-ag_mn;
	}
	else{
		ag_aa=ag_aa-1;
		ag_ma=ag_ma+12;
		ag_m=ag_ma-ag_mn;
	}
	ag_a=ag_aa-ag_a;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: la edad"<<endl;
cout<<"//==> Archivo : laedad.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;


    cout<<ag_a<<endl;
	cout<<ag_m<<endl;
	cout<<ag_d<<endl;
    
  return 0;
  
}
