#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int i=0, j=0;
	vector<int> ans;
	while(i<m && j<n){
		if(arr1[i] < arr2[j]){
			ans.push_back(arr1[i]);
			i++;
		}
		else if(arr1[i] > arr2[j]){
			ans.push_back(arr2[j]);
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			ans.push_back(arr2[j]);
			i++;
			j++;
		}
	}
	for(; i<m; i++){
		ans.push_back(arr1[i]);
	}
	for(; j<n; j++){
		ans.push_back(arr2[j]);
	}
	return ans;
}