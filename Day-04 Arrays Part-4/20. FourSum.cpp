#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            long long t = target-arr[i]-arr[j];
            int k=j+1, l=n-1;
            while(k<l){
                if(arr[k]+arr[l]>t) l--;
                else if(arr[k]+arr[l]<t) k++;
                else return "Yes";
            }
        }
    }
    return "No";
}