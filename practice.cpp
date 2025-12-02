

  void pop(){
    if(top == -1) cout << "Stack Underflow" << endl;
    else {
      arr[top] = 0;
      top--;
    }
  }

}
