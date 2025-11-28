
    char ch = name[i];
    s.push(ch);
  }

  //retrieval of characters from the stack 
  while(!s.empty()) {
    cout << s.top();
    s.pop();
  }

  return 0;
}
