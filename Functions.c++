#include <iostream>
#include <cstdio>
using namespace std;

// The usage of nested std::max (#algorithm) calls would've worked better here. Takes up less space. 

int max_of_four(int a, int b, int c, int d) {
    int greatestInt = a;
    int numArray[4] = {a,b,c,d};
    for (int i = 0; i <= 4; i++) {
        if (numArray[i] > greatestInt) {
            greatestInt = numArray[i];
        }
    }
    return greatestInt;
}

int main() {
    int a, b, c, d;
    scanf_s("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}