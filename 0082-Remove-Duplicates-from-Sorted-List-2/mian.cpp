/**
 * @description: https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/submissions/
 * @author: zp
 * @date:2019-11-06 19:34:19
 **/

#include <iostream>

using namespace std; 
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){}
};
ListNode* createLinkedList(int arr[], int n){
    if(n == 0){
        return NULL;
    }
    ListNode* head = new ListNode(arr[0]);
    ListNode* curNode = head;
    for(int i = 1; i < n; i ++){
        curNode->next = new ListNode(arr[i]);
        curNode = curNode->next;
    }
    return head;
}
void printLinkedList(ListNode* head){
    ListNode* curNode = head;
    while(curNode != NULL){
        cout <<curNode->val << " -> ";
        curNode = curNode->next;
    }
    cout << "NULL" << endl;
}

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        ListNode* slow = dummyNode;
        ListNode* fast = slow->next;

        while(fast != NULL){
            if(fast->next == NULL || fast->val != fast->next->val){
                if(slow->next == fast){
                    slow = fast;
                }else{
                    slow->next = fast->next;
                }
            }

            fast = fast->next;
        }
        return dummyNode->next;
    }
};
int main(){
    int arr[] = {1, 1, 1, 3, 4, 5, 6, 6, 6};
    int n = sizeof(arr) / sizeof(int);
    ListNode *list = createLinkedList(arr, n);
    printLinkedList(Solution().deleteDuplicates(list));
    system("pause");
    return 0;
}