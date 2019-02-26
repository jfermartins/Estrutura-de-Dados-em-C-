#include <iostream>
#include<string.h>

/* crie um vetor de char que armazene letras e exiba a palavra formada ao contrário, Ex. CASA - ASAC */

using namespace std;

int main(int argc, char** argv) {
	
	char palavra[25];
	int i;
	
	cout<< "Digite uma palavra: ";
	cin.getline(palavra,25);
	
	for(i=strlen(palavra); i>=0; i--)	cout << palavra[i];
	cout << "\n";
	
	
	
	return 0;
}


