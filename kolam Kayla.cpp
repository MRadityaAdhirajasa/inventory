#include <iostream>
#include <iomanip>

using namespace std;

int main(){
     double jarijari, luas;

     const float p = 3.14;

     cin>>jarijari;
     
     luas = p * (jarijari*jarijari);
     
     if(jarijari>0 && jarijari<=100){

     cout<<fixed;
     cout<<setprecision(2)<<luas<<endl;
 	}else{
 		cout<<"angka salah"<<endl;
	 }

     return 0;
}
