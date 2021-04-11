#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int R;
	double vol;
	
	cin>>R;
	
	vol = 4/3.0 * 3.14159 * pow(R, 3);
	cout<<fixed<<setprecision(3)<<"VOLUME = "<<vol<<endl;
	return 0;
}