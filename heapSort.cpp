#include "heapSort.h"

void maxHeapify(vector<int>& v, int n, int i){
    int largest;
    int l = (i*2)+1;
    int r = (i*2)+2;
    if( l < n && v[l] > v[i]){
        largest = l;
    }else{
        largest = i;
    }
    if( r < n && v[r] > v[largest]){
        largest = r;
    }
    if(largest != i){
        swap(v[i],v[largest]);
        maxHeapify(v,n,largest);       
    }
}

void buildMaxHeap(vector<int>& v, int n){
    int i = (n/2)-1;
    while(i >= 0){
        maxHeapify(v,n,i);
        i--;
    }
}

void heapSort(vector<int>& v){
    int i = v.size()-1;
    buildMaxHeap(v,v.size());
    while(i > 0){
        swap(v[0],v[i]);
        maxHeapify(v,i,0);
        i--;
    }
}
