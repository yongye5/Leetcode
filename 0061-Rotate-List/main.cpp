/**
 * @description: https://leetcode-cn.com/problems/rotate-list/
 * @author: zp
 * @date:2019-11-07 14:49:23
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
    /**
     * 先遍历求总长度，然后找到要断开的节点断开，再讲尾部和头部相连
     *  
     */
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL){
            return NULL;
        }
        int len = 0;
        ListNode* cur = head;
        while(head != NULL){
            len ++;
            head = head->next;
        }
        head = cur;
        if(k % len == 0){
            return head;
        }
        int seq = len - (k % len);
        ListNode* oldHead = head;
        ListNode* newHead;
        while(head->next != NULL){
            if(seq == 1){
                newHead = head->next;
                head->next = NULL;
                head = newHead;
                seq--;
                continue;
            }
            seq--;
            head = head->next;
        }
        head->next = oldHead;
        return newHead;
    }
    /**
     * 在遍历求总长度的同时将尾节点与头结点相连，再找要断开的节点
     *
     */
    ListNode* rotateRight2(ListNode* head, int k){
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* cur = head;
        int len = 0;
        while(cur->next != NULL){
            len++;
            cur = cur->next;
        }
        len++;
        cur->next = head;
 
        for(int i = 0; i < len - (k % len) - 1; i ++){
            head = head->next;            
        }
        ListNode* newHead = head->next;
        head->next = NULL;
        return newHead;
    }
};
int main(){
    int arr[] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    ListNode *list = createLinkedList(arr, n);
    printLinkedList(Solution().rotateRight2(list, 3));
    system("pause");
    return 0;
}