#include "quickSort.h"
#include "insertionSort.h"
#include "heapSort.h"
#include "sortIntro.h"



void printVector(vector<int>);
void callQuick(vector<int>);
void callInsertion(vector<int>);
void callHeap(vector<int>);
void callIntro(vector<int>);

int main(){
    vector<int> v;  
    int number;
    while(cin >> number){
        v.push_back(number);
    }
    cout << "----ORIGINAL-----" << endl;
    printVector(v);
    cout << endl;
    cout << "----QUICK-----" << endl;
    callQuick(v);
    cout << endl;
    cout << "----INSERTION-----" << endl;
    callInsertion(v);
    cout << endl;
    cout << "----HEAP-----" << endl;
    callHeap(v);
    cout << endl;
    cout << "----INTRO-----" << endl;
    callIntro(v);

    
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

void callIntro(vector<int> v){
    introspectiveSort(v); 
    printVector(v);
}
