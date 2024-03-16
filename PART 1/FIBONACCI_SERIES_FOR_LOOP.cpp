#include<iostream>
using namespace std;
int main()
{
	int n,i,a,c=0,b=1;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    cout<<c<<" ";
		a=b;
		b=c;
		c=a+b;	
	}
	return 0;
}