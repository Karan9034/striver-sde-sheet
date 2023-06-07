#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int, int> ans;
	int idx=0;
	while(idx<n){
		if(arr[idx]!=arr[arr[idx]-1]) swap(arr[idx], arr[arr[idx]-1]);
		else idx++;
	}
	for(idx=0; idx<n; idx++)
		if (arr[idx] != idx + 1) {
			ans.first = idx + 1;
			ans.second = arr[idx];
		}
	return ans;
}
