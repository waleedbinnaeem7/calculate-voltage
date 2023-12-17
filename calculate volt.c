#include <stdio.h>

float to_vol(float c, float r) {

    float v = c * r;
    return v;
}

int main() {
    float c, r;

 
    printf("Input Current (in Amperes): ");
    scanf("%f", &c);

 
    printf("Input resistance  (in Ohms): ");
    scanf("%f", &r);

    float v = to_vol(c, r);
    printf("v (V) = %.2f Volts\n", v);

    return 0;
}
