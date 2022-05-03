#include <iostream>

using namespace std;

int main()
{
    int edad;
    
    cout<<"digite su edad:";
    cin>>edad;
    //18-19-20-21-22-23-24
    if((edad>=18)&&(edad<=24)){
        cout<<"su edad esta en el rango:";
    }
    else{
        cout<<"su edad esta fuera del rango:";
    }

    return 0;
}
