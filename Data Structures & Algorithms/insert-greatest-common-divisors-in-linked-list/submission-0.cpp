/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
 int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
 }
 void insertinbetween(ListNode* h1,ListNode* h2,int vl){
    ListNode* node=new ListNode(vl);
     ListNode* nxt=h2;
     h1->next=node;
     node->next=nxt;
 }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL && temp->next!=NULL){
            ListNode* h=temp;
            ListNode* h2=temp->next;
            int vl=gcd(h->val,h2->val);
            insertinbetween(h,h2,vl);
            temp=h2;
        }
        return head;
    }
};