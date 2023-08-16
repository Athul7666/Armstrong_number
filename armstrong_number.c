#include<stdio.h>
int main()
{
    int num;                            /*num variable is used to store take the input received from the user*/
    int check=0,cube,rem,result=0;      /*check variable is used to store the input value received from the user for future references*/
    printf("Enter the number to be checked: ");
    scanf("%d",&num);                   /* The input number is stored in here at the num variable.*/
    check=num;                          /* check is the variable where the input number is being stored for the reference. */
    while(num>0)
    { 
        rem=num%10;                    /* The reminder for finding the single-single numbers*/
        cube=(rem*rem*rem);            /*The cube variable is used for storing the cube of the single-single numbers*/
        result=cube+result;            /*The result variable is used to store the sum of cubes*/
        num=num/10;
    }
    if(check==result)                 /* if loop is used for  checking whether the given number is an armstrong number or not !!*/
    {
        printf("The number %d is an Armstrong number !!",check);
    }
    else
    {
        printf("The number %d is not an Armstrong number !!",check);
    }
}
    }
}
