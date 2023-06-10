#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int buy=prices[0], maxProf=0;
    for(int i=1; i<prices.size(); i++){
        if(prices[i]-buy>maxProf) maxProf=prices[i]-buy;
        if(prices[i]<buy) buy=prices[i];
    }
    return maxProf;
}