#include<iostream>

struct Card {
	char suit; 
	int value;
	};

int bubbleSort(struct Card A[], int N){
	bool flag = true;
	for(int i=0; flag; i++) {
		flag = false;
		for(int j=N-1; j>i; j--){
			if(A[j].value<A[j-1].value){
				Card tmp = A[j];
				A[j] = A[j-1];
				A[j-1] = tmp;
				flag = true;
			}
		}
	}
	return 0;
}

int selectionSort(struct Card A[], int N) {
	for(int i=0; i<N-1; i++){
		int minj = i;
		for(int j=i; j<N; j++){
			if(A[j].value < A[minj].value) minj = j;
		}
		Card tmp = A[i];
		A[i] = A[minj];
		A[minj] = tmp;
		}
	return 0;
}
void print(struct Card A[], int N) {
	for(int i=0; i<N; i++){
		if(i>0) std::cout << " ";
		std::cout << A[i].suit << A[i].value;
	}
	std::cout << std::endl;
}

bool isStable(struct Card C1[], struct Card C2[], int N) {
	for(int i=0; i<N; i++){
		if(C1[i].suit != C2[i].suit) return false;
	}
	return true;
}


int main() {

	Card C1[100], C2[100];
	int N;
	char ch;

	std::cin >> N;
	for(int i=0; i<N; i++){
		std::cin >> C1[i].suit >> C1[i].value;
	}


	for(int i=0; i<N; i++) C2[i] = C1[i];


	bubbleSort(C1, N);
	selectionSort(C2,N);


	print(C1,N);
	std::cout << "Stable" << std::endl;
	print(C2,N);
	if(isStable(C1, C2, N)){
		std::cout << "Stable" << std::endl;
	} else {
		std::cout << "Not stable" << std::endl;
	}

	return 0;
}

