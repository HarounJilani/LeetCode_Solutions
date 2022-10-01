class Solution {
public:
    static bool compare(pair<int,int>p1 ,pair<int,int>p2){
    return p1.first<p2.first;
}
vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int,int>> P;
    vector<int>res;
    for(int i=0;i<nums.size();i++){
        P.push_back({nums[i],i});
    }
    sort(P.begin(),P.end(),compare);
    int i=0;
    int j=P.size()-1;
    while(i<j){
        if(P[i].first+P[j].first>target)
            j--;
        else if(P[i].first+P[j].first<target)
            i++;
        else{
            res.push_back(P[i].second);
            res.push_back(P[j].second);
            break;
        }
    }
    return res;

}
};
