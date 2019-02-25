#include <cstdlib>
#include <iostream>

/* 4-) Fazer um programa de que preencha dois vetores A e B de 10 posições cada e gere um vetor resultante que 
intercale nele os dois vetores A e B. */

using namespace std;

int main(int argc, char** argv) {
	
	int vetA[10];
	int vetB[10];
	int vetC[20];
	int i;
	int j=0;
	int k=0;
	
	for(i=0; i<10; i++) {
		
		cout<<"Digite um número para A: ";
		
		cin>>vetA[i];
		
		
		
	}
	
	
	for( i=0; i<10; i++) {
		
		cout<<"Digite um número para B: ";
		
	
		cin>>vetB[i];
		
		
	}
	
	for ( i=0;i<20;i++){
		
		if(i%2==0){
			
			vetC[i]=vetA[j];
			j++;
		} 
		
		else 
		
		{
			vetC[i] =vetB[k];
			k++;
		}
	}
	
		
	for ( i=0; i<20; i++){
		
		cout<<vetC[i]<<"\n";
	}
	
	
	return 0;
}
