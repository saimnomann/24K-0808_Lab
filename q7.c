 #include<stdio.h>
 int main( ) 
{
int customer_id,units;
float bill;
printf("Please enter customer id");
scanf("%d",&customer_id);
printf("Please enter your unit consumed");
scanf("%d",&units);
if(units>=0 && units<200){
	bill=units*16.20;
}
else if(units>=200 && units<300){
	bill=units*20.10;
}
else if (units>=300 && 500){
	bill=units*27.10;
}
else if(units>=500){
	bill=units*35.90;
}
else{
	printf("Please enter units in positive number");
}
if(bill>1800){
	bill=(bill*35)/100;
}
printf("Customer Id: %d\nYour bill is %.3f",customer_id,bill);
}