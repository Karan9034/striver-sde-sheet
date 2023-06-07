#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    if(n==1||m==1) return;
    int t=0, b=n-1, l=0, r=m-1;
    while(t<b && l<r){
        int tmp = mat[t][l];
        for(int i=t; i<b; i++) mat[i][l] = mat[i+1][l];
        for(int i=l; i<r; i++) mat[b][i] = mat[b][i+1];
        for(int i=b; i>t; i--) mat[i][r] = mat[i-1][r];
        for(int i=r; i>l; i--) mat[t][i] = mat[t][i-1];
        mat[t][l+1]=tmp;
        t++;l++;r--;b--;
    }
}