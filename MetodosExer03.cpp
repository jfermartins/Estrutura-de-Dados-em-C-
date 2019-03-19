#include <cstdlib>
#include <iostream>

using namespace std;

int verificarBissexto(int ano){
	int bissexto = 0;
	
	if(ano%4==0 && ano%100!=0){
		bissexto = 1;
	}
	
	return bissexto;
}

int main(int argc, char** argv) {
	
	int ano;
	
	cout<<"Entre com um numero: \n";
	cin>>ano;
	cout<<verificarBissexto(ano);
	
	return 0;
}
