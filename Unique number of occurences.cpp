class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
     set<int>s;
     map<int,int>m;
     for(int i=0;i<arr.size();i++){
      m[arr[i]]++;
     }

     for(auto i:m){
         s.insert(i.second);
     }

     if(s.size()==m.size()){
         return true;
     }
        return false;
    }
};

//  map<int,int>m;
//         vector<int>ans;
//         int n=arr.size();

//         //insert the elments in a map
//         for(int i=0;i<n;i++){
//             m[arr[i]]++;
//         }

//         //push back the frequency of each element in a vector
//  for(auto i:m){
//      ans.push_back(i.second);
//  }

// //check if the vector has all unique elemnets by comaparing each elements with the oher elements
// for(int i=0;i<ans.size();i++){
//     for(int j=i+1;j<ans.size();j++){
//         if(ans[i]==ans[j])
//        { return false;
//         break;
//     }
//     }
// }