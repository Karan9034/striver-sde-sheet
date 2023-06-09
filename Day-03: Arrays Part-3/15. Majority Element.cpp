#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int c=0, ans=0;
	for(int i=0; i<n; i++){
		if(c==0) ans=arr[i];
		if(arr[i]==ans) c++;
		else c--;
	}
	int cnt=0;
	for(int i=0; c!=0 && i<n; i++){
		if(arr[i]==ans) cnt++;
		if(cnt>n/2) return ans;
	}
	return -1;
}