#include <iostream>
#include<iomanip>


using namespace std;

int main()
{
	//Declara��o de vari�veis
	char nome [20];//Vari�vel para ler o nome do vendedor
	double salario;//Sal�rio fixo
	double vendasm;//Vendas por mes
	double salariorec;//Salario a receber
	
	//Entrada de dados
	cin>>nome;
	cin>>salario;
	cin>>vendasm;
	
	//Processamento
	salariorec=(0.15*vendasm)+salario;
	
	//Sa�da de dados
	cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<salariorec<<endl;
	return 0;
}