int ag_compara()
  {
  float ag_a,ag_b;
	cout<<"ingrese los valores a,b:"; cin>>ag_a>>ag_b;
	if(ag_a==ag_b) {
		cout<<"son iguales:";
	}else

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: compara"<<endl;
cout<<"//==> Archivo : compara.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;


    if(ag_a>ag_b) { cout<<"a es mayor";
		}else{ cout<<"b es mayor";
		}
    
  return 0;
  
}

int ag_cuentamoneda()
  {
  int ag_c=0,ag_c1=0,ag_c2=0,ag_n;
    float ag_x,ag_a=0,ag_a1=0,ag_a2=0;
    cout<<"ingresar n:";
    cin>>ag_n;
    do{
        cout<<"ingresar x:";
        cin>>ag_x;
        ag_c=ag_c+1;
        ag_a=ag_a+1;
        if(ag_x==0.10)
        {
            ag_c1=ag_c1+1;
            ag_a1=ag_a1+ag_x;
            
        }else{
            
            ag_c2=ag_c2+1;
            ag_a2=ag_a2+ag_x;
        }
        
        
    }while(ag_c<ag_n);

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: cuenta moneda"<<endl;
cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;


    cout<<"dinero total";
    cout<<ag_a;
    5
    cout<<"dinero total 0.1";
    cout<<ag_a1;
    cout<<"dinero total 0.25";
    cout<<ag_a2;
    
  return 0;
  
}

int ag_laedad()
  {
  int ag_aa,ag_ma,ag_da,ag_an,ag_mn,ag_dn,ag_a,ag_m,ag_d;
	cin>>ag_aa>>ag_ma>>ag_da>>ag_an>>ag_mn>>ag_dn;
	if(ag_da>=ag_dn){
		ag_d=ag_da-ag_dn;
	}
	else{
		ag_ma=ag_ma+1;
		ag_da=ag_da+30;
		ag_d=ag_da-ag_dn;
	}
	if(ag_ma>=ag_mn){
		ag_m=ag_ma-ag_mn;
	}
	else{
		ag_aa=ag_aa-1;
		ag_ma=ag_ma+12;
		ag_m=ag_ma-ag_mn;
	}
	ag_a=ag_aa-ag_a;

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: la edad"<<endl;
cout<<"//==> Archivo : laedad.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;


    cout<<ag_a<<endl;
	cout<<ag_m<<endl;
	cout<<ag_d<<endl;
    
  return 0;
  
}

int ag_puntoventa()
  {
  float ag_x,ag_N,ag_iva,ag_vf,ag_c=0,ag_a=0,ag_desc,ag_vb,ag_vdes,ag_vb2,ag_viva;
	cout<<"ingrese el numero de producto,valor del iva y del descuento :"; cin>>ag_N>>ag_iva>>ag_desc;
	do{
		
		cout<<"ingresar el precio del producto";cin>>ag_x;
		ag_c=ag_c+1;
		ag_a=ag_a+ag_x;
		
	}while(ag_c<ag_N);
	
	   ag_vb=ag_a;
	   ag_vdes=ag_vb*ag_desc/100;
	   ag_vb2=ag_vb-ag_vdes;
	   ag_viva=ag_vb*ag_iva/100;
	   ag_vf=ag_vb2+ag_viva;


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: punto venta"<<endl;
cout<<"//==> Archivo : puntoventa.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;



  cout<<"el valor a pagar es:"<<ag_vf<<endl;
	   cout<<"tuvo un iva de:"<<ag_viva<<endl;
       cout<<"y con el descuento de :"<<ag_vdes;
  return 0;
}

int ag_sumaN()
  {
  int ag_c=0,ag_n;
  float ag_x,ag_a=0;
  cout<<"Ingrese la cantidad de número a sumar:"; 
  cin>>ag_n;
  do{
	  cout<<"Ingrese el número : "; 
	  cin>>ag_x;
	  ag_c=ag_c+1;
	  ag_a=ag_a+ag_x;
  }while(ag_c<ag_n);


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: suma de dos numeros"<<endl;
cout<<"//==> Archivo : suman.cpp"<<endl;
cout<<"//==>Autor: Anthony Garcia"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;



  cout<<"La suma de los "<<ag_n<<" números fue "<<ag_a<<endl;
  return 0;
 } 


int
ag_menu ()
{

  int a, g, b, flag;

  system ("entrar");
  cout << "\ningrese la opcion que desee abrir:" << endl;
  cout << "\n1.->Anthony Mike Garcia Bone" << endl;
  cout << "\n2.->" << endl;
  cout << "\n3.->" << endl;
  cout << "\n4.->" << endl;
  cout << "\n5.->" << endl;
  cout << "\n6.->Salir" "" << endl;
  cout << "  ";
  cin >> a;
  system ("clear");


  do
    {
      switch (a)
	{

	case 1:
	  {
	    cout <<
	      "\nEn esta apartado se podra encontar los ejercicios de anthony garcia"
	      << endl;
	    cout << "\n1 |->Compara dos numeros:" << endl;
	    cout << "\n2.|->Contador de monedas:" << endl;
	    cout << "\n3.|->Cacular la edad de una persona:" << endl;
	    cout << "\n4.|->Punto de venta:" << endl;
	    cout << "\n5.|->Suma de dos numeros :" << endl;
	    cout << "\n6.|->Salir :" << endl;
	    cout << "" << endl;
	    cout << "";
	    cin >> g;
	    system ("clear");

	    switch (g)
	      {
	      case 1:
		{
		  ag_Compara ();
		}
		break;
	      case 2:
		{
		  ag_CuentaMoneda ();
		}
		break;
	      case 3:
		{
		  ag_Laedad ();
		}
		break;
	      case 4:
		{
		  ag_puntoventa ();
		}
		break;
	      case 5:
		{
		  ag_sumaN ();
		}
		break;
	      case 6:
		{
		  cout << "esta seguro de salir dijite (1)";
		  cout << "     ";
		  cout << "desea regresar al menu principal     " << endl;
		  cout << "  ";
		  cin >> b;
		  if (b == 1)
		    {
		      return 0;
		    }
		}
	      }
	  }
	}
      if (a != 6 && a > 5)
	{
	  cout << "\nOpcion no permitida !\n" << "Press Enter to continue\n";
	}
      if (a == 6)
	{
	  cout << "Desea salir completamente del sistema (presiona ENTER) : "
	    << endl;
	}
      flag = cin.ignore ().get ();
      cout << flag;
    }
  while (a != 6);


  return (0);

}
