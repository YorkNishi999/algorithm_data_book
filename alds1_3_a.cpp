#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

int top, S[1000];

void push(int x){
  // topを加算してからその位置へ挿入
  S[++top] = x;
}

int pop() {
  top--;
  return S[top+1];
}

int main() {
  int a,b;
  top = 0;
  char s[3];

  while(std::cin >> s) {
    if (s[0] == '+') {
      a = pop();
      b = pop();
      push(b+a);
    } else if (s[0] == '-') {
      a = pop();
      b = pop();
      push(b-a);
    } else if (s[0] == '*') {
      a = pop();
      b = pop();
      push(b*a);
    } else {
      push(atoi(s));
    }
  }
  std::cout << pop() << std::endl;
  return 0;
}


