//WAP to show difference between Structure and Union.  
#include <stdio.h>

struct Student {
    int mrk;
    float prt;
    char grd;
};

union ExampleUnion {
    int mrk;
    float prt;
    char grd;
};

int main() {
    struct Student myStruct;
    union ExampleUnion myUnion;

    myStruct.mrk = 50;
    myStruct.prt = 62.5;
    myStruct.grd = 'A';
    printf("\nUnion values"); 
    myUnion.mrk = 50;
    printf("\nUnion mrk - %d", myUnion.mrk);

    myUnion.prt = 62.5;
    printf("\nUnion prt - %.2f", myUnion.prt);

    myUnion.grd = 'A';
    printf("\nUnion grd - %c", myUnion.grd);
    printf("\nSize of Union %zu bytes", sizeof(myUnion));

    printf("\n\nStructure values\n");
    printf("mrk - %d", myStruct.mrk);
    printf("\nprt - %.2f", myStruct.prt);
    printf("\ngrd - %c", myStruct.grd);
     printf("\nSize of Structure %zu bytes", sizeof(myStruct));

    return 0;
}

