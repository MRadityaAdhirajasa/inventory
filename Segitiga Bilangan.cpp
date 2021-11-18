#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,n;
    
    cin>>n;
    
    if(n<10 && n>=1){
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
