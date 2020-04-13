#ifndef INTROSORT_SORTINTRO
#define INTROSORT_SORTINTRO
//c

#include "quickSort.h"
#include "insertionSort.h"
#include "heapSort.h"
#include "commonService.h"

void introspectiveSort(vector<int>&v);
void introsortUtil(vector<int>&v,int,int,int);
int findPivot(vector<int>&,int,int,int);






#endif
