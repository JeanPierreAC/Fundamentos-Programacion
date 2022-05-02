#include <iostream>

using namespace std;

int main()
{   
    cout<<"digite 2 numeros:";
    cin>>n1>>n2;
    
    
    if(n1==n2){
        cout<<"ambos numeros son iguales";
    }
    else if(n1>n2){
        cout<<"el mayor es: "<<n1;
    }
    else{
        cout<<"el mayor es:"<<n2;
    }
    
    
    return 0;
}
