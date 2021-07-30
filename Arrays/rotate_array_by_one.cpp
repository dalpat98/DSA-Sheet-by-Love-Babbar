#include<iostream>
using namespace std;

int main(){
	int N,temp;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	temp = arr[N-1];
	for(int i=N-1;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

