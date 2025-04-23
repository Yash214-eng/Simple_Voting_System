#include <stdio.h>
#include <conio.h>

int main() {
    int bjp = 0, inc = 0, aap = 0;
    int choice;

    while (1) {
        printf("\n----- Voting System -----\n");
        printf("1. Vote for BJP\n");
        printf("2. Vote for INC\n");
        printf("3. Vote for AAP\n");
        printf("4. View Results\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                bjp++;
                printf("You voted for BJP.\n");
                break;
            case 2:
                inc++;
                printf("You voted for INC.\n");
                break;
            case 3:
                aap++;
                printf("You voted for AAP.\n");
                break;
            case 4:
                printf("\n----- Voting Results -----\n");
                printf("BJP: %d votes\n", bjp);
                printf("INC: %d votes\n", inc);
                printf("AAP: %d votes\n", aap);

                // Determine the winning party
                if (bjp > inc && bjp > aap) {
                    printf("The winning party is BJP.\n");
                } else if (inc > bjp && inc > aap) {
                    printf("The winning party is INC.\n");
                } else if (aap > bjp && aap > inc) {
                    printf("The winning party is AAP.\n");
                } else if (bjp == inc && bjp > aap) {
                    printf("It's a tie between BJP and INC.\n");
                } else if (bjp == aap && bjp > inc) {
                    printf("It's a tie between BJP and AAP.\n");
                } else if (inc == aap && inc > bjp) {
                    printf("It's a tie between INC and AAP.\n");
                } else {
                    printf("It's a three-way tie between BJP, INC, and AAP.\n");
                }
                break;
            case 5:
                printf("Exiting the system. Thank you for voting!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

