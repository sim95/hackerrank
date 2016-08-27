#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int a[3];
	int b[3];

	int alice=0 , bob=0;
	cin>>a[0]>>a[1]>>a[2];
	cin>>b[0]>>b[1]>>b[2];

	for(int i = 0 ; i < 3 ; i++){
		if(a[i] > b[i])
			alice++;

		else if(b[i] > a[i])
			bob++;
	}

	cout<<alice<<" "<<bob;
	return 0;

}

//https://www.hackerrank.com/challenges/compare-the-triplets