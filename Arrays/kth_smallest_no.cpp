#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,k;
	cin>>N;
	cin>>k;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	sort(arr,arr+N);
	cout<<arr[k-1];
	return 0;
}
