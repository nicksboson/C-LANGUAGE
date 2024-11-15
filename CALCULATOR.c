#include<stdio.h>
int main(){float a,b;
char c,d;
start:
printf("enter an operator :");
scanf("%c",&c);
printf("enter 2 operands : ");
scanf("%f%f",&a,&b);
if(c =='+'){
    goto plus;
}
else if(c == '-'){
    goto minus;
}
else if(c == '*'){
    goto multiply;
}else if(c == '/'){
    goto divide;
}
else{
    printf("invalid operator");
}
plus:
printf("Sum = %f\n",a+b);
printf("do you want any other operation (Y/N) ");
scanf(" %c",&d);
if(d== 'Y')
{goto start;}
else{
    goto end;
    
}
minus:
printf("Difference = %f\n",a-b);
printf("do you want any other operation (Y/N) ");
scanf(" %c",&d);
if(d== 'Y')
{goto start;}
else{
   
    goto end;
}
multiply:
printf("Product = %f\n",a*b);
printf("do you want any other operation (Y/N) ");
scanf(" %c",&d);
if(d== 'Y')
{goto start;}
else{
  
    goto end;
}
divide:
printf("Division = %f",a/b);
printf("do you want any other operation (Y/N) ");
scanf(" %c",&d);
if(d== 'Y')
{goto start;}
else{
    
    goto end;
}
    end:
    return 0;
}


                                                                                                 