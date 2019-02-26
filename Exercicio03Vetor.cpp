#include <iostream>
#include<string.h>
#include <cstdlib>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;


int main(int argc, char** argv) {
	
	int a[2], b[2], c[2];
	char op[2];
	
	for(int i = 0; i <= 1; i++){
		
		cout << "Digite o valor do vetor A: ";
		cin >> a[i];
		cout << "Digite o valor do vetor B: ";
		cin >> b[i];
		
		cout << "Digite a operação para o calculo dos números digitados: ";
		cin >> op[i];
	}
	
	for(int i = 0; i <= 1; i++){
		
		if(op[i] == '+'){
			c[i] = a[i] + b[i];
			cout << "Resultado: " << c[i];
		} else if(op[i] == '-'){
			c[i] = a[i] - b[i];
			cout << "Resultado: " << c[i];
		} else if(op[i] == '*'){
			c[i] = a[i] * b[i];
			cout << "Resultado: " << c[i];
		} else if(op[i] == '/'){
			c[i] = a[i] / b[i];
			cout << "Resultado: " << c[i];
		}
	}

	
	return 0;
}
