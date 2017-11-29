#include "Qsort.h"
#include <iostream>

using namespace std;

void QuickSort (int *array, int l, int r){

    int x = array[(l+r)/2], i(l), j(r);

    while (i < j){
        while (array[i] < x) i++;
        while (array[j] > x) j--;
        if (i <= j){
            swap(array[i], array[j]);
            i++; j--;
        }
    }
    if (l<j) QuickSort(array,l,j);
    if (r>i) QuickSort(array,i,r);
}

//
// Created by dima on 29.11.17.
//

