#include "quickSort.h"
#include "insertionSort.h"
#include "heapSort.h"


void printVector(vector<int>);
void callQuick(vector<int>);
void callInsertion(vector<int>);
void callHeap(vector<int>);

int main(){
    vector<int> v = {19,9,5,12,8,7,4,21,2,6,11};  
    printVector(v);
    cout << endl;
    callQuick(v);
    cout << endl;
    callInsertion(v);
    cout << endl;
    callHeap(v);

    
    return 0;
}

void printVector(vector<int> v){
    for(auto it: v){
        cout << it << ' ';
    }
}

void callQuick(vector<int> v){
    quickSort(v,0,v.size()-1);
    printVector(v);
}

void callInsertion(vector<int> v){
    insertionSort(v);
    printVector(v);
}

void callHeap(vector<int> v){
    heapSort(v);
    printVector(v);
}
