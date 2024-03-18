#include<iostream>
using namespace std;
class Solution{
	public:
		int bitwiseComplement(int n){
			
			int m = n;
			int mask = 0;
			
			if(n == 0)
				return 1;
		    
		    while( m != 0){
		    	mask = (mask << 1) | 1;
		    	m = m >> 1;
			}
			int ans = (~n) & mask;
			
			return ans;
		}
};
int main()
{
	Solution S1;
	int x;
	cout<<"Enter a Number : "<<endl;
	cin>>x;
	int res = S1.bitwiseComplement(x);
	cout<<"Complement is: "<<res<<endl;
	
	return 0;
}