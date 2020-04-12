#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(NULL));
    for(int i = 0; i < 6000; i++){
        cout << rand()%300+1 << endl; 
    }
    return 0;
}
