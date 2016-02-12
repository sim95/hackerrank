#include <iostream>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main(){
    char str[10000];
    gets(str);
    int check[26] = {0};
    int flag=0;
    
    for(int i=0 ; str[i] != '\0' ; i++ ){
        if(islower(str[i])){
            str[i] = str[i] - 97;
        }
        else{
            str[i] = str[i] - 65;
        }
        
        check[str[i]]++;
    }
    
    for(int i=0 ; i<26 ; i++ ){
        if(!check[i]){
            flag=1;
            break;
        }       
    }
    
    if(flag==0)
      cout<<"pangram";
    else
        cout<<"not pangram";
}