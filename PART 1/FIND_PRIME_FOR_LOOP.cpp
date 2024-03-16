#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter the value of n: "<<endl;
	cin>>n;
	
	bool isPrime = 1;
	
	for(i=2;i<n;i++)
	{
		//rem = 0, not a prime
		if(n % i == 0){
			isPrime = 0;
			break;
		}
	}
	if(isPrime == 0){
		cout<<"Not a prime number."<<endl;
	}
	else {
		cout<<"Prime number."<<endl;
	}
	return 0;
}