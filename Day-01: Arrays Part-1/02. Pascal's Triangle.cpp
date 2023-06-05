#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  ans.push_back(vector<long long int>({1}));
  if(n==1) return ans;
  
  for(int i=1; i<n; i++){
    vector<long long int> hmm(i+1);
    hmm[0] = 1;
    hmm[i] = 1;
    for(int j=1; j<i; j++){
      hmm[j] = ans[i-1][j-1]+ans[i-1][j];
    }
    ans.push_back(hmm);
  }
  return ans;
}
