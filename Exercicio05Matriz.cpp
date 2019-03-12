	#include <cstdlib>
	#include <iostream>
	
	/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
	using namespace std;
	
	int main(int argc, char** argv) {
		
		int i, j, mat[6][6], produto=0;
		
		for( int i=0; i<6; i++){
			for(int j=0;j<6;j++){
				
				cout<< "Digite um número: ";
				cin>>mat[i][j];
				
			}
	}
	
	for(i=0; i < 6; i++){
	for (j=0; j < 6; j++){
		if (j<i){
			produto=produto * mat[i][j];
		}
	}
	}
	
	for(i=0; i < 6; i++){
		
		cout<<i<<"\n";
		
	for (j=0; j < 6; j++){
		
		cout<<mat[i][j]<<"\n";
	}
	}
	
	cout<<produto<<"\n";
		
		return 0;
	}
