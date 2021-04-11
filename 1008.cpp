#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	//Declaração de variáveis
	int NUMBER;//Número
	int WHOURS;//Horas trabalhadas
	float SALARYH;//Salario por hora
	float SALARY;//Salário final
	
	//Entrada de dados
	cin>>NUMBER;
	cin>>WHOURS;
	cin>>SALARYH;
	
	//Processamento
	SALARY=WHOURS*SALARYH;
	
	//Saída de dados
	cout<<"NUMBER = "<<NUMBER<<endl;
	cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<SALARY<<endl;

	return 0;
}