#include<iostream>
using namespace std;

bool isEven(int n)
{
	if(n & 1){
		return 0; //odd
	}
	else{
		return 1; //even
	}
}
int main()
{
	int num;
	cout<<"Enter a number: "<<endl;
	cin>>num;
	if(isEven(num)){
		cout<<"Number is Even."<<endl;
	}
	else{
		cout<<"Number is Odd."<<endl;
	}
	return 0;
}