#include "quickSort.h"

int partition(vector<int>& v, int p, int r){
    int x = v[r];
    int i = p-1;
    for(int j = p; j <= r-1;j++){
        if(v[j] < x){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[r]);
    return i+1;
}

void quickSort(vector<int>& v, int p, int r){
    if(p < r){
        int q = partition(v,p,r);
        quickSort(v,p,q-1);
        quickSort(v,q+1,r);
    }
}
