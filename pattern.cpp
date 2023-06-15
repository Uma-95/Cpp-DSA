#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
 
    int row=1;
    while(row<=n){
        int col=1;
        int stars=n-row+1;
        int space=row-1;

        while(space){
            cout<<" ";
            space--;
            col++;
            
        }

        while(stars){
            cout<<"x";
            stars--;
            col++;
        } 

        cout<<endl;
        row++;
    }
   
    return 0;
}