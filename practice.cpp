
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

          void push(int val) {
              if(top == size-1) {
                //astack is already full, agar insert karoge, toh stack overflow hojaega
                cout << "Stack Overflow" << endl;
              }
              else {
                //normal case -> stack me khaali jagah hai abhi
                top++;
                arr[top] = val;
              }
          }

          void pop() {
              if(top == -1) {
                //stack is empty, cannot pop in this case, coz there is no elemnt to pop
                cout << "Stack Underflow" << endl;
              }
              else {
                //normal case
                arr[top] = 0;
                top--;
              }
          }

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
