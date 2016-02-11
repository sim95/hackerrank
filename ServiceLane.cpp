#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    long N;
    int T;
    int small;
    long i,j,k;
    cin>>N>>T;
    int width[N];
    for(i=0 ; i<N ; i++)
        cin>>width[i];
    
    while(T--){
        cin>>i>>j;
        k=i;
        small=width[k];
        for(;k<=j;k++){
            if(small>width[k])
                small = width[k];
        }
        cout<<small<<"\n";
    }
}