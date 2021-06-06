#include<iostream>
#include<cstdio>
using namespace std;
static const int N = 100;

int main() {
	int M[N][N]; // ０オリジンの隣接行列
	int n, u, k, v;

	scanf("%d", &n);

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < n; j++ ) M[i][j] = 0;
	}

	for ( int i = 0; i < n; i++ ) {
		scanf("%d %d", &u, &k );
		u--; // 0 オリジンへ変換
		for ( int j = 0; j < k; j++ ){
			scanf("%d", &v);
			v--; // 0 オリジンへ変換
			M[u][v] = 1; // uとｖの間に辺を張る
		}
	}

	for ( int i = 0; i < n; i++ ) {
		for ( int j = 0; j < n; j++ ) {
			if (j) printf(" ");
			printf("%d", M[i][j]);
		}
		printf("\n");
	}

	return 0;
}


