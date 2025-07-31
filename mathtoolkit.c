#include<stdio.h>

void Prime(int temp)
{
  int count=0;
  for(int i=1;i<<=temp;i++)
  {
    if(temp%i==0)
    {
       count++;
    }
  }
  if(count==2)
  {
    printf("it is a Prime Number \n");
  }
  else
  {
  printf("Not a Prime Number \n");
  }
}

void factorial(int temp)
{
  int fact=1;
  for(int i=1;i<=temp;i++)
  {
    fact=fact*i;
  }
  printf("Factorial is: %d \n",fact);
}

int reserved(int temp)
{
  int rev=0;
  int last=0;
  while(temp>0)
  {
  last=temp%10;
  rev=rev*10+last;
  temp=temp/10;

  }
  printf("reversed number %d \n",rev);
  return rev;
}


void main() {
int choice,number;
while(1)
{
printf("***Mini Math App*** \n");
printf("Press 1 for Check Prime \n");
printf("Press 2 for Factorial \n");
printf("Press 3 for ReserveNumber \n");
printf("Press 4 for Palindrome \n");
printf("Press 5 for Exit \n");

printf("Enter a choice \n");
scanf("%d",&number);

switch(choice)
{
  case 1:
  {
      Prime(number);
      break;
  }

  case 2:
  {
      factorial(number);
      break;
  }

  case 3:
  {
      reserved(number);
      break;
  }

  case 4:
  {
if(number==reserved(number))
    {
        printf("Given Number is a Palindrome\n");
        break;
    }
    else
    {
        printf("Not a Palindrome\n");
    }
    break;
  }

  case 5:
  {
        printf("Exiting...");
        break;
  }

  default:
  {
      printf("invalid input\n");
      break;
  }

}
if(choice==5)
{
    break;
}



}
}
