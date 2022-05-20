//================================================
//==> Nombre del programa: laedad
//==> Archivo :laedad.cpp
//==>Autor: jamielth chichande 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main (){
	int EM_aa,EM_ma,EM_da,EM_an,EM_mn,EM_dn,EM_a,EM_m,EM_d;
	cin>>EM_aa>>EM_ma>>EM_da>>EM_an>>EM_mn>>EM_dn;
	if(EM_da>=EM_dn){
		EM_d=EM_da-EM_dn;
	}
	else{
		EM_ma=EM_ma+1;
		EM_da=EM_da+30;
		EM_d=EM_da-EM_dn;
	}
	if(EM_ma>=EM_mn){
		EM_m=EM_ma-EM_mn;
	}
	else{
		EM_aa=EM_aa-1;
		EM_ma=EM_ma+12;
		EM_m=EM_ma-EM_mn;
	}
	EM_a=EM_aa-EM_a;
	cout<<EM_a<<endl;
	cout<<EM_m<<endl;
	cout<<EM_d<<endl;
}

