#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
int T;
cin>>T;

while(T--){
    int n;
int count=0;
 cin>>n;
 int dolls[n];
 for(int i=0;i<n;i++){
     cin>>dolls[i];
 }
 sort(dolls,dolls+n);
 for(int i=0;i<n;i=i+2){
     if(dolls[i]!=dolls[i+1]){
    cout<<dolls[i]<<endl;
     break;
         
     }
 }

}
	return 0;
}