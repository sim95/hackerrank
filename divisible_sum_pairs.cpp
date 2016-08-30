#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int n,k,count=0;
	int *arr;
	cin>>n>>k;

	arr = new int[n];

	for (int i = 0; i < n; i++)
		cin>>arr[i];

	for (int i = 0; i < n; i++){
		for(int j = i+1 ; j < n ; j++ ){
			if((arr[i]+arr[j])%k == 0 )
				count++;
		}
	}
	cout<<count;
}

//Time - O(n^2)
//Space - O(1)

