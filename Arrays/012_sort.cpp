#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
		void sort012(int a[],int n){
			int zero = 0,one = 0, two = 0;
	        // coode here 
	        for(int i=0;i<n;i++){
	            if(a[i]==0){
	                zero++;
	            }
	            else if(a[i]==1){
	                one++;
	            }
	            else{
	                two++;
	            }
	        }
	        for(int i=0;i<n;i++){
	            if(zero!=0){
	                a[i]=0;
	                zero--;
	            }
	            else{
	                if(one!=0){
	                    a[i]=1;
	                    one--;
	                }
	                else{
	                    a[i]=2;
	                }
	            }
	            
	        }
		}
};

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	Solution ob;
	ob.sort012(a,n);
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

