;
        }
        else {
            top--;
        }
    }


    int getsize() {
        return top + 1;
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

}

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
