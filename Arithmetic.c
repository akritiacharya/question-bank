#include "functions.h"
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void main(){
    system ("color 30");
    int check2,check1,check3,run, loopValue=1, matrixA[10][10], matrixB[10][10], matrixC[10][10], i,space,j,k,p,c,r,col,sumMatrix=0, rows,count,count1;
    char s[50],arr[20], alphabetical[20][50], temp[20], str[20];
    COORD coord;
    coord.X = 20;
    coord.Y = 10;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    for (j = 0; j<5; j++){
            printf("Loading.. ");
    for(i=0; i<10; i++){
            Sleep(50);

        printf("|: ");
    }
    system("cls");
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
    }
    system("cls");
    while (loopValue==1){
            system("Color 07");

    printf("Enter corresponding S.N of the type of question (0 to exit):: \n");
    printf("1. Patterns \n2. Functions: \n3. Strings \n--> ");
    scanf("%d", &run);
    switch(run){
        case 1:
            system("Color 70");
            printf("PATTERN PROGRAMS: \n");
            printf("Enter the S.N of the respective program for Output:: ");
            printf("\n1: Right- Right Angled Numeric Triangle \n2: Floyd's Triangle \n3: Pascal's Triangle \n4: Gapped Triangle\n");
            printf("5: Numeric Isoceles Triangle\n6: Double sided Cone \n-->");
            scanf("%d", &check1);
            switch(check1){
                case 0:
                    loopValue = 0;
                    break;
                case 1:
                    printf("Enter number of rows: ");
                    scanf("%d", &r);
                    for (i=1; i<=r; ++i) {
                    for (j=1; j<=i; ++j)
                        { printf("%d ",j); }
                    printf("\n");
                    }
                    break;
                case 2:
                        k= 1;
                        printf("Enter number of rows: ");
                        scanf("%d", &rows);
                        for (i=1; i<=rows; i++) {
                            for (j=1; j<=i; ++j)
                            { printf("%d ", k);
                              ++k;
                            }
                            printf("\n");
                        }
                    break;
                case 3:
                    k=1;
                    printf("Enter number of rows: ");
                    scanf("%d", &rows);
                    for (i=0; i<rows; i++) {
                        for (space=1; space <= rows-i; space++)
                            printf("  ");
                        for (j=0; j<=i; j++) {
                            if (j==0 || i==0)
                                k = 1;
                            else
                                k=k*(i-j+1)/j;
                            printf("%4d", k);
                        }
                        printf("\n");
                    }
                    break;
                case 4:
                    for(i=1;i<=6;i++)
                    {
                        for(j=1;j<=11;j++)
                        {
                                  if(j<=7-i || j>=5+i)
                                  {
                                      printf("*");
                                  }
                                  else
                                      printf(" ");
                        }
                        printf("\n");
                        }
                    break;
                case 5:
                    k = 0; count =0; count1 =0;
                    printf("Enter number of rows: ");
                    scanf("%d", &rows);
                    for (i=1; i<=rows; ++i) {
                        for (space=1; space<=rows-i; ++space) {
                          printf("  ");
                          ++count;
                        }
                        while (k!=2*i-1) {
                            if (count <= rows-1)
                            { printf("%d ", i+k);
                              ++count;
                            }
                            else {
                              ++count1;
                              printf("%d ", (i+k-2*count1));
                            }
                            ++k;
                        }
                        count1=count=k=0;
                        printf("\n");
                    }
                    break;
                case 6:
                    k=0;
                    printf("Enter no of rows: ");
                    scanf("%d",&r);

                    c=r;
                    int n=(r+1)/2;

                    for(i=1;i<=r;i++)
                    {
                     if (r%2==0){
                            if(i<=n) k++;
                           if (i>n+1) k--;
                     }
                     else{
                      (i<=n)?k++:k--;
                     }
                      p=1;
                      for(j=1;j<=c;j++)
                        {
                            if(j>=(n+1-k)&&j<=(n-1+k))
                            {
                                printf("%d",p);
                             (j<n)?p++:p--;
                            }
                            else{
                                printf(" ");
                            }
                        }
                        printf("\n");
                    }
                    break;

            }
            break;
        case 2:
            system("Color 60");
            printf("FUNCTIONAL PROGRAMS: \n");
             printf("Below are the questions available! Choose the ones you want to check solution of (Enter 0 to exit)::\n");
            printf("1: Sum of two numbers!\n2: Subtraction of two numbers\n3: Multiplication of two numbers\n4: Division of two numbers");
            printf("\n5: Find value of a certain position in Fibonacci Series (r)\n6: Check whether a number is prime or not");
            printf("\n7: Check whether a number is strong or not (r)\n8: Factorial of a number (r)\n9: Real roots of a quadratic Eqn\n10. Multiplication of two Matrices\n:--->  ");
            scanf("%d", &check2);
            switch(check2){
            case 0:
                loopValue=0;
                break;
            case 1:
                printf("Enter the two numbers in order: ");
                scanf("%d%d", &a,&b);
                printf("Sum is : %d",sum(a,b));
                break;
            case 2:
                printf("Enter the two numbers in order: ");
                scanf("%d%d", &a,&b);
                printf("Difference is: %d",difference(a,b));
                break;
            case 3:
                printf("Enter the two numbers in order: ");
                scanf("%d%d", &a,&b);
                printf("The Multiplication is: %d",multiply(a,b));
            break;
            case 4:
                printf("Enter the two numbers in order: ");
                scanf("%d%d", &a,&b);
                printf("Division is: %d",divide(a,b));
                break;
            case 5:
                printf("Enter the position of the term in the series that you want :: ");
                scanf("%d", &a);
                printf("The number in %d position of the series is : %d ",a, fibo(a));
                break;
            case 6:
                printf("Enter the number you want to check:: ");
                scanf("%d", &a);
                if (a==1)
                    printf("Neither Prime nor Composite!!!");
                else{
                if (isPrime(a)==0)
                    printf("The number %d is Not Prime!", a);
                else
                    printf("The number %d is Prime!", a);
                break;

                }
            case 7:
                printf("Enter the number you want to check! ");
                scanf("%d", &a);
                if (a==Strong(a))
                    printf("The number %d is a Strong number!!", a);
                else
                    printf("The number %d isn't a STRONG Number as the digit's factorial sum is %d !", a, Strong(a));
            break;
            case 8:
                printf("Enter the number to calculate Factorial of (one digit numbers) :: ");
                scanf("%d", &a);
                printf("The Factorial of %d is : %d", a, factorial(a));
                break;
            case 9:
                printf("Enter coefficients of a,b,c respectively:: ");
                scanf("%d%d%d", &a,&b,&c);
                if (rootQuadratic(a,b,c)==1){
                    int second = sqrt(b*b - (4*a*c));
                    int root1= (-b+second)/(2*a);
                    int root2 = ((-b-second)/(2*a));
                    printf("The two roots are %d and %d !", root1,root2);
                }
                else
                    printf("Roots are imaginary");
                break;

                case 10:
            printf("Enter the number of rows and columns that you want in your matrices:: ");
            scanf("%d%d", &r,&col);
            printf("Elements for A: ");

            for (i = 0; i<r; i++){
                for (j=0; j<col; j++){
                    scanf("%d", &matrixA[i][j]);
                }
            }
            printf("Elements for B: ");

            for (i = 0; i<r; i++){
                for (j=0; j<col; j++){
                    scanf("%d", &matrixB[i][j]);
                }
            }
            printf("C:\n");

            for (i = 0; i<r; i++){
                for (j=0; j<col; j++){
                    for(k = 0; k<col; k++){
                        sumMatrix = sumMatrix + matrixA[i][k]*matrixB[k][j];
                        matrixC[i][j] = sumMatrix;
                    }
                    printf("%d  ", matrixC[i][j]);
                    sumMatrix = 0;

                }
                printf("\n");

            }
            break;
            }


            break;
                case 3:
                    system("color F0");
                    printf("STRING RELATED PROGRAMS:: \n");
                    printf("Enter the S.N of corresponding required solution: \n");
                    printf("1. Reverse of a String\n2. Length of a String\n3. Alphabetical sorting of given words\n4. Count Vowels\n--> ");
                    scanf("%d", &check3);
                    switch(check3){
                    case 0:
                        loopValue=0;
                        break;
                    case 1:
                        printf(" Enter a string:: ");
                          scanf("%s", s);
                          for(j=0;s[j] != '\0';){
                            j++;
                          }
                          for(i=0;i<j-1;i++)
                          {
                              a = s[i];
                              s[i] = s[j-1];
                              s[j-1] = a;
                              j--;
                          }

                          printf("Reverse is %s",s);

                          break;
                    case 2:
                           printf(" Enter a string:: ");
                          scanf("%s", s);
                          for(j=0;s[j] != '\0';){
                            j++;
                          }
                          printf("The String has %d number(s) of letters! ", j);
                          break;
                    case 3:
                        printf("Enter the number of words you want:: ");
                        scanf("%d", &p);
                        for (i = 0; i<p; i++){
                            printf("Enter a word: ");
                            scanf("%s", alphabetical[i]);
                        }
                        for (i = 0; i<p-1; i++){
                                for(j = i+1; j<p; j++){
                            if (strcmp(alphabetical[i],alphabetical[j])>0){
                                strcpy( temp,alphabetical[i]);
                                strcpy(alphabetical[i],alphabetical[j]);
                                strcpy(alphabetical[j],temp);

                            }
                                }

                        }
                        printf("THE ALPHABETICAL ORDER IS:\n ------------ \n");
                        for (i = 0; i<p; i++){
                            printf("| %d. %s \n" , i+1,alphabetical[i]);
                        }
                        printf(" ----------\n");

                        break;

                    case 4:

                    c=0;

                    printf("Enter the String::  ");

                    scanf("%s",arr);
                    j=strlen(arr);
                    *str= strlwr(arr);

                    for (i=0;i<j;i++)
                    {
                    if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
                    {
                    c=c+1;

                    }

                    }

                    printf("\n");
                    printf("Number of Vowels = %d", c);

                        break;

                    }



    }


    printf("\n----------------------------------------\n");
    }
    }


/*1 for sum
2 for difference
3 for multiplication
4 for division
5 for fibonacci series
6 for checking whether prime or not
7 for strong number or not
8 for factorial calculation
9 for real roots of a given quadratic eqn
10 for matrix multiplication
*/
