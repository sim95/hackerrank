#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n,k,q,rot;
	int *a,*b,*m;
	cin>>n>>k>>q;

	rot = k%n;
	a = new int[n];
	b = new int[n];

	m = new int[q];
	for(int i=0;i<n;i++)
		cin>>a[i];

	for (int i = 0; i < q; i++)
		cin>>m[i];

	for(int i=0 ; i<n ; i++){
		if(i+rot < n){
			b[i+rot] = a[i];
		}
		else{
			b[i+rot-n] = a[i];
		}
	}

	for(int i=0 ; i<q ; i++)
		cout<<b[m[i]]<<"\n";

}

//time - O(n)
//space - O(n)