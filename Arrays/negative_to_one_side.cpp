#include<iostream>
using namespace std;

int main(){
	int N,count;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	count = 0;
	for(int i=0;i<N;i++){
		if(arr[i]<0){
			if(i!=count)
				swap(arr[i],arr[count]);
			count++;
		}
	}
	cout<<"Array : "<<endl;
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
