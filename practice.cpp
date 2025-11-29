
        void print() {
          cout << "Top1: " << top1 << endl;
          cout << "Top2: " << top2 << endl;
          for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
          }
          cout << endl;
        }
};

int main() {
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
