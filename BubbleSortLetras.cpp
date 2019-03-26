//Programa Bubble Sort Ordenando Letras
//Jane Fernanda Martins

#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(){
	
		//Declarando e povoando vetor
		
	char letra[7] = {'j','s','m','e','g','c','a'};
		
		
		//Exibindo vetor povoado
		
	for (int i = 0; i < 7; i++){
		
		cout << "Letra: [" << i + 1 << "] = " << letra[i] << endl;
	}
	
	cout << endl << endl;
	
	//Comparando e trocando	
	
	for (int i = 0; i < 6; i++){
		
		for (int j = i+1; j < 7; j++){
			
			int aux;
			
			//Para lista ordenada em ordem decrescente alterar sinal (>) para (<)
			
			if(letra[i] > letra[j]){
				
				aux = letra[i];
				letra[i] = letra[j];
				letra[j] = aux;
			}
		} 
		
		//Mostrando cada iteração pelo laço 
		
			for (int i = 0; i < 7; i++){
		
		cout << "Letra: [" << i + 1 << "] = " << letra[i] << endl;
		
	} 
	
	cout << endl << endl;
		
	}
	
	//Imprimindo lista ordenada
	
	for(int i = 0; i < 7; i++){
		
		cout << "Letra: [" << i + 1 << "] = " << letra[i] << endl;
		
		
	}
	
	
	
	system("pause");
	
	} 
