// Write a modular C program to create a structure Flight with flight_number, 
// destination, and available_seats. Create an array of 4 flights.
//  Write a program that takes a destination name from the user and checks if a flight is available to that location, 
// displaying the flight number if found.
// Function prototype:
// void readFlights(int n, Flight_t f[]); 
// void searchByDestination(int n, Flight_t f[], char searchDest[]);


#include <stdio.h>
#include<string.h>
typedef struct {
    int flight_number;
    char destination[50];
    int available_seats;
}Flight_t;
void readFlights(int n, Flight_t f[]); 
void searchByDestination(int n, Flight_t f[], char searchDest[]);
int main() {
    int n=4;
    Flight_t f[4]= {
        {1, "Bangalore", 20},
        {2, "Mumbai", 30}, 
        {3, "pune", 10}, 
        {4, "Dehli", 25},
    };
    
    char searchDest[50];
    printf("Enter the Flight destination name: ");
    scanf("%s", searchDest);
    readFlights(n, f);
    searchByDestination(n, f, searchDest);

    return 0;
}

void readFlights(int n, Flight_t f[])
{
      
}

void searchByDestination(int n, Flight_t f[], char searchDest[])
{
    int found = 0;
    for(int i=0 ; i<n ; i++){
        if(strcmp(f[i].destination, searchDest)==0){
            printf("\nFligth found\n");
            printf("Fligth Number: %d\n", f[i].flight_number);
            printf("Available seats: %d\n", f[i].available_seats);
            found = 1;
        }
    }

    if(found==0)
    {
        printf("\nNo flight available to %s\n", searchDest);
    }
}