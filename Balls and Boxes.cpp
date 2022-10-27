#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	int N,K;
	int sum;
	while(T--){
	    cin>>N>>K;
	    sum=(K*(K+1))/2;
	    if(N==1 && K==1)
	    cout<<"yes"<<endl;
	    else if(K==N)
	    cout<<"no"<<endl;
	    else if(N<K)
	    cout<<"no"<<endl;
	    else if(N>=sum)
	    cout<<"yes"<<endl;
	    else if(N<sum)
	    cout<<"no"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
