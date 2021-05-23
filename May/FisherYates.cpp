#include<iostream>
#include<vector>
#include<algorithm>

int main(void) {
    std::vector<int> v = {1,2,3,4,5,6,7,8,9};
    
    for(int i = 0 ; i < v.size() -1; i++) {
        int j = i + rand()%(v.size()-i);
        std::swap(v[i], v[j]);
    }
    for(int a : v) {
        printf("%d ", a);
    }
    printf("\n");

    std::vector<int> selectedElements(5);
    std::copy_n(v.begin(), 5, selectedElements.begin());
    for(int a : selectedElements) {
        printf("%d ", a);
    }
    return 0;
}