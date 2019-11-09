/**
 * @description: https://leetcode-cn.com/problems/partition-list/
 * @author: zp
 * @date:2019-11-04 17:03:37
 **/

#include <iostream>

using namespace std; 
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL){}
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
class Solution{
public:
    ListNode* partition(ListNode* head, int x){
        ListNode* dummy1 = new ListNode(0);
        ListNode* dummy2 = new ListNode(0);
        ListNode* node1 = dummy1;
        ListNode* node2 = dummy2;
        while(head != NULL){
            if(head->val < x){
                node1->next = head;
                node1 = node1->next;
            }else{
                node2->next = head;
                node2 = node2->next;
            }
            head = head->next;
        }
        node1->next = dummy2->next;
        node2->next = NULL;// 一定要置为空，要不然可能形成循环链表
        return dummy1->next;
    }
};
int main(){
    int arr[] = {1, 4, 3, 2, 5, 2};
    int n = sizeof(arr) / sizeof(int);
    ListNode *list = createLinkedList(arr, n);
    printLinkedList(Solution().partition(list, 3));

    system("pause");
    return 0;
}