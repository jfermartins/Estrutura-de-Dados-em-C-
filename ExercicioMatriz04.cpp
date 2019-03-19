#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int mat[5][5];
	int total;
	
	for( int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			
			cout<< "Digite um número: ";
			cin>>mat[i][j];
			
		}
	}
	
	for( int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			
				cout<<mat[i][j]<<"\n";
			}
	    }
    
	for( int i=0; i<5; i++){
		for(int j=0;j<5;j++){
			
			total=i+j;
			
			if(total%2!=0){
				cout<<mat[i][j]<<"\n";
			}
	    }
    }
    
	return 0;
}
