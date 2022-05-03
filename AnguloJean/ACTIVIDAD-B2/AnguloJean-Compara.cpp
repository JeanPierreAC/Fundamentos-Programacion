#include<iostream>
using namespace std;
int main()
{
  float a,c;
  cout<<"Ingrese el valor a: "; cin>>a;
  cout<<"Ingrese el valor c: "; cin>>c;
  if(a==c)
  {
    cout<<"El valor de a= "<<a<<" es igual a c= "<<c<<endl;
  }
  else
  {
    if(a<c)
    {
      cout<<"El valor de a= "<<a<<" Es menor a c="<<c<<endl;
    }
    else
    {
      cout<<"El valor de c= "<<c<<" Es menor a= "<<a<<endl;
    }
  }
  return 0;
}
