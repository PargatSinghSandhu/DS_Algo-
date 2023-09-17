/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    // Write your code here
    struct Node*head = NULL;
    
    for(int i=arr.size()-1;i>=0;i--)
    {
        Node*temp = new Node;
        temp->data=arr[i];
        temp->next=head;
        head=temp;
        
               
    }
    return head;
}
