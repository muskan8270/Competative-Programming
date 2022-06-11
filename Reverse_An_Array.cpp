////Reverse an Array
#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int start,int end){
	
	if(start>=end)
	    return;
	else{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		
		reverseArray(arr,start+1,end-1);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Reverse array is : "<<endl;
//	int temp;
//	int start=0,end=n-1;
//	while(start<end){
//		int temp = arr[start];
//		arr[start] = arr[end];
//		arr[end] = temp;
//		start++;
//		end--;
//	}
//Reverse the array using recursive method
int start=0,end=n-1;
reverseArray(arr,start,end);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
