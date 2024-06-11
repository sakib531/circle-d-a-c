#include<stdio.h>

float diameter (float n) {

    return 2*n;

}

float circumference (float n) {

    return 2*3.1416*n;

}

float area (float n) {

    return 3.1416*n*n;

}

int main() {
    float n;
    printf(" input the value ");
    scanf("%f",&n);
    printf("%f\n",diameter(n));
    printf("%f\n",circumference(n));
    printf("%f\n",area(n));
    return 0;
}

