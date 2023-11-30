# include <stdio.h>

void swap(int *l, int *m)
 {
    int q = *l;
    *l = *m;
    *m = q;
}

int main(){
 
int p ;

printf("(1) Arithmetic of two numbers.\n(2) Fibonacci series of given no.\n(3) Character conversion.\n(4) Swap two numbers.\n");
printf("\n");
printf("ENTER THE OPERATION YOU WANT TO PERFORM (1-4):");
scanf("%d",&p);
printf("\n");

if(p==1){

    float a , b , c , d , e , f ;
    
      printf("ENTER NUMBER 1 : ");
      scanf("%f",&a);

       printf("ENTER NUMBER 2 : ");
      scanf("%f",&b);

    printf("\n");
    printf("SUM :            %f \n", c=a+b);
    printf("SUBTRACTION :    %f \n ", d=a-b);
    printf("MULTIPLICATION : %f \n ", e=a*b);
    printf("DIVISION :       %f\n ", f=a/b);
}
else if (p==2){

    int z=0,w=1,sum, n ;

     printf("ENTER THE NUMBER OF TERMS U WANT IN THE FIBONACCI SERIES ");
    scanf("%d",&n);

    for (int i = 1 ; i<=n ; i++)
{
    printf("%d ",z);
    sum=z+w;
    z=w;
    w=sum;
}
}
else if (p==3){

    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z') 
    {
        input = input - ('a' - 'A');
        printf("Converted to uppercase: %c  /n", input);
    }

    else if (input >= 'A' && input <= 'Z') 
    {

        input = input + ('a' - 'A');
        printf("Converted to lowercase: %c  /n", input);
    }
    else 
    {
        printf("Not a letter.\n");
    }
}
else if(p==4){

    int num3, num4;

    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d", &num3);

    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d", &num4);

    swap(&num3, &num4);

    printf("SWAPPED VALUES ARE num1 = %d, num2 = %d\n", num3, num4);

}
else{
    printf("PLEASE ENTER FROM ABOVE CHOICES!!!!");
}
    return 0 ; 
}