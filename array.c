 #include<stdio.h> 
 //1
int main() {
    int temp[7]; 
    int sum=0; float avg; 
    printf("Enter the temperatures of last 7 days\n"); 
    for (int i=0; i<7; i++) {
        printf("Enter the day %d temperature", i+1); 
        scanf("%d", &temp[i]); 
    }
    for (int i=0; i<7; i++) {
         sum+= temp[i]; 
    }
    avg= (float)sum/7; 
    printf("The average temperature is %0.2f", avg); 
    return 0; 
}

//2 
int main() {
    int n, sum=0, count=0; 
    printf("Enter how many ages do you input.\n"); 
    scanf("%d", &n); 
    int age[n]; 
    printf("Enter the ages : "); 
    for (int i=0; i<n; i++) {
        scanf("%d", &age[i]); 
    }
    int avg; 
    for(int i=0; i<n; i++) {
        sum+= age[i]; 
    }
    avg = sum/n; 
    printf("The average age is %d\n", avg); 
    for(int i=0; i<n; i++){
        if(age[i]> avg) {
            count++; 
        }
    }

    count>0?printf("There are %d person who are older than average age", count): 
    printf("There are no person who are older than average age"); 
    return 0; 
}
//3
int main() {
    int n, sum=0, count=0; 
    printf("Enter how many ages do you input.\n"); 
    scanf("%d", &n); 
    int age[n]; 
    printf("Enter the ages : "); 
    for (int i=0; i<n; i++) {
        scanf("%d", &age[i]); 
    }
    for(int i=0; i<n; i++){
        if(age[i]>= 13 && age[i]<=19) {
            count++; 
        }
    }

    count>0?printf("There are %d person who are teenagers", count): 
    printf("There are no person who are teenagers"); 
    return 0; 
}

//4
int main() {
    int temp[7]; 
    int count=0;  
    printf("Enter the temperatures of last 7 days\n"); 
    for (int i=0; i<7; i++) {
        printf("Enter the day %d temperature", i+1); 
        scanf("%d", &temp[i]); 
    }
    for (int i=0; i<7; i++) {
        if(temp[i+1]> temp[i]) {
            count++; 
        }
    }
    printf("There are only %d days where temperature increased from immediate temps", count); 
    return 0; 
}
//5
int main() {
    int n, count=0; 
    printf("number of students\n"); 
    scanf("%d", &n); 
    int mark[n]; 
    for (int i=0; i<n; i++) {
        printf("Enter the mark of number %d studnet ", i+1); 
        scanf("%d", &mark[i]); 
    }
    for(int i=0; i<n; i++) {
        if(mark[i]==30) {
            count++; 
        }
    }

    count>0?printf("Total %d students got full marks", count): printf("There are no students with full marks"); 
    return 0; 
}
//6


int main() {
    int n, marks, A = 0,B = 0, C = 0, D = 0, count = 0;
    char grade;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks);

        if (marks >= 90) {A++;}
        else if (marks >= 80) {B++;}
        else if (marks >= 70) {C++;}
        else if (marks >= 60) {D++;}
    }

    if (A > count) { count = A; grade = 'A'; }
    if (B > count) { count = B; grade = 'B'; }
    if (C > count) { count = C; grade = 'C'; }
    if (D > count) { count = D; grade = 'D'; }

    printf("The grade achieved by most students is: %c\n", grade);

    return 0;
}

//7
int main() {
    int n, x, y, q1 = 0, q2 = 0, q3 = 0, q4 = 0;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    int xquad[n], yquad[n];

    for (int i = 0; i < n; i++) {
        printf("Enter x and y coordinates for point %d: ", i + 1);
        scanf("%d %d", &xquad[i], &yquad[i]);

        x = xValues[i];
        y = yValues[i];

        if (x > 0 && y > 0) q1++;
        else if (x < 0 && y > 0) q2++;
        else if (x < 0 && y < 0) q3++;
        else if (x > 0 && y < 0) q4++;
    }

    printf("Quadrant 1: %d points\n", q1);
    printf("Quadrant 2: %d points\n", q2);
    printf("Quadrant 3: %d points\n", q3);
    printf("Quadrant 4: %d points\n", q4);

    return 0;
}
//8
int main() {
        int temp[7]; 
    int count=0;  
    printf("Enter the temperatures of last 7 days\n"); 
    for (int i=0; i<7; i++) {
        printf("Enter the day %d temperature", i+1); 
        scanf("%d", &temp[i]);

}
    for (int i=0; i<7; i++) {
        int hightemp = temp[0]; 
        if(temp[i]> temp[0]){
            count++; 
        }
    }
    printf("We found %d days where the temperature was highest", count); 
    return 0; 
}
//9
int main() {
     int n;
    int maxOdd = -1, maxEven = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (arr[i] > maxEven) maxEven = arr[i];
        } else {
            if (arr[i] > maxOdd) maxOdd = arr[i];
        }
    }

    if (maxOdd != -1) 
        printf("Highest odd value: %d\n", maxOdd);
    else
        printf("No odd values found.\n");

    if (maxEven != -1) 
        printf("Highest even value: %d\n", maxEven);
    else
        printf("No even values found.\n");
}

//10
int main () {
    int n;
    float sum = 0, mean, variance = 0, std_deviation;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    float marks[n];

    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    mean = sum / n;

    for (int i = 0; i < n; i++) {
        variance += pow(marks[i] - mean, 2);
    }

    variance /= n;
    std_deviation = sqrt(variance);

    printf("Average: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_deviation);
}




//11
int main() {
    int n, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] % arr[i - 1] == 0) count++;
    }

    printf("Numbers divisible by their immediate previous element: %d\n", count);
}

