#include <iostream>
using namespace std;

int linear(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
        return -1;
    }
}

int binary(int arr[], int n, int key){
    int low = 0, high = n-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            return 
        }
    }

}
/*
 [1, 2, 3, 10]=  3
/*

search, sort, list and array, trees, bst tress, avl trees, rb trees, heaps, graphs.

/