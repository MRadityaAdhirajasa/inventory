#include <iostream>
using namespace std;

int main()
{
	int x;
	
	cin>>x;
	
	if(x==2 || x==3){
		cout<<x<<" adalah bilangan prima";
	}else if(x>1 && x%2!=0 && x%3!=0){
		cout<<x<<" adalah bilangan prima";
	}else{
		cout<<x<<" bukan bilangan prima";
	}
	
	
	return 0;
}
