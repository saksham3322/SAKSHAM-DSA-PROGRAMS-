#include<iostream>
using namespace std;

bool isPrime(int n) {
	int i;
	for( i = 2; i < n; i++) {
		if( n % i == 0){
			//divide hogya h, not a prime no.
			return 0;
		}
	}
	return 1;
}
int main()
{
	int num;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	if(isPrime(num)){
		cout<<"Number is Prime."<<endl;
	}
	else {
		cout<<"Number is not Prime."<<endl;
	}
	return 0;
}