#include "sortIntro.h"

void introspectiveSort(vector<int>& v){
    int depthLimit = 2*int(log(double(v.size())));
    introsortUtil(v,0,v.size()-1,depthLimit);
}

void introsortUtil(vector<int>&v, int begin, int end,int depthLimit){
    int n = end-begin;
     
    if(n <= 16){
        insertionSort(v);
        return;
    }
    if(depthLimit == 0){
        heapSort(v);
        return;
    }else{
        int p = partition(v,begin,end);
        introsortUtil(v,begin,p-1,depthLimit-1);
        introsortUtil(v,p+1,end,depthLimit-1);
    }
}

