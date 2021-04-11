#include <iostream>
#include<iomanip>


using namespace std;

int main()
{
	//Declaração de variáveis
	char nome [20];//Variável para ler o nome do vendedor
	double salario;//Salário fixo
	double vendasm;//Vendas por mes
	double salariorec;//Salario a receber
	
	//Entrada de dados
	cin>>nome;
	cin>>salario;
	cin>>vendasm;
	
	//Processamento
	salariorec=(0.15*vendasm)+salario;
	
	//Saída de dados
	cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<salariorec<<endl;
	return 0;
}