#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int mat[2][3];
	int mat1[3][2];
	
	for(int i= 0; i<2; i++){
		for (int j=0; j<3; j++){
			
			cout<< "digite um número: ";
			cin>>mat[i][j];
		}
	}
	
	for (int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			mat1[i][j]=mat[j][i];
			cout<< mat1[i][j]<<"\n";
		}
	}
	
	return 0;
}
