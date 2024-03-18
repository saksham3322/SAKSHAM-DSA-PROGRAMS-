#include<iostream>
using namespace std;

int powerNum(int num1, int num2)
{
	int ans = 1;
	int i;
	for(i = 1; i <= num2; i++){
		ans = ans * num1;
	}
	return ans;
}
int main()
{
	int base,power;
	cout<<"Enter base: "<<endl;
	cin>>base;
	cout<<"Enter power: "<<endl;
	cin>>power;
	cout<<"Result is: "<< powerNum(base, power) <<endl;
	
	return 0;
}