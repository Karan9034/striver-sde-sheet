#include <bits/stdc++.h>

long long pow(long long x, long long n, long long m){
	if(n==0) return 1;
	long long ans =  pow(x, n/2, m)%m;
	ans = (ans*ans)%m;
	if(n%2==0) return ans;
	return (x* ans)%m;

}

long long modularExponentiation(long long x, long long n, long long m) {
	if(x%m==0) return 0;
	return pow(x, n, m);
}