#include <stdio.h>

int MOTOR_CAPACITY = 12;

int main() {
    int motorCount, totalPackageWeight;
    printf ("How many motors are carrying the packages?\n");
    scanf ("%d", &motorCount);
    /// Hvor mange motorer der er til at bære pakkerne. Outputtet er printf og scanf tager svaret ind.

    printf ("How many kg of packages do we expect?\n");
    scanf ("%d", &totalPackageWeight);
    /// Hvor mange kg pakkerne vi forventer, vejer. Outputtet er printf og scanf tager svaret ind.

    if (totalPackageWeight<=motorCount*MOTOR_CAPACITY) {
        printf ("Yes! The conveyor belt can carry the packages.\n");

        } else { 
            printf("No. The conveyor belt cannot carry the packages.\n");
        }
    /// Linjen der tager inputtet, sætter det op mod hinanden og laver forskellige outputs alt efter inputtet.
}
