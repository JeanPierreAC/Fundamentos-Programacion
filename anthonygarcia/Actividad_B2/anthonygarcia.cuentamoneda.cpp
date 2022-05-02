#include <iostream>

using namespace std;

int main()
{
    int c=0,c1=0,c2=0,n;
    float x,a=0,a1=0,a2=0;
    cout<<"ingresar n:";
    cin>>n;
    do{
        cout<<"ingresar x:";
        cin>>x;
        c=c+1;
        a=a+1;
        if(x==0.10)
        {
            c1=c1+1;
            a1=a1+x;
            
        }else{
            
            c2=c2+1;
            a2=a2+x;
        }
        
        
    }while(c<n);
    
    cout<<"dinero total";
    cout<<a;
    5
    cout<<"dinero total 0.1";
    cout<<a1;
    cout<<"dinero total 0.25";
    cout<<a2;



    return 0;
}
