#include<stdio.h>
 int main( ) 
{
int price, disc;
printf("Please enter the price");
scanf("%d",&price);
if(price<=2000 && price >=500){
	disc=5;
}
else if(price>2000 && price<4000){
	disc=10;
}
else if(price>=4000 && price<=6000){
	disc=20;
}
else if(price>6000){
	disc=35;
}
else{
disc=0;
}
float discounted_price=price*(100-disc)/100;
printf("The original price before discount was  %d and you have been given discount of percent %d  and the price after discount is %.2f",price,disc,discounted_price);
}