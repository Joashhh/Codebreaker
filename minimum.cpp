#include <iostream>
#include <algorithm>
using namespace std;
int findMin(int N, int A[]){
    int min = 2000000001;
    for(int i=0; i<N; i++){
        if(A[i] < min){
            min = A[i];
        }
    }
    return min;
}
