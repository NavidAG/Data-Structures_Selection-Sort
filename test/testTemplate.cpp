// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#include "../src/SelectionSort.h"
//#include "TestSorter.h"
#include <iostream>
#include <time.h>

using namespace std;

int main(){
	int	i, res = 0, n = 10;

	ISort<double>*	sorter;
	sorter = new SelectionSort<double>();

	double	*A;
	A = new double[n];

	srand((unsigned int)time(NULL));
	for (i = 0; i < n; i++)
		A[i] = rand() / 1000.0;


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

	return res;
}
