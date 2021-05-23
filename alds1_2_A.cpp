#include<iostream>

int bubbleSort(int A[], int N){
	int counter = 0;
	bool flag = true;
	for(int i=0; flag; i++) {
		flag = false;
		for(int j=N-1; j>i; j--){
			if(A[j]<A[j-1]){
				int tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				flag = true;
				counter++;
			}
		}
	}
	return counter;
}

int main(){
	int A[100], n, count;
	std::cin >> n;
 	for(int i=0; i<n; i++) std::cin >> A[i];

	count = bubbleSort(A, n);
	
	for(int i=0; i<n; i++){
		if(i) std::cout << " ";
		std::cout << A[i];
	}		
	std::cout << std::endl;
	std::cout << count << std::endl;

	return 0;
}

