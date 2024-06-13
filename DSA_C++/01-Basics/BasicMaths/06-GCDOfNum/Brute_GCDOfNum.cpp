#include<iostream>
#include<math.h>
using namespace std;

int min(int a, int b);
void GCDOfNums( int num1, int num2);

int main() 
{
	int num1, num2;
	
	cout << "Enter two Numbers to to find their GCD :" << endl;
	cin >> num1 >> num2;
	
	GCDOfNums(num1, num2);

	return 0;
}

// Time Complexity (TC)
// O (min(N1, N2))-> N1 and N2 are two numbers
// Space Complexity (SC)
//O(1)

void GCDOfNums(int num1, int num2)
{	
	int minimum = min(num1, num2);
	int gcd=1; //at least 1 is GCD bw two numbers
	for(int i=1; i<minimum; i++) //minimum is number that is smaller
	{
		if(num1%i == 0 && num2%i == 0) //we have to calculate a common factor, so, it should be divisible by both numbers
			gcd = i;
	}
	cout << "GCD of  " << num1 << " AND " << num2 << " is "<< gcd <<endl;
	
}
 int min(int a, int b)
 {
	 if(a>b)
		 return a;
	 else
		 return b;
 }



