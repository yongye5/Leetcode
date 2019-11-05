/**
 * @description: https://leetcode-cn.com/problems/add-two-numbers/submissions/
 * @author: zp
 * @date:2019-11-05 21:15:02
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(0);
        ListNode* p = l1;
        ListNode* q = l2;
        ListNode* cur = dummyNode;
        int carry = 0;
        while(p != NULL|| q != NULL){
            int x = p != NULL ? p->val : 0;
            int y = q != NULL ? q->val : 0;
            int sum = x + y + carry;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            if(p != NULL){
                p = p->next;
            }
            if(q != NULL){
                q = q->next;
            }
        }
        if(carry > 0){
            cur->next = new ListNode(carry);
        }
        return dummyNode->next;
    }
};
int main(){
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {8, 9, 3};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    ListNode *list1 = createLinkedList(arr1, n1);
    ListNode *list2 = createLinkedList(arr2, n2);
    printLinkedList(Solution().addTwoNumbers(list1, list2));
    system("pause");
    return 0;
}