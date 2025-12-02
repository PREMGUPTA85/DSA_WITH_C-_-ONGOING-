
  int top;

  stack(int capacity){
    arr = new int[capacity];
    size = capacity;
    top = -1;
  }

  // perform push operation 
  void push(int val){
    if(top == size - 1){
      cout << "Stack Overflow" << endl;
      return;
    }
    else {
      top++;
      arr[top] = val;
    }
  }

  void pop(){
    if(top == -1) cout << "Stack Underflow" << endl;
    else {
      arr[top] = 0;
      top--;
    }
  }

}
