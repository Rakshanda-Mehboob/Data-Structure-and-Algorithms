#include<iostream>
using namespace std;
int main(){
	int n=5;
	int array[n]={2,4,6,8,9};
	int low=0,high=n-1,x;
	cout<<"Enter element to search "<<endl;
	cin>>x;
	while(low<=high){
		int mid=(low+high)/2;
		if(array[mid]==x){
			cout<<"Element found at index "<<mid<<endl;
			return 0;
		}else if(array[mid]<x){
			low=mid+1;
		}else{
			high=mid-1;
		}	
	}
	cout<<"element not found in array"<<endl;
}
