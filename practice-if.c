#include<stdio.h>
#include<conio.h> 
#include<math.h> 
int main () {
    //1
    int points1, points2; 
    float nrr1, nrr2; 
    printf("Enter the points : "); 
    scanf("%d %d", &points1, &points2); 
    if (points1 == points2) {
        printf("Enter the Net Run Rate : "); 
        scanf("%f %f", &nrr1, &nrr2); 
        if(nrr1 > nrr2){
            printf("The Team 1 is Higher."); 
        }
        else { 
            printf("The Team 2 is Higher."); 
        }
    }
    else if (points1 > points2) {
        printf("The Team 1 is Higher."); 
    }
    else {
        printf("The Team 2 is Higher"); 
    }
    return 0 ; 

    //2
    int num; 
    printf("Enter the number : "); 
    scanf("%d", &num); 
    if(num == 1){
        printf("!"); 
    }
    else if (num ==2){
        printf("@"); 
    }
    else if (num ==3){
        printf("#"); 
    }
    else if (num ==4){
        printf("$"); 
    }
    else if (num ==5){
        printf("%%"); 
    }
    else if (num ==6){
        printf("^"); 
    }
    else if (num ==7){
        printf("&"); 
    }
    else if (num ==8){
        printf("*"); 
    }
    else if (num ==9){
        printf("("); 
    }
    else if (num ==0){
        printf(")"); 
    }
    return 0; 

    //3 
    int month_num; 
    printf("Enter the month number : "); 
    scanf("%d", &month_num); 
    if (month_num >12){
        printf("Envalid count of the number of month. "); 
    }
    else if (month_num == 1||month_num == 3||month_num == 5||month_num == 7
    ||month_num == 8||month_num == 10||month_num == 12) {
        printf("This months has 31 days. "); 
    }
    else if(month_num ==2) {
        printf("This month has 28 days. "); 
    }
    else {
        printf("this month has 30 days. "); 
    }
    return 0; 
    //4
    int ang1,ang2, ang3; 
    printf("Enter the angles : "); 
    scanf("%d %d %d", &ang1,&ang2,&ang3); 
    if (ang1 + ang2 + ang3 == 180){
        printf("The triangle is Valid. "); 

    }
    else { 
        printf("The triangle is not Valid. "); 
    }
    return 0 ; 
}
