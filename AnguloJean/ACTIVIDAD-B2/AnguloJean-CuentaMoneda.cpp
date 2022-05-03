#include<iostream>
using namespace std;
int main()
{
  int nm,c=0,c1=0, c2=0;
  float x, t=0,t1=0, t2=0, mon=0.10;
  cout<<"Ingrese la cantidad de monedas: "; cin>>nm;
  do
  {
    cout<<"Ingrese el valor de la monedac(0.10, 0.25): "; cin>>x;
    c=c+1;
    t=t+x;
    if (x==mon)
    {
      c1=c1+1;
      t1=t1+x;
    }
    else if(x==0.25)
    {
      c2=c2+1;
      t2=t2+x;
    }
  }
    while(c<nm);
    cout<<"El numero de monedas de 0.10ctvs ingresadas es de: "<<c1<<endl;
    cout<<"El valor total de monedas de 0.10ctvs es: "<<t1<<endl;
    cout<<"El numero de monedas de 0.25ctvs ingresadas es: "<<c2<<endl;
    cout<<"El valor total de monedas de 0.25ctvs es: "<<t2<<endl;
    return 0;
  
}
