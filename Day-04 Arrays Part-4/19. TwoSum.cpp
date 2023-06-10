#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   int n=arr.size();
   map<int, int> mp;
   sort(arr.begin(), arr.end());
   vector<vector<int>> ans;
   for(int i=0; i<n; i++) {
      int diff=s-arr[i];
      if(mp.find(diff)!=mp.end()){
         vector<int> tmp({diff, arr[i]});
         for(int j=0; j<mp[diff]; j++) ans.push_back(tmp);
      }
      mp[arr[i]]++;
   }
   sort(ans.begin(), ans.end());
   return ans;
}