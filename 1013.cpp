#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	//Declara��o de vari�veis
	int a;//Valor a
	int b;//Valor b
	int c;//Valor c
	int MaiorAB;//Atribui��o da opera��o de maior entre A e B
	int Maior;//Maior entre AB e C
	
	//Entrada de dados
	cin>>a;
	cin>>b;
	cin>>c;
	
	//Processamento
	MaiorAB=(a+b+abs(a-b))/2;
	Maior=(MaiorAB+c+abs(MaiorAB-c))/2;
	
	//Sa�da de dados
	cout<<Maior<<" eh o maior"<<endl;
	return 0;
}