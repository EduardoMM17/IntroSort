#include "sortIntro.h"

//b

void introspectiveSort(vector<int>& v){
    int depthLimit = 2*int(log(double(v.size())));
    introsortUtil(v,0,v.size()-1,depthLimit);
}

void introsortUtil(vector<int>&v, int begin, int end,int depthLimit){
    int n = end-begin;
     
    if(n > 16){
        if(depthLimit ==0){
            heapSort(v);
            return;
        }
        int pivot = findPivot(v,begin,((end-begin)/2)-1,end);
        swap(v[pivot],v[end]);
        int p = partition(v,begin,end);
        introsortUtil(v,begin,p-1,depthLimit-1);
        introsortUtil(v,p+1,end,depthLimit-1);
    }else{
        insertionSort(v);
        return;
    }
}

int findPivot(vector<int>&v, int a, int b, int c){
    int A = v[a];
    int B = v[b];
    int C = v[c];

    if(A <= B && B <=C){
        return b;
    }
    if(C <= B && B <= A){
        return b;
    }
    if(B <= A && A <= C){
        return a;
    }
    if(C <= A && A <= B){
        return a;
    }
    if(B <= C && C <= A){
        return c;
    }
    if(A <= C && C <= B){
        return c;
    }
}
