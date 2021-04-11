#include <iostream>

using namespace std;

int main()
{
	//Declaração de variáveis
	int A;//Valor A
	int B;//Valor B
	int C;//Valor C
	int D;//Valor D
	int X;//Valor para atribuir a operação
	
	//Entrada de dados
	cin>>A;
	cin>>B;
	cin>>C;
	cin>>D;
	
	//Processamento
	X=(A*B-C*D);//Calculo
	
	//Saída de dados
	cout<<"DIFERENCA = "<<X<<endl;
	return 0;
}