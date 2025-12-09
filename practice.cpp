

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution{
public:
    Node* solve(Node* head){
        auto it=head;
        auto tail=it;
        while(it){
            if(it->child){
                auto childTail=solve(it->child);
                auto temp=it->next;
                it->next=it->child;
                it->next->prev=it;
                childTail->next=temp;
                if(temp) temp->prev=childTail;
                it->child=nullptr;
            }
            tail=it;
            it=it->next;
        }
        return tail;
    }

    Node* flatten(Node* head){
        if(!head) return nullptr;
        solve(head);
        return head;
    }
};



// ----------------------------Stack class - 1--------------------------------
//Demonstrate basic operations on a stack using STL (push, pop, top, size, empty).
#include <iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}


//#include <iostream>
using namespace std;

class Stack{
    public:
          int* arr;
          int size;
          int top;

          Stack(int capacity) {
            arr = new int[capacity];
            size = capacity;
            top = -1;
          }

void push(int val){
    if(top==size-1){
        cout<<"Stack Overflow"<<endl;
    }else{
        top++;
        arr[top]=val;
    }
}

void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
    }else{
        arr[top]=0;
        top--;
    }
}

int getSize(){
    return top+1;
}

bool isEmpty(){
    if(top==-1) return true;
    else return false;
}

int getTop(){
    if(top==-1){
        cout<<"There is no element at the top, as stack is empty";
        return -1;
    }else{
        return arr[top];
    }
}

void print(){
    cout<<"Printing Stack"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
};


int main() {
  //creating a Stack of initial size 5 
  Stack s(5);
  s.print();
  s.push(10);
  s.print();
  s.push(20);
  s.print();
  s.push(30);
  s.print();
  s.push(40);
  s.print();
  s.push(50);
  s.print();
  s.push(60);
  s.print();

  cout << s.getTop() << endl;
  cout << s.getSize() << endl;
  cout << s.isEmpty() << endl;

  s.pop();
  s.print();
    s.pop();
  s.print();
    s.pop();
  s.print();
      s.pop();
  s.print();
      s.pop();
  s.print();
  s.pop();
  cout << s.getSize();
  return 0;
}

// hw stack using linked list 
#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Stack{
public:
    Node* top;
    Stack(){
        top=NULL;
    }
    void push(int val){
        Node* newNode=new Node(val);
        newNode->next=top;
        top=newNode;
    }
    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        Node* temp=top;
        top=top->next;
        delete temp;
    }
    int getTop(){
        if(top==NULL){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        return top==NULL;
    }
    int getSize(){
        int count=0;
        Node* temp=top;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }

    void print(){
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.getSize()<<endl;
    cout<<s.getTop()<<endl;
    s.pop();
    cout<<s.getTop()<<endl;
    s.print();
    return 0;
}

// Implement two stacks in a single array.
#include <iostream>
using namespace std;

class Stack{
public:
    int* arr;
    int size;
    int top1;
    int top2;

    Stack(int capacity){
        arr=new int[capacity];
        size=capacity;
        top1=-1;
        top2=size;
    }

    void push1(int value){
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
        }else{
            top1++;
            arr[top1]=value;
        }
    }

    void push2(int value){
        if(top2-top1==1){
            cout<<"Stack Overflow"<<endl;
        }else{
            top2--;
            arr[top2]=value;
        }
    }

    void pop1(){
        if(top1==-1){
            cout<<"Stack Underflow"<<endl;
        }else{
            arr[top1]=0;
            top1--;
        }
    }

    void pop2(){
        if(top2==size){
            cout<<"Stack Underflow"<<endl;
        }else{
            arr[top2]=0;
            top2++;
        }
    }

    void print(){
        cout<<"Top1: "<<top1<<endl;
        cout<<"Top2: "<<top2<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s(5);
    s.push1(10);
    s.print();
    s.push2(90);
    s.print();
    s.push2(80);
    s.print();
    s.pop1();
    s.print();
    s.push2(90);
    s.print();
    s.push2(80);
    s.print();
    s.push2(80);
    s.print();
    s.push1(80);
    s.print();
    return 0;
}

// Reverse a string using a stack.
#include <iostream>
#include<stack>
using namespace std;

int main() {
  stack<char> s;
  string name = "amitwala";

  for(int i=0; i<name.length(); i++) {
    char ch = name[i];
    s.push(ch);
  }
  while(!s.empty()) {
    cout << s.top();
    s.pop();
  }

  return 0;
}

// Insert an element at the bottom of a stack using recursion.
#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>& s, int value) {
  //base case
  if(s.empty()) {
    s.push(value);
    return;
  }
  //1 case hum krenge and baaki recursion karega
  int topElement = s.top();
  s.pop();

  //baaki recursion
  insertAtBottom(s,value);

  //backtrack
  s.push(topElement);
}

int main() {
  stack<int> s;
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);

  int value = 13;

  insertAtBottom(s,value);

  //traverse
  while(!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
  return 0;
}
