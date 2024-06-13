#include<iostream>

using namespace std;

void GCDOfNums( int num1,  int num2);

int main() 
{
	int num1, num2;
	
	cout << "Enter two Numbers to find GCD :" << endl;
	cin >> num1 >> num2;
	
	GCDOfNums(num1,num2);

	return 0;
}
//Euclelidean algorithm: gcd(a,b) = gcd(a%b,b) where a>b; when one of them becomes zero then other is GCD

// Time Complexity (TC)
// O(log#(min(num1,num2)))-> where num1 and num2 are numbers , # means the base keeps on changing
// Space Complexity (SC)
//O(1)

void GCDOfNums( int num1,  int num2)
{	
	while(num1>0 && num2 >0) // num1 and num2 will eventually become zeros as we are applying modulus on them
	{
		if(num1>num2) //we need to find remainder 
			num1=num1%num2;
		else
			num2=num2%num1;
	}
	if(num1==0)
		cout << "GCD is :" <<num2;
	cout << "GCD is :" <<num1;
	
}