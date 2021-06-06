#include<iostream>

int main() {
  int n;
  std::cin >> n;
  int F[50];
  F[0] = F[1] = 1;
  for ( int i = 2; i <= n; i++ ) F[i] = F[i-1] + F[i-2];
  std::cout << F[n] << std::endl;

  return 0;
}

