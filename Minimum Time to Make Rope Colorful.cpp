#include <bits/stdc++.h>
using namespace std;

int minCost(string colors, vector<int>& neededTime) {
    vector<pair<char,int>>P;
    int n=neededTime.size();
    int m=colors.length();
    //initialize the vector of pairs
    for(int i=0;i<m;i++)
        P.push_back({colors[i],neededTime[i]});
  
    //check if we have two consecutive ballon
    //then sort this two pairs by neededTime ascending
    for(int i=0;i<P.size()-1;i++){
        if(P[i].first==P[i+1].first && P[i].second>P[i+1].second)
            swap(P[i].second,P[i+1].second);    
    }
  
    int ans=0;
    for(int i=0;i<m-1;i++){
        if(colors[i]==colors[i+1])
            ans+=P[i].second;
    }
    return ans;
}
