#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long max = INT_MIN, sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(max<sum) max=sum;
        if(sum<0) sum=0;
    }
    if(max<0) return 0; return max;
}