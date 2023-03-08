#include <stdio.h>

// Définition de la structure COMPLEXE
typedef struct {
    float real;
    float img;
} CMPLX;

void DefineCmplx(CMPLX* z) {
    printf("Real Number: ");
    scanf("%f", &(z->real));
    printf("Imaginary Number : ");
    scanf("%f", &(z->img));
}

CMPLX SumComplx(CMPLX z1, CMPLX z2) {
    CMPLX res;
    res.real = z1.real + z2.real;
    res.img = z1.img + z2.img;
    return res;
}

CMPLX ProdCmplx(CMPLX z1, CMPLX z2) {
    CMPLX res;
    res.real = z1.real * z2.real - z1.img * z2.img;
    res.img = z1.real * z2.img + z1.img * z2.real;
    return res;
}

int main() {
    CMPLX z1, z2;
    printf("First Complex Number:\n");
    DefineCmplx(&z1);
    printf("Second complex Number :\n");
    DefineCmplx(&z2);

    // Calcul et affichage des résultats
    CMPLX z3 = SumComplx(SumComplx(z1, z2), z2);
    printf("z3 = %.2f + %.2fi\n", z3.real, z3.img);

    CMPLX z4 = SumComplx(ProdCmplx(z2, z2), ProdCmplx(SumComplx(z1, z2), z1));
    printf("z4 = %.2f + %.2fi\n", z4.real, z4.img);

    return 0;
}