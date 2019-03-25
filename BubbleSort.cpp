//Jane Fernanda Martins
//Programa Bubble Sort

#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

/*int main(){
	
	int num[7];
	
	
	for (int i = 0; i< 7; i++){
		
		num[i] = rand() % 20;		
			
	}
	
		
	for (int i = 0; i < 7; i++){
		
		cout << "numero [" << i + 1 << "] = " << num[i] << endl;
	}
	
	cout << endl << endl;
	
	for (int i = 0; i < 6; i++){
		
		for (int j = i+1; j < 7; j++){
			
			int aux;
			
			if(num[i] > num[j]){
				
				aux = num[i];
				num[i] = num[j];
				num[j] = aux;
			}
		}
		
			/*for (int i = 0; i < 7; i++){
		
		cout << "numero [" << i + 1 << "] = " << num[i] << endl;
		
	} */
	
	//cout << endl << endl;
		
/*	}
	
	for(int i = 0; i < 7; i++){
		
		cout << "numero [" << i + 1 << "] = " << num[i] << endl;
		
		
	} 
	
	
	
	system("pause");
	
}  */


//Ordenando letra
/* int main(){

 char letra[7] = {'j','s','m','e','g','c','a'};
		
		
	for (int i = 0; i < 7; i++){
		
		cout << "Letra: [" << i + 1 << "] = " << letra[i] << endl;
	}
	
	cout << endl << endl;
	
	for (int i = 0; i < 6; i++){
		
		for (int j = i+1; j < 7; j++){
			
			int aux;
			
			if(letra[i] > letra[j]){
				
				aux = letra[i];
				letra[i] = letra[j];
				letra[j] = aux;
			}
		} */
		
			/*for (int i = 0; i < 7; i++){
		
		cout << "Letra: [" << i + 1 << "] = " << letra[i] << endl;
		
	} */
	
	//cout << endl << endl;
		
/*	}
	
	for(int i = 0; i < 7; i++){
		
		cout << "Letra: [" << i + 1 << "] = " << letra[i] << endl;
		
		
	}
	
	
	
	system("pause");
	
} */



//Ordenando Strings (palavra)
int main(){
	
	char t[50],a[50][50]; //[linhas][colunas]
	int i, j, n = 6;
	

	
	cout<<"\n Entre " << 6 << " nomes\n";
	
	for(i=0; i < n; i++)
	cin >> a[i];
	
	for(i=0; i < n-1; i++){
		
		for(j=0; j < n-i-1; j++){
			
			if(strcmp(a[j],a[j+1])>=0){
				
				strcpy(t,a[j]);
				strcpy(a[j], a[j+1]);
				strcpy(a[j+1],t);
				
			}
		}
	}
	
	cout << "\n Lista ordenada:\n";
	
	for(i=0; i < n; i++)
	cout << a[i] << endl;
	
	return 0;
} 

