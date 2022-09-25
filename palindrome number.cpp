#include <bits/stdc++.h>
using namespace std;
stack<int>F;
queue<int>L;
bool isPalindrome(int x) {
    if(x<0)
        return false;
    int r;
    while(x!=0){
        r=x%10;
        L.push(r);
        F.push(r);
        x=x/10;

    }
    while(!L.empty() && !F.empty()){
        if(L.front()!=F.top()){
            return false;
        }
        L.pop();
        F.pop();
    }
    return true;

}

int main()
{
    cout<<isPalindrome(x);
}
