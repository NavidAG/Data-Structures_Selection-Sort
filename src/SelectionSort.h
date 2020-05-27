// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once
#include "ISort.h"
#include <iostream>

using namespace std;

template <class T>
class SelectionSort: public ISort<T>{
public:
	virtual void Sort (T* A, int n){
        int min, j=0;
        while(j!=n-1)
        {
            min = j;
            for(int i=j+1; i<n; i++){
                if(A[i]<A[min]){
                    min = i;
                }
            }
            if(A[min] != A[j] && min != j){
		swap(A[min], A[j]);
	    }
            j++;
        }
	}
};
