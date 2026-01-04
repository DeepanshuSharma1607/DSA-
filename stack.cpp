#include<bits/stdc++.h>
using namespace std;
// **************************************STACK USING ARRAY***************************************
// class Stack {
//     vector < int > arr;
//     public:
//         void push(int x) {
//             arr.push_back(x);
//         }
//     void pop() {
//         if (arr.empty()) {
//             cout << "Stack underflow" << endl;
//             return;
//         } else {
//             arr.pop_back();
//         }
//     }
//     int top() {
//         if (arr.empty()) {
//             cout << "Stack underflow" << endl;
//             return -1;
//         } else {
//             return arr.back();
//         }
//     }
//     bool empty() {
//         return arr.empty();
//     }
// };
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.pop();
//     s.pop();
//     cout << s.top() << endl;
//     return 0;
// }
// **************************************STACK USING LINKED LIST***************************************
class Stack{
    private:
    struct Node{
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node* topNode;
public:
    Stack(){
        topNode=NULL;
    }
    void push(int val){
        Node *newNode=new Node(val);
        newNode->next=topNode;
        topNode=newNode;
    }
    void pop(){
        if(topNode==NULL){
            cout<<"stck underflow"<<endl;
            return;
        }
        Node* temp=topNode;
        topNode=topNode->next;
        delete temp;
    }
    int top(){
        if(topNode==NULL){
            cout<<"stck underflow"<<endl;
            return -1;
        }
        return topNode->data;
    }
    bool empty(){
        return topNode==NULL;
    }
    ~Stack(){
        while(!empty()){
            pop();
        }
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    Stack s;
    s.push(10);
    s.push(20);
    // s.pop();
    cout << s.top() << endl;
    return 0;
}