#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declara��o de vari�veis
	int COD1;
	int UNID1;
	int COD2;
	int UNID2;
	float PRECO1;
	float PRECO2;
	float VALORF1;//Valor final 1
	float VALORF2;//Valor final 2
	float TOTAL;
	
	//Entrada de dados
	cin>>COD1>>UNID1>>PRECO1;
	cin>>COD2>>UNID2>>PRECO2;
	 
	 //Opera��o dos valores finais e total
	 VALORF1=PRECO1*UNID1;
	 VALORF2=PRECO2*UNID2;
	 TOTAL=VALORF1+VALORF2;
	 
	 //Sa�da de dados
	 cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<TOTAL<<endl;
	return 0;
}