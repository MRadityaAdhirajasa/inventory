#include <iostream>
using namespace std;

int main()
{
	int a,b;
	
	cin>>a>>b;
	
	if(1<=a && b<=10000){
		cout<<a+b<<endl;
		cout<<a-b<<endl;
		cout<<a*b<<endl;
	}else{
		cout<<"Bilangan salah";
	}
	
	return 0;
}

