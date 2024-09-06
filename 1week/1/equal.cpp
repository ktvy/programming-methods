#include <iostream>
#include <limits.h>

bool IsEqual(int a, int b, int c);

int main(void){
    int a = INT_MIN;
    int b = -1;
    int c = INT_MAX;
    
    bool result = IsEqual(a,b,c);
    if (result) {
        std::cout << "Yes!" << std::endl;
    } else {
        std::cout << "No!" << std::endl;
    }

    return 0;
}

bool IsEqual(int a, int b, int c){
    if ((a > 0 && b > 0 && (a + b) <= 0) || (a < 0 && b < 0 && (a + b) >= 0)) return false;
    return a + b == c;
}