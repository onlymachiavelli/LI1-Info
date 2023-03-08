#include <stdio.h>

// Definition of the COMPLEX structure
typedef struct {
    float real; // real part of the complex number
    float img;  // imaginary part of the complex number
} CMPLX;

// Function to define a complex number
void DefineCmplx(CMPLX* z) {
    printf("Real Number: ");
    scanf("%f", &(z->real));
    getchar(); // clear the input buffer

    printf("Imaginary Number : ");
    scanf("%f", &(z->img));
    getchar(); // clear the input buffer
}

// Function to add two complex numbers
CMPLX SumComplx(CMPLX z1, CMPLX z2) {
    CMPLX res;
    res.real = z1.real + z2.real;
    res.img = z1.img + z2.img;
    return res;
}

// Function to multiply two complex numbers
CMPLX ProdCmplx(CMPLX z1, CMPLX z2) {
    CMPLX res;
    res.real = z1.real * z2.real - z1.img * z2.img;
    res.img = z1.real * z2.img + z1.img * z2.real;
    return res;
}

int main() {
    // Declaration of two complex numbers
    CMPLX z1, z2;

    printf("First Complex Number:\n");
    DefineCmplx(&z1);

    printf("Second complex Number :\n");
    DefineCmplx(&z2);

    // Calculation and printing of the sum of the two complex numbers
    CMPLX z3 = SumComplx(z1, z2);
    printf("Sum of the two complex numbers: %.2f + %.2fi\n", z3.real, z3.img);

    // Calculation and printing of the product of the two complex numbers
    CMPLX z4 = ProdCmplx(z1, z2);
    printf("Product of the two complex numbers: %.2f + %.2fi\n", z4.real, z4.img);

    return 0;
}


D:\UNIVERSITY\University-Codes\SEM2\Atelier\TP4>gcc ex5.c -o ex && ex.exe
First Complex Number:
Real Number: 2
Imaginary Number : 3i
Second complex Number :
Real Number: 8
Imaginary Number : 6i
Sum of the two complex numbers: 10.00 + 9.00i
Product of the two complex numbers: -2.00 + 36.00i

D:\UNIVERSITY\University-Codes\SEM2\Atelier\TP4>