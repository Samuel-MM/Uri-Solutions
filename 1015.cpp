#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	//Declara��o de vari�veis
	double X1;//Ponto
	double X2;//Ponto
	double Y1;//Ponto
	double Y2;//Ponto
	double Z;//Opera��o A ao quadrado + B ao quadrado
	double A;//Opera��o X2-X1
	double B;//Opera��o Y2-Y1
	double C;//Raiz quadrada de Z
	
	//Entrada de dados
	cin>>X1>>Y1;
	cin>>X2>>Y2;
	
	//Processamento
	A= X2-X1;
	B= Y2-Y1;
	Z= pow(A,2)+pow(B,2);
	C=sqrt(Z);
	
	//Sa�da de dados
	cout<<fixed<<setprecision(4)<<C<<endl;
	return 0;
}