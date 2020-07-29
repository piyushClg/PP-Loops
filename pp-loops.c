/******************************************************************************

1.	Write C Program to find factorial of a given number
2.	Write C Program to find sum of first n natural numbers
3.	Write a program in C to read 10 numbers from keyboard and find their sum and average.
4.	Write a program in C to display the cube of the number upto given an integer.
5.	Write a program in C to display the multiplication table of a given integer. 
    Input the number (Table to be calculated): 12
    Expected Output:
    12 X 1 = 12
    ...
    ...
    12 X 10 = 120
6.	Write a program in C to display the multiplication table vertically from 1 to n. 
7.	Write a program in C to display the pattern like right angle triangle using an asterisk.  
    The pattern like:
    *
    **
    ***
    ****
8.	Write a program in C to display the pattern like right angle triangle with a number. 
    1
    12
    123
    1234
9.	Write a program in C to make such a pattern like right angle triangle with a number which will repeat a number in a row.  
    The pattern like:
     1
     22
     333
     4444
10.	Write a program in C to make such a pattern like a pyramid with numbers increased by 1. 
       1 
      2 3 
     4 5 6 
    7 8 9 10 
*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, num, i, j, sum=0, arr1[100], k=1, rep;
    float avg=0.0;
    long fac = 1;
    printf("\t***************************\n");
    printf("\t*Practice Problem - Loops*\n");
    printf("\t***************************\n");
    do{
        printf("\t\t    Menu\n");
        printf("1. Find factorial of a given number. \n");
        printf("2. Find sum of first n natural numbers. \n");
        printf("3. To read 10 numbers from keyboard and find their sum and average. \n");
        printf("4. To display the cube of the number upto given an integer. \n");
        printf("5. To display the multiplication table of a given integer.\n");
        printf("6. To display the multiplication table vertically from 1 to n.\n");
        printf("7. To display the pattern like right angle triangle using an asterisk.\n");
        printf("8. To display the pattern like right angle triangle with a number.\n");
        printf("9. To make such a pattern like right angle triangle with a number which will repeat a number in a row.\n");
        printf("10. To make such a pattern like a pyramid with numbers increased by 1.\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch(n){
            case 1:
                printf("\nPlease Enter any number to Find Factorial: ");
                scanf("%d", &num);
                for (i = 1; i <= num; i++){
                 fac = fac * i;
                }
                printf("Factorial of %d = %d\n", num, fac);
                break;
            
            case 2:
                printf("\nPlease Enter any natural number: ");
                scanf("%d", &num);
                for (i = 1; i <= num; i++){
                 sum += i;
                }
                printf("Sum of first %d natural numbers = %d\n", num, sum);
                break;
            
            case 3:
                sum = 0;
                printf("Enter 10 numbers: ");
                for(i=0; i<10; i++){
                    scanf("%d", &arr1[i]);
                    sum += arr1[i];
                }
                avg =(float) sum/10;
                printf("Sum of the given numbers is %d and average is %.2f", sum, avg);
                printf("\n");
                break;
            
            case 4:
                printf("\nPlease Enter any integer: ");
                scanf("%d", &num);
                for(i=1; i<=num; i++){
                    printf("Cube of %d is: %d", i, i*i*i);
                    printf("\n");
                }
                break;
            
            case 5:
                printf("\nPlease Enter any integer: ");
                scanf("%d", &num);
                for(i=1; i<=10; i++){
                    printf("%d X %d = %d\n", num, i, num*i);
                }
                break;
            
            case 6:
                printf("Input upto the table number starting from 1 : ");
                scanf("%d",&num);
                printf("Multiplication table from 1 to %d \n",num);
                for(i=1;i<=10;i++){
                    for(j=1;j<=num;j++){
                        if (j<=num-1)
                            printf("%dx%d = %d, ",j,i,i*j);
                        else
                	        printf("%dx%d = %d",j,i,i*j);
                    }
                    printf("\n");
                }
                break;
            
            case 7:
                printf("Enter the number of rows: ");
                scanf("%d", &num);
                for (i = 1; i <= num; ++i) {
                    for (j = 1; j <= i; ++j) {
                        printf("* ");
                    }
                printf("\n");
                }
                break;
            
            case 8:
                printf("Enter the number of rows: ");
                scanf("%d", &num);
                for (i = 1; i <= num; ++i) {
                    for (j = 1; j <= i; ++j) {
                        printf("%d ", j);
                    }
                printf("\n");
                }
                break;
            
            case 9:
                printf("Enter the number of rows: ");
                scanf("%d",&num);
                for(i = 1; i <= num; i++){
                    for(j = 1; j <= i; j++){
                        printf("%d",i);
                    }
                printf("\n");
                }
                break;
            
            case 10:
                printf("Enter number of rows: ");
                scanf("%d", &num);
                k = 1;
                for(i=1; i<=num; i++){
                    for(j=1; j<=i; j++, k++){
                        printf("%3d", k);
                    }
                    printf("\n");
                }
                break;
        }//End of switch
        printf("Do you want to enter more(1-yes, 2-no): ");
        scanf("%d", &rep);
    }while(rep == 1);
    return 0;
}
