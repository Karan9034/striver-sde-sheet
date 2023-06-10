#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int m = matrix.size(), n=matrix[0].size();
	vector<int> rows;
	vector<int> cols;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(matrix[i][j]==0){
				rows.push_back(i);
				cols.push_back(j);
			}
		}
	}
	for(int x:rows){
		for(int j=0; j<n; j++){
			matrix[x][j]=0;
		}
	}
	for(int x:cols){
		for(int j=0; j<m; j++){
			matrix[j][x]=0;
		}
	}
}