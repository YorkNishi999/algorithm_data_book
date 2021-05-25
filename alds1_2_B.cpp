#include<iostream>

int selectionSort(int A[], int N) {
  int counter = 0;
  for(int i=0; i<N-1; i++){
    int minj = i;
    for(int j=i; j<N; j++){
      if(A[j] < A[minj]) minj = j;
    }
    int tmp = A[i];
    A[i] = A[minj];
    A[minj] = tmp;
    if(i != minj) counter++;
  }
  return counter;
}
   

int main(){
  int A[100], n, count;
  std::cin >> n;
  for(int i=0; i<n; i++) std::cin >> A[i];

  count = selectionSort(A, n);

  for(int i=0; i<n; i++){
    if(i) std::cout << " ";
    std::cout << A[i];
  }
  std::cout << std::endl;
  std::cout << count << std::endl;

  return 0;
}
