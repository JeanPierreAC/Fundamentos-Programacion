//================================================
//==> Nombre del programa: compara
//==> Archivo :compara.cpp
//==>Autor: jamielth chichande 
//==>Fecha de elaboración:2022-04-29
//==>Fecha ultima actualización:2022-05-17
//=================================================
#include<iostream>
using namespace std;
int main () 
{
	float EM_a,EM_b;
	cout<<"ingrese los valores a,b:"; cin>>EM_a>>EM_b;
	if(EM_a==EM_b) {
		cout<<"son iguales:";
	}else
		if(EM_a>EM_b) { cout<<"a es mayor";
		}else{ cout<<"b es mayor";
		}
	return 0;
}
