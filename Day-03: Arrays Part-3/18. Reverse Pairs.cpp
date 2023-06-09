#include <bits/stdc++.h> 
int reversePairs(vector<int> &arr, int n){
	int cnt=0;
	vector<long long> numProd(n);
	for(int i=0; i<n; i++) numProd[i]=(long long)2*arr[i];
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>numProd[j]) cnt++;
		}
	}
	return cnt;
}