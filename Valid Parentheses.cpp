#include <bits/stdc++.h>
using namespace std;

unordered_map<char,char>
M={
{ '(' , ')'},
{'{' ,  '}'},
{'[',']'}
 };

bool isValid(string s){
    stack<char>st;
    for(int i=0;i<s.length();i++){
        //if '(' , '[','{' is found Map we push it in the stack
        if(M.find(s[i])!=M.end()){
            st.push(s[i]);
        }
        else{
            //if there is no element in the stack we return false
            //exemple s=")(" s[0] is not found in M
            if(st.empty())
                return false;
            else{
                //if the stack is not empty we compare M[top] with S[i] if they are equal
                //we pop the top otherwise we return false
                char c=st.top();
                if(M[c]==s[i])
                    st.pop();
                else
                    return false;
            }

        }
    }
    return st.empty();
}

int main()
{
    string s;
    cin>>s;
    cout<<isValid(s);

}
