#include <stdio.h>
#include <math.h>

int main(void) {
    const double g = 9.8;
    const double u = 0.0;
    const double floor_height = 3.0;

    printf("Floor\tDistance(m)\tTime(s)\n");
    for (int floor = 1; floor <= 10; floor++) {
        double s = floor * floor_height;
        double t = (-u + sqrt(u * u + 2 * g * s)) / g;
        printf("%d\t%.2f\t\t%.3f\n", floor, s, t);
    }

    return 0;
}

/* Sample output begins:
   Floor   Distance(m)   Time(s)
   1       3.00          0.782
   2       6.00          1.106
   ...
   10      30.00         2.474 */
