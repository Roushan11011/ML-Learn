//Fibbonaci series: 0,1,1,2,3,5,8......

#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int fibb(int n){
 if(n<=1) return n;
 dp[n]=fibb(n-1)+fibb(n-2);
 return dp[n];

}
int main(){
int n=5;
memset(dp,0,sizeof(dp));
// or can use dp[1000]={0}
dp[1]=1;
cout<<fibb(n-1)<<endl;

cout<<"Generating series: \n";
for(int i=0;i<n;i++)
cout<<fibb(i)<<"\n";
}