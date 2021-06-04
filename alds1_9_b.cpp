#include<cstdio>
#include<iostream>
#define MAX 2000000

int H, A[MAX+1];

void maxHeapify( int i) {
  int l, r, largest;
  l = 2 * i;
  r = 2 * i +1;

  //左の子、自分、右の子で値が最大のノードを選ぶ
  if ( l <= H && A[l] > A[i] ) largest = l;
  else largest = i;
  if (r <= H && A[r] > A [largest] ) largest = r;

  if ( largest != i ) {
    std::swap(A[i], A[largest]);
    maxHeapify( largest );
  }
}

int main () {
  scanf("%d", &H);

  for ( int i = 1; i <= H; i++) scanf("%d", &A[i]);

  for ( int i = H / 2; i >= 1; i-- ) maxHeapify(i);

  for ( int i = 1; i <= H; i++ ) {
    printf(" %d", A[i]);
  }
  printf("\n");

  return 0;
}

