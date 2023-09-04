//Kadane's algorithm

#include<bits/stdc++.h>
using namespace std;
int main(){
int n=5;
int *arr=new int[n];
arr[0]=-1;
arr[1]=0;
arr[2]=3;
arr[3]=8;
arr[4]=-8;

int csum=0;
int sum=0;
for (int i=0;i<n;i++){
csum+=arr[i];
if(csum<0) csum=0;
sum=max(sum,csum);
}
cout<<"Longest Subsequnt sum: "<<sum<<endl;
}