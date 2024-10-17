#include <iostream>
#include <string.h>
using namespace std;
int mayor(int a, int b, int c);
int main(){
	int d;
	int e;
	int f;
	int hola;
	int resultado;
	cout<<"este es un programa para encontrar el mayor de 3 numeros"<<endl;
	cout<<"ingrese el primero numero"<<endl;
	cin>>d;
	cout<<"ingrese el segundo numero"<<endl;
	cin>>e;
	cout<<"ingrese el tercer numero"<<endl;
	cin>>f;
	resultado = mayor (d,e,f);
	cout<<"el mayor es"<<resultado;
}
int mayor(int a, int b, int c){
int	mayor=a;
	if (mayor>b){
		mayor=a;
	}else{
		mayor=b;
	}
	if(mayor<c){
		mayor=c;
	}else{
		mayor=b;
	}
	return mayor;
}
