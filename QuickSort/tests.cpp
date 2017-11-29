#include "Qsort.h"
#include <iostream>

bool test1(){
    srand(time(NULL));

    int array[SIZE_OF_ARRAY];


    for (int i=0;i<SIZE_OF_ARRAY;i++){
        array[i] = rand()%100;
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    QuickSort(array,0,SIZE_OF_ARRAY-1);
    for (int i=0;i<SIZE_OF_ARRAY;i++){
        for (int j=i;j<SIZE_OF_ARRAY;j++){
            if (array[i] > array[j]) return false;
        }
    }
    for (int i=0;i<SIZE_OF_ARRAY;i++) std::cout << array[i] << ' ';
    std::cout << std::endl << std::endl;
    return true;
}

bool test2(){
    srand(time(NULL));

    int array[SIZE_OF_ARRAY];


    for (int i=0;i<SIZE_OF_ARRAY;i++){
        array[i] = -5 + rand()%10;
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    QuickSort(array,0,SIZE_OF_ARRAY-1);
    for (int i=0;i<SIZE_OF_ARRAY;i++){
        for (int j=i;j<SIZE_OF_ARRAY;j++){
            if (array[i] > array[j]) return false;
        }
    }
    for (int i=0;i<SIZE_OF_ARRAY;i++) std::cout << array[i] << ' ';
    std::cout << std::endl << std::endl;
    return true;
}

bool test3(){

    int array[SIZE_OF_ARRAY];


    for (int i=0;i<SIZE_OF_ARRAY;i++){
        array[i] = 0;
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
    QuickSort(array,0,SIZE_OF_ARRAY-1);
    for (int i=0;i<SIZE_OF_ARRAY;i++){
        for (int j=i;j<SIZE_OF_ARRAY;j++){
            if (array[i] > array[j]) return false;
        }
    }
    for (int i=0;i<SIZE_OF_ARRAY;i++) std::cout << array[i] << ' ';
    std::cout << std::endl << std::endl;
    return true;
}


//
// Created by dima on 29.11.17.
//

