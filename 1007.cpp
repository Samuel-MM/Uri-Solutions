#include <iostream>

using namespace std;

int main()
{
	//Declara��o de vari�veis
	int A;//Valor A
	int B;//Valor B
	int C;//Valor C
	int D;//Valor D
	int X;//Valor para atribuir a opera��o
	
	//Entrada de dados
	cin>>A;
	cin>>B;
	cin>>C;
	cin>>D;
	
	//Processamento
	X=(A*B-C*D);//Calculo
	
	//Sa�da de dados
	cout<<"DIFERENCA = "<<X<<endl;
	return 0;
}