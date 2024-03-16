#include<iostream>
using namespace std;

int hammingWeight(int n){
	
	int count = 0;
	while( n!=0 ){
		//checking last bit
		if( n&1 ){
			count++;
		}
		n = n>>1;
	}
	return count;
}
int main()
{
	int n;
	cout<<"Enter any integer value: "<<endl;
	cin>>n;
	int res = hammingWeight(n);
	cout<<"Total 1 is: "<<res<<endl;
	
	return 0;
}