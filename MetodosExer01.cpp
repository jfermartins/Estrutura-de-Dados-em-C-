#include <cstdlib>
#include <iostream>

using namespace std;

float c(float f);
float f(float c);

int main(int argc, char *argv[])
{
setlocale(LC_ALL, "Portuguese");
	
	int n;
	int op;
	
	cout<<"Digite 1 para converter fahrenheit para celsius\n";
	cout<<"Digite 2 para converter celsius para fahrenheit \n";
	cin>>op;
	
	switch(op)
	{
		case 1:
			cout<<"Digite o numero em fahrenheit para ser convertido para celsius:\n";
			cin>>n;
			cout<<"Resultado\n";
			cout<<c(n);
		break;
		case 2:
			cout<<"Digite o numero em celsius para ser convertido para fahrenheit: \n";
			cin>>n;
			cout<<"Resultado: \n";
			cout<<f(n);
		break;
		default:
			cout<<"Digite novamente!!!";
		break;
	}
		
    system("PAUSE");
    return EXIT_SUCCESS;
}

float c(float f) // fahrenheit para celsius
{
  float r = (f-32)*5/9;
  return r;
}
float f(float c) //celsius para fahrenheit 
{
	float r = (c*9/5)+32;
	return r;
}


