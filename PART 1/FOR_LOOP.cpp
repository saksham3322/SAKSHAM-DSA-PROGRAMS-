#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for( a = 0 , b = 1 , c = 2 ; a>=0 && b >= 1 && c >= 2 ; a-- , b-- , c--)
	{
		cout<<a << " " << b << " " << c << endl;
	}
	return 0;
}