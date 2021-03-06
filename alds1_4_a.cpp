#include<cstdio>
#include<cstdlib>
#include<cstring>

int linearSearch(int A[], int n, int key){ 
  // A: 探索するデータ、n: 探索データの数, key: 検索する数値
  int i = 0;
  A[n] = key;
  while (A[i]  != key) i++;
  return i != n;
}

int main() {
  int i, n, A[10000+1], q, key, sum = 0;
  // q: qに入ってる数値を検索する, sum: カウンタ
  scanf("%d", &n);
  for( i=0; i<n; i++) scanf("%d", &A[i]);

  scanf("%d", &q);
  for( i=0; i<q; i++) {
    scanf("%d", &key);
    if (linearSearch(A, n, key) ) sum++;
  }

  printf("%d\n", sum);

  return 0;
}

