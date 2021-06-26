#include<iostream>
#include<math.h>
using std::endl;
using std::cout;

int max(int a, int b){
    if(a>b)
        return a;
    return b;
}
int main() {
    int arr[] = {3, -1, 5, -6, 1};
    int best_sum = INT32_MIN;
    int current_sum = 0;
    for(int i = 0 ; i < 5; i++) {
        current_sum = best_sum + arr[i];
        best_sum = max(current_sum, best_sum);
        best_sum = max(best_sum, current_sum);
    }
    printf("%d",best_sum);
}