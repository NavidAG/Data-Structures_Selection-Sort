// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#include "../src/SelectionSort.h"
#include <iostream>

using namespace std;

int main(){
	int		i, n = 10;
	ISort<int>*	sorter;
	int		*A;

	sorter = new SelectionSort<int>();
	A = new int[n];

	for (i = 0; i < n; i++)
		A[i] = rand();

	cout << "Initial array:\n";
	for (i = 0; i < n; i++){
		cout << A[i] << " , ";
	}

	sorter->Sort(A, n);

	cout << "\n\nSorted array:\n";
	for (i = 0; i < n; i++){
		cout << A[i] << " , ";
	}

	delete[] A;
	delete sorter;

	int dummy;
	cin >> dummy;
	return 0;
}
