#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int vet[10], i, j, aux;
    i=0; j=0; 
  
    for(int a=0; a<10; a++){
        
        cout<<"Digite um número";
        cin>> vet[a];
            }
    for(int i=0; i<10; i++){
     for(int j=i+1; j<10; j++){
             if(vet[i]>vet[j]){
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
                               }
                }               
     }
     for(int a=0; a<10; a++){
        
        cout<<vet[a]<<"\n";
        }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

