#include<iostream>
using namespace std;
int main()
{
	int amount;
	cout<<"Enter amount :"<<endl;
	cin>>amount;
	
	int five_hundred_notes = amount / 500;
	amount %= 500;
	
	int hundred_notes = amount / 100;
	amount %= 100;
	
	int fifty_notes = amount / 50;
	amount %= 50;
	
	int twenty_notes = amount / 20;
	amount %= 20;
	
	int ten_notes = amount / 10;
	
	cout<<"Number of 500 notes: "<<five_hundred_notes<<endl;
	cout<<"Number of 100 notes: "<<hundred_notes<<endl;
	cout<<"Number of 50 notes: "<<fifty_notes<<endl;
	cout<<"Number of 20 notes: "<<twenty_notes<<endl;
	cout<<"Number of 10 notes: "<<ten_notes<<endl;
	
	return 0;
	
}