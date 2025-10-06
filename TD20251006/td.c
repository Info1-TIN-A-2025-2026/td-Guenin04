#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char *argv[])
{
    // Declaration and initialisation of the variables
    unsigned char num_students = 23;
    unsigned char num_chairs = 32;
    short delta = num_students - num_chairs;
    bool sw1 = true;               // Lampe prof
    bool sw2 = true;               // Lampe salle
    char state = sw1 + (sw2 << 4); // Save the state of the switches in a single variable
    printf("Number of students = %u \nNumber of chairs = %u\n", num_students, num_chairs);
    printf("Δ = %hd\n", delta);
    printf("State of switch 1 = %d\nState of switch 2 = %d\n", sw1, sw2);
    printf("State = %X\n", state);

    char a = 'A';
    printf("a = %c\n", a);
    printf("a = %d\n", a);
    return 0;
}