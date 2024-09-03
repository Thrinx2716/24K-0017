#include <stdio.h>

int main() {
    // Coordinates of the points
    int x1 = 5, y1 = 4;
    int x2 = 3, y2 = 2;
    
    // Calculate slope
    float slope = (float)(y2 - y1) / (x2 - x1);
    
    // Print result
    printf("The slope of the line passing through the points (5, 4) and (3, 2) is: %.3f\n", slope);
    
    return 0;
}
