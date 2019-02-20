#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
     int vet[10], i, j, num;
    i=0; j=0;
    num=1;
    
    while(num!=0 && i<10){
        cout<<"Digite um numero  \n";
        cin>>num;
        vet[i]=num;
        i++;
        
        }
    
  
    for(int a=0; a<i; a++){
           if(vet[i-2]==vet[a]){
                      j++;
                      }
         }
         
         cout<<j<< "\n";

    
    system("PAUSE");
    return EXIT_SUCCESS;
}

