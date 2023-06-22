#include <stdio.h>

int weight; 
int weightcalc();

int main(){
    printf("Enter your weight\n");
    scanf("%d", &weight);
    weightcalc(weight);
    return 0;
}

int weightcalc(int x){
    printf("Your weight was calculated to be %d, damn", x);
}