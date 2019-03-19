#include <cstdlib>
#include <iostream>

using namespace std;

bool primo (int n);


int main(int argc, char *argv[])
{
    int a;
    cin>>a;
    cout<<primo(a)<<"\n";

		
    system("PAUSE");
    return EXIT_SUCCESS;
}
bool primo (int n){
     int d=0;
     for(int i=1; i<=n; i++){
            if(n % i ==0) {
            d++;
             }
     }
     if(d>2)
     return 0;
     else
     return 1;
     
     }

