#include <stdio.h>
#include <stdlib.h>
#define SEATS 10
//function to hold integer values for first and economy class, I left none just to eliminate the 0'th value
enum clas{NONE, FIRST, ECONOMY};
int main(void)
{//Travel class contains values for first and economy class.
    enum clas travelclass;
    static seats[SEATS]={0};//initializing the array to 0

    printf("Welcome to Flux airlines. What class would you like to travel with?\n 1: for \"first\"- $2000\n 2: for \"economy\"-$1000\n\n");
int i=0;
while(i<SEATS){//Control structure to let us not out of the array bounds which could lead to a buffer overflow.
    scanf("%u", &travelclass);//prompting the user to let the system know if he would like the first or economy class.

 if(travelclass != 1 && travelclass !=2){
    puts("Invalid input.");
 }
 if(seats[4]==1 && seats[9]==0 && travelclass == FIRST){
     puts("First class is full, maybe try second class.");
}else if(seats[9]==1 && seats[4]==0 && travelclass == ECONOMY){
     puts("Economy class is full, maybe try first class.");
}else if(seats[9] && seats[4] == 1){
    puts("We are out of seats, the next flight will be in 3 hours. ");
    break;
}

    if(travelclass == FIRST){
       for(int j=0; j<5; ++j){
        if(seats[j]==0){
            seats[j]=1;
        printf("You've got first class seat %d\n", j+1);
        break;
        }
       }
    }else if(travelclass == ECONOMY){
        for(int s=5; s<SEATS; ++s){
            if(seats[s]==0){
                seats[s]=1;
                printf("You've got economy class seat %d\n", s+1);
                break;
            }
        }
    }
}
}
