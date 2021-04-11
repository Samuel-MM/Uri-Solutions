#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	//Declaração de variáveis
	int a;//Valor a
	int b;//Valor b
	int c;//Valor c
	int MaiorAB;//Atribuição da operação de maior entre A e B
	int Maior;//Maior entre AB e C
	
	//Entrada de dados
	cin>>a;
	cin>>b;
	cin>>c;
	
	//Processamento
	MaiorAB=(a+b+abs(a-b))/2;
	Maior=(MaiorAB+c+abs(MaiorAB-c))/2;
	
	//Saída de dados
	cout<<Maior<<" eh o maior"<<endl;
	return 0;
}