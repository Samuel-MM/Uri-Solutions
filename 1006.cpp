#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declara��o de vari�veis
	double A;//Nota A
	double B;//Nota B
	double C;//Nota C
	double X;//Vari�vel para atribuir a opera��o
	
	//Entrada de dados
	cin>>A;
	cin>>B;
	cin>>C;
	
	//Processamento
	X=((A*2)+(B*3)+(C*5))/10;//Calculo
	
	//Sa�da de dados
	cout<<fixed<<setprecision(1)<<"MEDIA = "<<X<<endl;
	
	
	return 0;
}