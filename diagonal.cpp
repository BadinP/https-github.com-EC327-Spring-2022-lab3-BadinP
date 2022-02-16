#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter value of N ";
	cin>>n;
	if(n<0 || n>9)
	{
		cout<<"Invalid value for N!"<<endl;
		return 0;
	}

	//Valid input for N
	for(int i=n;i>0;i--)
	{
	//print space for diagonal n-1 
	for(int j=1;j<i;j++)
		cout<<" ";
	cout<<i<<endl;
	}







}
