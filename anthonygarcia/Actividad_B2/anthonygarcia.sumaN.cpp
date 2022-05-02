#include <iostream>

using namespace std;

int main()
{
    int i=0,n;
    flout x,s=0;
    cout<<"ingresar n:";
    cin>>n;
    do{
        
        cout<<"ingresar x:";
        cin>>x;
        i=i+1;
        s=s+x;
        
     
    }while(i<n);
    
    cout<<"la cantidad de numeros ingresados es:"<<i<<endl;
    cout<<"la suma de los numeros fue:"<<s<<endl;

    return 0;
}
