#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> s;
	set<int> s1;
	int n,t;
	cout<<"Length of 1st Array : "<<endl;
	cin>>n;
	cout<<"Enter All "<<n<<" Elements : "<<endl;
	for(int i=0;i<n;i++){
		cin>>t;
		if( !s.insert(t).second ) {
		    s1.insert(t);
		}
	}
	cout<<"Length of 2nd Array : "<<endl;
	cin>>n;
	cout<<"Enter All "<<n<<" Elements : "<<endl;
	for(int i=0;i<n;i++){
		cin>>t;
		if( !s.insert(t).second ) {
		    s1.insert(t);
		}
	}
	set<int>::iterator itr;
	for(itr = s.begin(); itr != s.end(); itr++){
		cout<<*itr<<" ";
	}
	cout<<"\nUnion Count : "<<s.size()<<endl;

	for(itr = s1.begin(); itr != s1.end(); itr++){
		cout<<*itr<<" ";
	}
	cout<<"\nIntersection Count : "<<s1.size()<<endl;
	
	return 0;
}
