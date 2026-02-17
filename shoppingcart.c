#include <stdio.h>
#include <string.h>

int main (){

 char item[30]= "";
 float price = 0.0;
 int quantity = 0;
 char currency = 'r';
 
 float total = 0;


 printf("whats the namer of product you buy? :");
 fgets(item,sizeof(item),stdin);

 printf("what is the price for each item :");
 scanf("%f", &price);

 printf("how many items you would you buy? :");
 scanf("%d",&quantity);

 total = price * quantity;

 printf("the total price : %.2f %c\n",total,currency);


 return 0;


}