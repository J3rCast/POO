#include <stdio.h>
#include <iostream>

using namespace std;

double potencia(double base, double exp)
{
	int res = 1;

	for (int i = 0; i < exp; i++)
		res *= base;

	return res;
}

double factorial(double num)
{
	int res = 1;

	for (int i = 1; i <= num; i++)
	{
		res *= i;
	}
	return res;
}

int main()
{
	double res = 0;
	double base_num = 3, exp_num = 2;
	double fact = 5, base_denom = 3;
	int n = 0;

	cout<<"Indique la cantidad n que desea sumar la serie: "<<endl;
	cin>>n;

	if (n < 1)
	{
		cout<<"Indique una cantidad mayor a 0"<<endl;
		return 0;
	}
	
	for (int i = 0; i < n; i++)
	{
		res += potencia(base_num, exp_num) / (factorial(fact) + potencia(base_denom, base_denom));

		cout<<base_num<<" "<<exp_num<<endl;
		cout<<potencia(base_num, exp_num)<<endl;
		cout<<"==========================="<<endl;
		cout<<fact<<endl;
		cout<<factorial(fact)<<endl;
		cout<<"==========================="<<endl;
		cout<<base_denom<<endl;
		cout<<potencia(base_denom, base_denom)<<endl;
		cout<<"==========================="<<endl;

		exp_num = base_num;
		base_num += 2;
		fact++;
		base_denom++;
	}

	cout<<"El resultado de la serie es: "<<res<<endl;

	return 0;
}
