#include<stdio.h>
#include<string.h>
typedef struct company
{
   char name[50];
   char address[30];
   int phone;
   long noofemployee;

}comp;
comp c;
comp input()
{ 
printf("Enter name of company: ");
  fgets(c.name,50,stdin);
  
printf("Enter address of company: ");
fgets(c.address,30,stdin);

printf("Enter phone: ");
scanf("%d",&c.phone);
printf("Number of employees working in the company: ");
scanf("%ld",&c.noofemployee);
getchar();
}

comp print()
{ printf("\nCompanies detail:\nname: %saddress: %sphone no.: %d\nno. of employee: %ld ",c.name,c.address,c.phone,c.noofemployee);
    
}

int main()
{ 
  input();
  print();
  return 0;
}
