#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,b,u;
    
    cin>>t>>b>>u;
    
    if(t>170 && t<185 && b>55 && b<65 && u>=15){
        cout<<"Lolos"<<endl;
    }else{
        cout<<"Tidak Lolos"<<endl;
    }
    return 0;
}
