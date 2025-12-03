

          int getSize() {
              return top+1;
          }

          bool isEmpty() {
              if(top == -1) {
                return true;
              }
              else {
                return false;
              }
          }

          int getTop() {
              if(top == -1) {
                cout << "There is no element at the top, as stack is empty";
                return -1;
              }
              else {
                //normal case
                return arr[top];
              }
          }

          void print() {
            cout << "Printing Stack" << endl;
            for(int i=0; i<size; i++) {
              cout << arr[i] << " " ;
            }cout << endl;
          }
};
