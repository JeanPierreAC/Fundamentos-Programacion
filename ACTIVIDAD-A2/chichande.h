//
// FUNCIONES DE jamileh chichande
//
int EM_Suma()
{
	int em_ax, em_bx, em_cx;
	cout<<"\n\tSUMA DE 2 N�MEROS"<<endl;
	cout<<"Ingrese el primer n�mero a sumar: "; cin>>em_ax;
	cout<<"Ingrese el segundo n�mero a sumar: "; cin>>em_bx;
	em_cx = em_ax+em_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<em_ax<<" + "<<em_bx<<" es igual a: "<<em_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: Jamileth chicande"<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci�n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int EM_CuentaMoneda()
{
	int em_n, em_c=0, em_c1=0, em_c2=0, em_cl, em_cz;
	float e._x, em_al, em_a=0, em_a1=0, em_a2=0, em_az;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>em_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>em_x;
		em_c = em_c+1;
		em_a = em_a+em_x;
		if(em_x==0.25)
			{
				em_c1 = em_c1+1;
				em_a1 = em_x+em_a1;
			}
		else
			{
				em_c2 = em_c2+1;
				em_a2 = em_a2+em_x;
			}
	}
	while(em_c<em_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<em_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<em_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<em_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<em_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<em_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<em_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Jamileth chichande"<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci�n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int EM_PuntoVenta()

	float em_xx, em_cc=0, em_at=0, em_nn, em_vb, em_viva, em_vdes, em_vfi, em_vft;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> em_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<em_cc+1 <<": " ;   cin>> em_xx;
        em_cc = em_cc+1;
		em_at = em_at+em_xx;
	}
	while(em_cc<em_nn);			
	em_vb = em_at;
	em_viva = em_vb*0.12;
	em_vdes = em_vb*0.10;
	em_vfi = em_vb+em_viva;
	em_vft = em_vfi-em_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<em_vfi<<endl;
	cout<<"Valor final es: "<<em_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Jamileth chichande"<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci�n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int EM_Edad()
{
	int em_diaAct, em_mesAct, em_anoAct, em_diaNac, em_mesNac, em_anoNac, em_anoR, em_mesR, em_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese A�o Actual: ";   cin >> em_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> em_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> em_diaAct;
	cout << "\nIngrese A�o Nacimiento: ";  cin >> cz_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> em_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> em_diaNac;			
	if (em_anoAct > em_anoNac)
	{
		if(em_mesAct > em_mesNac)	 
		{
			em_anoR=em_anoAct-em_anoNac;	
			em_mesR=em_mesAct-em_mesNac;					
		}
		else
		{
			3m_anoR=em_anoAct-em_anoNac-1;	
			em_mesR=(em_mesAct+12)em_mesNac;					
		}												
		if(em_diaAct > em_diaNac)
		{				
			em_diaR=em_diaAct-em_diaNac;
		}
		else
		{
			em_mesR=em_mesR-1;
			em_diaR=(em_diaAct+30)-em_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<em_anoR<< endl;
		cout << " Mes: " <<em_mesR << endl;
		cout << " Dia: " << em_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int EM_Compara()
{
	int em_aa, cz_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> em_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> em_bb;
	if (em_aa==em_bb)
    	cout<<"Son iguales"<<endl;
}
	
	else
	{
		if (em_aa>em_bb)
		{
		cout<<cz_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<em_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparaci�n"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: Jamileth chichande"<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int EM_Menu()
{
	int opp, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t----------------MEN� DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1.SUMA DE 2 NUMEROS "<<endl;
		cout<<"2. CONTADOR DE MONEDAS"<<endl;
		cout<<"3. PUNTO DE VENTA"<<endl;
		cout<<"4. CALCULADORA DE EDAD"<<endl;
		cout<<"5. COMPARAR NUMEROS"<<endl;
		cout<<"0. REGRESAR AL MEN� PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCI�N: "; cin>>opp;
		switch(opp)
		{
			case 1:
				system("cls");
				EM_Suma();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				EM_CuentaMoneda();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				EM_PuntoVenta();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				EM_Edad();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				EM_Compara();
				cout<<"Para regresar al men� (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opp!=0 && opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
				
		}
	}
	while(opp != 0);
	return 0;
}
