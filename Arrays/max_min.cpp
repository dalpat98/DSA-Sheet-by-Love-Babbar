#include<iostream>
using namespace std;

int main(){
	int N,max =0,min=0;
	cin>>N;
	int arr[N];
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	for(int i=0;i<N;i++){
		if(arr[i]>max){
			max = arr[i];
		}
		if(arr[i]<min){
			min = arr[i];
		}
	}
	cout<<"Max = "<<max<<endl;
	cout<<"Min = "<<min;
	return 0;
}
