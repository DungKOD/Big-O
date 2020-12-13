#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int left ,int right,int x){
	while(left<=right){
		int mid=(left + right)/2;
		if(a[mid]==x){
			return mid;	
		}
		if(a[mid]>x){
			right =mid-1;
		}else{
			left =mid+1;
		}
	}
	return -1;
}

int main(){
	int a[15]={2,3,4,5,15,19,26,27,36,38,44,46,47,48,50};
	cout<<"result : "<<binarySearch(a,0,15,5);
	return 0;
}

