#include<stdio.h>
int main()
int order=0;
{ 
  printf("Here is the menu in your honor\n)"
  printf("1.Pizza\n 2.Burger\n 3.Pasta\n 4.French fries\n 5.Sandwich\n");
  scanf("%d",&order);

  switch(order)
  { 
    case 1: 
            printf(" Your order:Pizza\n Prize:239Rs");
    break;

    case 2:
            printf(" Your order:Burger\n Prize:129Rs");
    break;

    case 3:
            printf(" Your order:Pasta\n Prize:179Rs");
    break;

    case 4:
            printf(" Your order:French fries\n Prize:99Rs");
    break;

    case 5:
            printf(" Your order:Sandwich\n Prize:149Rs");
    break;

    default:printf("Sorry for the inconveniences Sir/Mam,the food item you ordered is not available now");
  }
  
    printf("Thank you for your visit, Visit Again\n Have a great day");
 
}
