#include<bits/stdc++.h>
using namespace std;

long long int binsearch(int n){
int s=0;
int e=n;
long long int m=s+(e-s)/2;
long long int ans=-1;
while(s<=e){
    long long int sq=m*m;
    if(sq==n){
        return m;
    }

    if(sq<n){
        ans=m;
        s=m+1;
    }
    else{
         e=m-1;

    }
   m=s+(e-s)/2; 
}
return ans;
}

double acc(int n,int tempsol,int precision){
double factor=1;

double ans=tempsol;
for(int i=0;i<precision;i++){
    factor=factor/10;
    for (double j = ans; j*j<n; j=j+factor)
    {
    {
     ans=j;   
    } 
}
}
return ans;
}

int main(){
    int n;
    cin>>n;
    int ans=binsearch(n);
    double finalans=acc(n,ans,3);
    cout<<finalans;
    return 0;
}