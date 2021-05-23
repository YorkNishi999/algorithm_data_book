#include<iostream>
#include<algorithm>

static const int N = 100;

int main(){

	int A[N],n;
	std::cin >> n;
	for(int i=0; i<n; i++) std::cin >> A[i];

	for(int i=0; i<n; i++) std::cout << A[i] << ((i==n-1)?'\n':' ');

	for(int i=1; i<n; i++){
		int v=A[i];
		int j=i-1;
		while(j>=0 && A[j]>v){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = v;
		for(int k=0; k<n; k++) std::cout << A[k] << ((k==n-1)?'\n':' ');
	}		
	return 0;
}


