int AJ_Compara(){
float aj_a,aj_c;

        cout<<endl<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Compara dos números"<<endl;
	cout<<"//==> Archivo : AnguloJean-Compara.cpp"<<endl;
	cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
	cout<<"//================================================="<<endl;

  cout<<"Ingrese el valor a: "; cin>>aj_a;
  cout<<"Ingrese el valor c: "; cin>>aj_c;
  if(aj_a==aj_c)
  {
    cout<<"El valor de: "<<aj_a<<" es igual a: "<<aj_c<<endl;
  }
  else
  {
    if(aj_a<aj_c)
    {
      cout<<"El valor de: "<<aj_a<<" Es menor a: "<<aj_c<<endl;
    }
    else
    {
      cout<<"El valor de: "<<aj_c<<" Es menor a: "<<aj_a<<endl;
    }
  }
  return 0;
}

int AJ_CuentaMoneda(){
  int aj_nm,aj_c=0,aj_c1=0, aj_c2=0;
  float aj_x, aj_t=0,aj_t1=0, aj_t2=0, aj_mon=0.10;

        cout<<endl<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Cuenta Moneda"<<endl;
	cout<<"//==> Archivo : AnguloJean-CuentaMoneda.cpp"<<endl;
	cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
	cout<<"//================================================="<<endl;

cout<<"Ingrese la cantidad de monedas: "; cin>>aj_nm;
  do
  {
    cout<<"Ingrese el valor de la monedac(0.10, 0.25): "; cin>>aj_x;
    aj_c=aj_c+1;
    aj_t=aj_t+aj_x;
    if (aj_x==aj_mon)
    {
      aj_c1=aj_c1+1;
      aj_t1=aj_t1+aj_x;
    }
    else if(aj_x==0.25)
    {
      aj_c2=aj_c2+1;
      aj_t2=aj_t2+aj_x;
    }
  }
    while(aj_c<aj_nm);
    cout<<"El numero de monedas de 0.10ctvs ingresadas es de: "<<aj_c1<<endl;
    cout<<"El valor total de monedas de 0.10ctvs es: "<<aj_t1<<endl;
    cout<<"El numero de monedas de 0.25ctvs ingresadas es: "<<aj_c2<<endl;
    cout<<"El valor total de monedas de 0.25ctvs es: "<<aj_t2<<endl;
    return 0;

}

int AJ_PuntoVenta(){
  float aj_p,aj_cp,aj_i,aj_vp,aj_c=0,aj_tp=0,aj_d,aj_vbr1,aj_vbr2,aj_vd,aj_vi;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto Venta"<<endl;
cout<<"//==> Archivo : AnguloJean-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

  cout<<"Ingrese el numero de productos: "; cin>>aj_cp;
  cout<<"Ingrese el valor del iva: "; cin>>aj_i;
  cout<<"Ingrese el descuento: "; cin>>aj_d;
  do
  {
    cout<<"Ingrese el valor del producto: "; cin>>aj_p;
    aj_c=aj_c+1;
    aj_tp=aj_tp+aj_p;
  }
  while(aj_c<aj_cp);
    aj_vbr1=aj_tp;
    aj_vd=(aj_vbr1*aj_d)/100;
    aj_vbr2=aj_vbr1-aj_d;
    aj_vi=(aj_vbr1*aj_i)/100;
    aj_vp=aj_vbr2+aj_i;
    cout<<"//================================================="<<endl;
    cout<<"El valor de los productos: "<<aj_tp<<endl;
    cout<<"El iva es de: "<<aj_i<<endl;
    cout<<"El descuento es de: "<<aj_d<<endl;
    cout<<"El valor total a pagar es de: "<<aj_vp<<endl;
return 0;
}

int AJ_Laedad(){
  int aj_aac,aj_mac,aj_dac,aj_ana,aj_mna,aj_dna,aj_anio,aj_mes,aj_dia;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Calcula la edad"<<endl;
cout<<"//==> Archivo : AnguloJean-laedad.cpp"<<endl;
cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

  cout<<"Ingrese el año actual: "; cin>>aj_aac;
  cout<<"Ingrese el mes actual: "; cin>>aj_mac;
  cout<<"Ingrese el dia actual: "; cin>>aj_dac;

  cout<<"Ingrese su año de nacimiento: "; cin>>aj_ana;
  cout<<"ingrese su mes de nacimiento: "; cin>>aj_mna;
  cout<<"Ingrese su dia de nacimiento: "; cin>>aj_dna;
  if(aj_dac<aj_dna)
  {
    aj_dac=aj_dac+30;
    aj_mac=aj_mac-1;
    aj_dia=aj_dac-aj_dna;
  }
  else
aj_dia=aj_dac-aj_dna;
  if(aj_mac<aj_mna)
  {
    aj_mac=aj_mac+12;
    aj_aac=aj_aac-1;
    aj_mes=aj_mac-aj_mna;
  }
  else
    aj_mes=aj_mac-aj_mna;
  cout<<"Edad: "<<aj_aac-aj_ana<<endl;
  cout<<"Mes: "<<aj_mes<<endl;
  cout<<"Dia: "<<aj_dia<<endl;
  return 0;
}

int AJ_SumaN()
{
  float aj_n,aj_cv,aj_c=0,aj_t=0;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de varios numeros"<<endl;
cout<<"//==> Archivo : AnguloJean-SumaN.cpp"<<endl;
cout<<"//==>Autor: Angulo Cedeño Jean Pierre"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-18"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

  cout<<"Ingrese la cantidad de valores a sumar: "; cin>>aj_cv;
  do
  {
    cout<<"Ingrese los valores: "; cin>>aj_n;
    aj_c=aj_c+1;
    aj_t=aj_t+aj_n;
  }
  while(aj_c<aj_cv);
  cout<<"El resultado de la suma es: "<<aj_t<<endl;

  return 0;
}

int AJ_menu() {
        int a,r,d,flag;

        system("color 1f ");
        cout<<"\nINGRESE LA OPCION QUE DESEE INGRESAR:"<<endl;
        cout<<"\n1.->ANGULO CEDENO JEAN PIERRE"<<endl;
        cout<<"\n2.->"<<endl;
        cout<<"\n3.->"<<endl;
        cout<<"\n4.->"<<endl;
        cout<<"\n5.->"<<endl;
        cout<<"\n6.->Salir"""<<endl;
        cout<<"  "; cin>>a;
        system("clear");


        do{
                switch(a){

                case 1: {cout<<"\nAQUI PODRAS ENCONTRAS TODOS LOS EJERCIOS DE ANGULO JEAN"<<endl;
        cout<<"\n1|->1Suma de dos numeros:"<<endl;
        cout<<"\n2.|->Compara dos numeros:"<<endl;
        cout<<"\n3.|->Punto de venta:"<<endl;
        cout<<"\n4.|->Contador de monedas:"<<endl;
        cout<<"\n5.|->Cacular la edad de una persona :"<<endl;
        cout<<"\n6.|->Salir :"<<endl;
        cout<<""<<endl;
        cout<<""; cin>>d;
        system("clear");

switch(d){
        case 1:{AJ_Compara();}break;
        case 2:{AJ_CuentaMoneda();}break;
        case 3:{AJ_Laedad();}break;
        case 4:{AJ_SumaN();}break;
        case 5:{AJ_PuntoVenta();}break;
        case 6:{cout<<"si esta seguro de salir dijite (-1-)"; cout<<"     ";cout<<"Si decea regresar al menu principal     "<<endl;
        cout<<"  ";
        cin>>r;
        if (r==1){
                return 0;}
}
}
}
}
        if(a!=6 && a>5){
        cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";
 }
        if(a==6){
        cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;
  }
       flag=cin.ignore().get();
       cout<<flag;
       }while(a!=6);


        return(0);

}
