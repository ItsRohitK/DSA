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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*head1=new ListNode();
        ListNode*temp=head1;
        ListNode*prev=head1;
        ListNode*anotherHead=head;
        int check=0,sum=0;
        while(anotherHead!=NULL){
            if(check==0){
                check=1;
                anotherHead=anotherHead->next;
                continue;
            }
            else{
                if(anotherHead->val==0){
                    ListNode*temp1=new ListNode();
                    temp->val=sum;
                    temp->next=temp1;
                    prev=temp;
                    temp=temp->next;
                    sum=0;
                }
                else{
                    sum+=anotherHead->val;
                }
                anotherHead=anotherHead->next;
            }
        }
        prev->next=NULL;
        
        return head1;
        
    }
};