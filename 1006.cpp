#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declaração de variáveis
	double A;//Nota A
	double B;//Nota B
	double C;//Nota C
	double X;//Variável para atribuir a operação
	
	//Entrada de dados
	cin>>A;
	cin>>B;
	cin>>C;
	
	//Processamento
	X=((A*2)+(B*3)+(C*5))/10;//Calculo
	
	//Saída de dados
	cout<<fixed<<setprecision(1)<<"MEDIA = "<<X<<endl;
	
	
	return 0;
}