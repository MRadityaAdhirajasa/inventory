#include <iostream>
using namespace std;

int x,y,n;

int main()
{
	cin>>n;
	
	if(n<10){
	for(x=n; x>=1; x--)
	 {
	 	for(y=1; y<=x; y++)
	 	{
		cout<<x<<" ";
		} 
	 	cout<<endl;
	}
	}else{
		cout<<"Bilangan tidak sesuai!"<<endl;
	}
return 0;	
}
