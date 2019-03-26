//Programa Bubble Sort Ordenando Números
//Jane Fernanda Martins

#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(){
	
	//Declarando o vetor
	
	int num[7];
	
	//Preenchendo o vetor com o Random
	
	for (int i = 0; i< 7; i++){
		
		num[i] = rand() % 100;		
			
	}
	
	//Mostrando vetor preenchido
		
	for (int i = 0; i < 7; i++){
		
		cout << "numero [" << i + 1 << "] = " << num[i] << endl;
	}
	
	cout << endl << endl;
	
	
	//Comparando e trocando
	
	for (int i = 0; i < 6; i++){
		
		for (int j = i+1; j < 7; j++){
			
			int aux;
			
			//Para lista ordenada em ordem decrescente alterar sinal (>) para (<)
			if(num[i] > num[j]){
				
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
		
         
		 //Mostrando cada iteração pelo laço 
		   				
			for (int i = 0; i < 7; i++){
		
		cout << "numero [" << i + 1 << "] = " << num[i] << endl;
		
	} 
	
	cout << endl << endl;
		
	}
	
	//Imprimindo lista ordenada
	
	for(int i = 0; i < 7; i++){
		
		cout << "numero [" << i + 1 << "] = " << num[i] << endl;
		
		
	} 
	
	
	
	system("pause");
	
}  
