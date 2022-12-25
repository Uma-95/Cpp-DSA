// PROBLEM STATEMENT
// You have been given a sorted array/list ARR consisting of ‘N’ elements. You are also given an integer ‘K’.

// Now, your task is to find the first and last occurrence of ‘K’ in ARR.

// Note :

// 1. If ‘K’ is not present in the array, then the first and the last occurrence will be -1. 
// 2. ARR may contain duplicate elements.
// For example, if ARR = [0, 1, 1, 5] and K = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.

// Input Format
// The first line of input contains an integer 'T' which denotes the number of test cases or queries to be run. Then the test cases follow.

// The first line of each test case contains two single-space separated integers ‘N’ and ‘K’, respectively.

// The second line of each test case contains ‘N’ single space-separated integers denoting the elements of the array/list ARR.
// Output Format :
// Return two single-space separated integers denoting the first and the last occurrence of ‘K’ in ARR, respectively.
// Note:
// You do not need to print anything; it has already been taken care of. Just implement the given function.
// Constraints:
// 1 <= T <= 100
// 1 <= N <= 5000
// 0 <= K <= 10^5
// 0 <= ARR[i] <=10^5

// Time Limit : 1 second


#include <bits/stdc++.h> 
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans1=-1;
    int ans2=-1;
    pair<int,int>p;
    
    //for leftmost occurence 
    //we travel leftside only
    while(s<=e){
        if(k==arr[m]){
            ans1=m;
             e=m-1;
        }
          else if(k>arr[m]){
             s=m+1;
           }
          else if(k<arr[m]){
           e=m-1;
           }
        m=s+(e-s)/2;
    }
    
    //update the values again
    s=0;
    e=n-1;
    m=s+(e-s)/2;
     //for rightmost occurence 
     //travel right side only
    while(s<=e){
        if(k==arr[m]){
            ans2=m;
             s=m+1;
        }
          else if(k>arr[m]){
             s=m+1;
           }
          else if(k<arr[m]){
           e=m-1;
           }
        m=s+(e-s)/2;
    }
    
//     p=make_pair(ans1,ans2);
    p.first=ans1;
    p.second=ans2;
// return make_pair(ans1,ans2);
    return p;
}