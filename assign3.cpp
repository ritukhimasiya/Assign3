//Array
#include<iostream>
using namespace std;
int main()
{
	int no[5];
	cout<<"Enter elements: ";
	
	for (int i=0; i<5;i++)
	cin>>no[i];
	
	cout<<"You entered: ";
	for(int i=0; i<5;i++)
	cout<<endl<<*(no + i);
	
	return 0;
}
