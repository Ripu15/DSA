#include<iostream>
#include<vector>
//#include<string>
using namespace std;

void PrintNameNtimes( int initialNumber, int limit,vector <string>name)
{
	//vector<string> name;
	if(initialNumber == limit)
	{
		for(vector<string> :: iterator it = name.begin(); it != name.end(); it++)
			cout << *it << " " << endl;
		return;
	}
	name.push_back("ripudaman");
	//cout << "Size of name vector:"<< name.size() << endl;
	PrintNameNtimes(initialNumber+1,limit,name);
}
int main()
{
	int i=0,n;
	vector <string>name;
	cout << "How many times u want your name to be printed: " ;
	cin >> n;
	
	PrintNameNtimes(i,n,name);
	cout << "I AM BACK !!! " ;
	return 0;
}