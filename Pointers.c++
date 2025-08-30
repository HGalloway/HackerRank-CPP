#include <stdio.h>
#include <cstdlib>

int getSum(int *a, int *b) {
    return *a + *b;
}

// The abs (#cstdlib) would've worked better here.
int getDifference(int *a, int *b) {
    if (*a > *b) {
        return *a - *b;
    }
    else {
        return *b - *a;
    }
}

void update(int *a, int *b) {
    //Modify so that a is the sum of the two values, and b is the difference 
    int sum = getSum(a, b);
    *b = getDifference(a, b);
    *a = sum;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf_s("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
