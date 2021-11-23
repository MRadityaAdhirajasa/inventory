#include <iostream>
using namespace std;

int x,y;

int main()
{
	for(x=1; x<=5; x++)
	 {
	 	for(y=1; y<=x; y++)
	 	{
		cout<<y<<" ";
		} 
	 	cout<<endl;
	 }
	for(x=4; x>=1; x--)
	 {
	 	for(y=1; y<=x; y++)
	 	{
		cout<<x<<" ";
		} 
	 	cout<<endl;
	 }
return 0;
	 
}
