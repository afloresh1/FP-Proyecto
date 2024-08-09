#include <iostream>
#include <ctime>
#include <conio.h>
#include <string>
#include <stdio.h>

using namespace std;


//PROGRAMA PRINCIPAL

int main(){
	string input;
	char s;
	string boton;
	
	
	//FUNCION PARA LAS DOS PANTALLAS MOSTRADAS (Y SE PODRIA  SALIR DEL BUCLE CUANDO SE PRESIONE UNA TECLA//
		mostrarbienvenido(kbhit);
		
		
	//A PARTIR DE AQUI SE PONDRA LO QUE SALDRIA LUEGO DE PULSAR CUALQUIER TECLA PARA INICIAR//
	//----------------------------------------------------------------------------------------------------
	for(int i=1;i<=5;i++){
	cout<<"              "<<endl;
	}
	cout<<"                                  ";
	cout<<"INDICACIONES: "<<endl;
	for(int i=1;i<=5;i++){
	cout<<"              "<<endl;
	}
	cout<<"     ";
	cout<<"Presione las letras - EJECUTAR - para dar inicio al programa"<<endl;
	cout<<"     ";
	cout<<"Presione las letras - SALIR - para dejar de ejecutar el programa"<<endl;
	cout<<" "<<endl;
	cout<<"     ";
	//---------------------------------------------------------------------------------------------------
	cout<<"Ingrese la palabra: ";
	cin>>boton;
	if(boton=="ejecutar"){
		cout<< funcioninicio(ejecutar);
	}else if(boton =="salir"){
		cout<< funcioninicio(salir);
	}else{
		system("cls");
		//---------------------------------------------------
	    for(int i=1;i<=5;i++){
          	cout<<"              "<<endl;
          	cout<<" "<<endl;
     	}
    	cout<<"                            ";
		cout<<"Palabra no reconocida";
        cout<<"                            ";
        
		for(int i=1;i<=5;i++){
          	cout<<"              "<<endl;
          	cout<<" "<<endl;
		}
		//----------------------------------------------------
		system("pause");
		system("cls");
        return main();
		}
		
	
}







