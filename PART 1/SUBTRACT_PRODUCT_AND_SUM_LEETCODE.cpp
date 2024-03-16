#include<iostream>
using namespace std;

int substractProductAndSum(int n)
{
	int prod = 1;
	int sum = 0;
	while( n!= 0 ){
		int digit = n % 10;
		prod = prod * digit;
		sum = sum + digit;
		
		n = n / 10;
	}
	int answer = prod - sum;
	return answer;
 } 
 int main()
 {
 	int no;
 	cout<<"Enter integers: "<<endl;
 	cin>> no;
 	int res = substractProductAndSum(no);
 	cout<<"Answer is: "<<res<<endl;
 	return 0;
 }