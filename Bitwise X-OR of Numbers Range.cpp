#include<bits/stdc++.h>
using namespace std;
int main()
{
 long long int n;
 cin>>n;
 if(n%4==0){
     cout<<n<<endl;
 }
 else if(n%4==2){
     cout<<n+1<<endl;
 }
 else if(n%4==1){
     cout<<1<<endl;
 }
 else{
     cout<<0<<endl;
 }
}

