#include<iostream>
using namespace std;
int main()
{
  float n,cv,c=0,t=0;
  cout<<"Ingrese la cantidad de valores a sumar: "; cin>>cv;
  do
  {
    cout<<"Ingrese los valores: "; cin>>n;
    c=c+1;
    t=t+n;
  }
  while(c<cv);
  cout<<"El resultado de la suma es: "<<t<<endl;
  return 0;
}
