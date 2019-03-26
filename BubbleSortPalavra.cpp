//Programa Bubble Sort Ordenando Nomes/Palavras
//Jane Fernanda Martins

#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

int main(){
	
	//Declarando vetor e variáveis auxiliares
	
	char t[50],a[50][50]; //[linhas][colunas]
	int i, j, n = 6;
	

	//Preenchendo o vetor com nomes ou palavras
	
	cout<<"\n Entre com " << 6 << " nomes\n";
	
	for(i=0; i < n; i++)
	cin >> a[i];
	
	//Comparando e trocando
	
	for(i=0; i < n-1; i++){
		
		for(j=0; j < n-i-1; j++){
			
			if(strcmp(a[j],a[j+1])>=0){ //compara o primeiro caracter de cada String
				
	//Copia a cadeia apontada pela origem para a matriz apontada pelo destino
				
				strcpy(t,a[j]);
				strcpy(a[j], a[j+1]);
				strcpy(a[j+1],t);
				
			}
		}
	}
	
	//Exibindo a lista já ordenada
	
	cout << "\n Lista ordenada:\n";
	
	for(i=0; i < n; i++)
	cout << a[i] << endl;
	
	return 0;
} 
