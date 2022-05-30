#include <stdio.h>

//function for finding voltage where V = I*R
int Voltage(int I, int R) {
    return I * R;
}

//function for finding Current where I = V/R
int Current(int V, int R) {
    return V / R;
}

//function for finding Resistance where R = V/I
int Resistance(int V, int I) {
    return V / I;
}

int main(){

    //initialising variables
    int choice = 0; //choice variable
    int I; //current variable
    int R; //Resistance variable
    int V; //Voltage variable


    //Menu
    printf("Choose: \n");
    printf("1. Voltage \n");
    printf("2. Current \n");
    printf("3. Resistance \n");
    printf("4. End/Quit \n");

    printf("\nYour choice is: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("\nChoose Current: ");
            scanf("%d", &I);
            printf("\nChoose Resistance: ");
            scanf("%d", &R);

            printf("Voltage = %d Volts\n", Voltage(I, R) );

        break;
    
        case 2:
            printf("\nChoose Voltage: ");
            scanf("%d", &V);
            printf("\nChoose Resistance: ");
            scanf("%d", &R);
              
            printf("Current = %d Amps\n", Current(V, R) );
        break;
    
        case 3:
            printf("\nChoose Voltage: ");
            scanf("%d", &V);
            printf("\nChoose Current: ");
            scanf("%d", &I);

            printf("Resistance = %d Ohms\n", Resistance(V, I) );
        break;

        case 4:
            printf("Thank you for your time!");
        break;  

        default: printf("Sorry, that is not an option.");
    
}

return 0;

}