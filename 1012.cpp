#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main()
{
	//Declaração de variaveis
  double A;
  double B;
  double C;
  double n;
  double ATRI;//Area triangulo
  double ACIR;//Area circulo
  double ATRA;//Area trapezio
  double AQUA;//Area quadrado
  double ARET;//Area retangulo

  //Entrada de dados
  cin >> A >> B >> C;

  n = 3.14159;//Valor de pi
  
  //Fórmulas
  ATRI = (A * C) / 2;
  ACIR = n * pow(C, 2);
  ATRA = ((A + B) * C) / 2;
  AQUA = pow(B, 2);
  ARET = A * B;

  //Saída de dados
  cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<ATRI<<endl;
  cout<<fixed<<setprecision(3)<<"CIRCULO: "<<ACIR<<endl;
  cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<ATRA<<endl;
  cout<<fixed<<setprecision(3)<<"QUADRADO: "<<AQUA<<endl;
  cout<<fixed<<setprecision(3)<<"RETANGULO: "<<ARET<<endl;

  return 0;
}
