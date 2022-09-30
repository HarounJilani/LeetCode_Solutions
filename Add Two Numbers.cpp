#include<bits/stdc++.h>
using namespace std;

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* newhead=new ListNode(0);
    ListNode *tmp=newhead;
    int r=0;
    int val;
    while(l1!=nullptr || l2!=nullptr || r!=0){
        val=r;
        if(l1)
            val+=l1->val;
        if(l2)
            val+=l2->val;
        ListNode *P=new ListNode(val%10);
        tmp->next=P;
        tmp=P;
        if(val>9)
            r=1;
        else
            r=0;
        if(l1)
            l1=l1->next;
        if(l2)
            l2=l2->next;

    }
    return newhead->next;
}
