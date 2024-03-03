// AXEL ALVAREZ CICLOS
#include <iostream>
using namespace std;
main(){
	// i++, i+=2, i=i+1
	// INCREMENTO DE 1 EN 1
	/* for(int i=0; i<=10; i++){//inicia en 0 hasta 9

        cout<<i<<endl;	
	} */
	
	// INCREMENTO DE 2 EN 2
	/* for(int i=1; i<=10; i+=2){//inicia en 0 hasta 9

        cout<<i<<endl;	
	} */
	
	// ESTA CONTANDO LOS CICLOS DEL FOR
	/* int contar=0;
	for(int i=0; i<=10; i++){//inicia en 0 hasta 9

        cout<<i<<endl;
		contar++;	
	}
	cout<<"ciclos: "<<contar<<endl;
	system("pause"); */
	
	/* int i = 0;
	int contar=0;
	// NO DECLARAR INT ADENTRO DEL FOR
	for(i=4; i<=8; i+=2){//inicia en 0 hasta 9

        cout<<i<<endl;
        contar++;
	}
	
	cout<<"i afuera: "<<i<<endl;
	
	cout<<"Ciclos: "<<contar<<endl;

	system("pause"); */
	
	
	/* DECREMENTAR */
	/* for(int i=0; i<10; i++){
		
		/* CICLO Y BREAK*/
	/*	if(i==5){
			// EL BREAK ME AYUDA A DETENER EL PRORAMA
			cout<<"if"<<endl;
			continue;
		}
		
		cout<<i<<endl;
	}
	
	cout<<"fuera del flor"<<endl;
	
	system("pause"); */
	
	// USANDO FLOAT
	
	/* for(float i=0; i<1; i+=0.1){
		cout<<i<<endl;
	}
	
	cout<<"fuera de flor"<<endl;
	
	system("pause"); */
	
	 // ARRRAY 1
	/* int datos[5] = {10, 40, 100, 250, 3000};
	
	for(int i=0; i<5; i++){
		cout<<datos[i]<<endl;
	} */
	
	
	// ARRAY 2
	
	/* int tam=5;
	
	int datos[tam] = {10, 40, 100, 250, 3000};
	
	for(int i=0; i<tam; i++){
		cout<<datos[i]<<endl;
	} */
	
	
	
	// tamaño de un array
	// int 4 bytes
	
	/* int tam = 0;
	int datos[] = {10, 40, 100};
	
	// numero de elementos de un array
	
	tam = sizeof(datos) / sizeof(datos[0]);
	cout<<tam<<endl;
	// 3elementos de 4 bytes
	
	system("pause"); */
	
	
	 /* OTRA FORMA DE CONTAR ARRAY*/
/* 	int datos[] = {10, 40, 100, 250};
	
	// numero de elementos de un array	
	for (int i : datos){
	cout<<i<<endl;
	}
	
		system("pause"); */
		
		/*  INGRESAR TABLA */
		/* int tabla= 0, res=0;
		cout<<"Ingrese tabla: ";
		cin>>tabla;
		
		for(int i=1; i<=10; i++){
			res= tabla * i;
			cout<<tabla<<" X "<<i <<" = "<<res<<endl;
		}

 */
	 int inicio= 0, fin=0, res=0;
	 
	 
		cout<<"Ingrese tabla inicial: ";
		cin>>inicio;
		
		cout<<"Ingrese tabla final: ";
		cin>>fin;
		
		// FOR PRINCIPAL 10 ITERACIONES
		for(int rango=inicio; rango<=fin; rango++){
			
			// POR CADA ITERACION SE EJECUTA 10 VECES
			cout<<"Tabla del "<<rango<<endl;
			for(int i=1; i<=10; i++){
			res= rango * i;
			cout<<rango<<" X "<<i <<" = "<<res<<endl;
		}
		}

system("pause");
	
}
