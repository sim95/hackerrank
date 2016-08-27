#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;

	if( v1-v2>0 && (x2 - x1) % (v1 - v2) == 0 )
		cout<<"YES";
	else
		cout<<"NO";

}

//Time - O(1)
//Space - O(1)
//https://www.hackerrank.com/challenges/kangaroo