#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	//Declaração de variáveis
	double X1;//Ponto
	double X2;//Ponto
	double Y1;//Ponto
	double Y2;//Ponto
	double Z;//Operação A ao quadrado + B ao quadrado
	double A;//Operação X2-X1
	double B;//Operação Y2-Y1
	double C;//Raiz quadrada de Z
	
	//Entrada de dados
	cin>>X1>>Y1;
	cin>>X2>>Y2;
	
	//Processamento
	A= X2-X1;
	B= Y2-Y1;
	Z= pow(A,2)+pow(B,2);
	C=sqrt(Z);
	
	//Saída de dados
	cout<<fixed<<setprecision(4)<<C<<endl;
	return 0;
}