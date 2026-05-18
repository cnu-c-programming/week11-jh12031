#include <stdio.h>

typedef Point {
    int x;
    int y;
} Point;

int main() {
    Point p = {1,2};

    printf("%d %d\n. p.x, p.y");

    return 0;
}