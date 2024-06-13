#include<iostream>
using namespace std;

void Print1ToN(int i,  int n)
{
	if(i > n)
		return;

	else{
		cout << i << " ";
		Print1ToN(i+1 , n);
	}

}
int main()
{
	int n, i = 1;
	cout << "Plz Enter the upper limit for printing N natural numbers: " ;
	cin >> n;
	
	Print1ToN(i,n);
	
	
	return 0;
}