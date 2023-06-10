#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i=n-2;
    while(i>=0 && permutation[i+1]<=permutation[i]) i--;
    int k = n-1;
    if(i>=0){
        while(permutation[k] <= permutation[i]) k--;
        int tmp = permutation[k];
        permutation[k] = permutation[i];
        permutation[i] = tmp;
    }
    reverse(permutation.begin()+i+1, permutation.end());
    return permutation;
}