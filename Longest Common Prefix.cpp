#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    int minimum=200;
    //get the minimum length of string
    for(int i=0;i<strs.size();i++){
        if(strs[i].length()<minimum)
          minimum=strs[i].length();
    }
    string ch="";
    int i=0;
    int j;
    //iterate minimum times because that's
    //the longest common prefix  we can have
    while(i<minimum){
            bool ok=true;
            for(j=0;j<strs.size()-1;j++){
                if(strs[j][i]!=strs[j+1][i]){
                    ok=false;
                    break;
                }
            }
            if(ok)
                ch=ch+strs[j][i];
            //if strs[j][i] and strs[j+1][i] are different or i==minmum-1 we return ch
            if(!ok || i==minimum-1)
                return ch;

            i++;
    }
    return "";
}



int main()
{
    vector<string> v;
    string x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }

    cout<<longestCommonPrefix(v);
}

