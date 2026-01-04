#include<bits/stdc++.h>

using namespace std;
class Stack {
  vector < int > arr;
  public:
    void push(int x) {
      arr.push_back(x);
    }
  void pop() {
    if (arr.empty()) {
      cout << "Stack underflow" << endl;
      return;
    }
    else {
      arr.pop_back();
    }
  }
int top() {
  if (arr.empty()) {
    cout << "Stack underflow" << endl;
    return -1;
  } else {
    return arr.back();
  }
}
  bool empty() {
    return arr.empty();
  }
};
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  Stack s;
  s.push(10);
  s.push(20);
  s.pop();
  s.pop();
  cout << s.top() << endl;
  return 0;
}