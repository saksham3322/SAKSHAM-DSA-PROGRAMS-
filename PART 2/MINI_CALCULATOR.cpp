#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	cout<<"Enter a: "<<endl;
	cin>>a;
	cout<<"Enter b: "<<endl;
	cin>>b;
	cout<<"Enter operation you want to perform: "<<endl;
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<(a+b);
			break;
		case '-':
			cout<<(a-b);
			break;
		case '*':
			cout<<(a*b);
			break;
		case '/':
			cout<<(a/b);
			break;
		case '%':
			if(a>b&&b!=0){
			cout<<((int)a%(int)b);
			break;
		}
		default:
			cout<<"Invalid operation.";
	}
	return 0;
}