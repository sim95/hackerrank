#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

int main(){    
    int T;
    int a,b;
    cin>>T;
    while(T--){
        cin>>a>>b;
        
        cout<<(int)(floor(sqrt(b))-ceil(sqrt(a))+1)<<"\n";
    }
}