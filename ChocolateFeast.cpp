#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int T;
    long N,C,M;
    
    int dn,total=0;
    cin>>T;
    while(T--){
        cin>>N>>C>>M;
        
        dn = N/C;
        total = dn;
        
        while((dn-M)>=0){
            dn = dn-M;
            total++;
            dn++;
        }
        cout<<total<<"\n";
    }
}