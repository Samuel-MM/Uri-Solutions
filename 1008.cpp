#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	//Declara��o de vari�veis
	int NUMBER;//N�mero
	int WHOURS;//Horas trabalhadas
	float SALARYH;//Salario por hora
	float SALARY;//Sal�rio final
	
	//Entrada de dados
	cin>>NUMBER;
	cin>>WHOURS;
	cin>>SALARYH;
	
	//Processamento
	SALARY=WHOURS*SALARYH;
	
	//Sa�da de dados
	cout<<"NUMBER = "<<NUMBER<<endl;
	cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<SALARY<<endl;

	return 0;
}