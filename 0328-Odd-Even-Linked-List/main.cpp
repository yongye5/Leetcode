/**
 * @description: https://leetcode-cn.com/problems/odd-even-linked-list/
 * @author: zp
 * @date:2019-11-05 17:04:07
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


int main(){

    system("pause");
    return 0;
}