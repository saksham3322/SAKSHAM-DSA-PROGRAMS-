#include<iostream>
#include<limits.h>
using namespace std;
class Solution{
	public:
		bool isPowerOfTwo(int n){
			
			int i,ans = 1;
			for(i = 0; i <= 30 ; i++ ){
				
				if(ans == n){
					return true;
				}
				if( ans < INT_MAX/2)
				ans = ans * 2;
			}
			return false;
		}
};
int main()
{
	int x;
	Solution S1;
	cout<<"Enter an Integer which you want to check power of 2 :"<<endl;
	cin>>x;
	int res = S1.isPowerOfTwo(x);
	if(res == 1)
	cout<<"The given Integer is power of 2."<<endl;
	else
	cout<<"The given Integer is not power of 2."<<endl;
	
	return 0;
}