 #include<stdio.h>
 int main( ) 
{ 
int num1,num2;
char op;
printf("Please enter two number");
scanf("%d %d",&num1,&num2);
printf("Please enter operator : +,-,*,/");
scanf(" %c",&op);
if(op == '+'){
	printf("%d",num1+num2);
}
else if(op == '-'){
	printf("%d",num1-num2);
}
else if(op == '*'){
	printf("%d",num1*num2);
}
else if(op == '/'){
	printf("%d",num1/num2);
}
else{
	printf("Please enter correct operator");
}
}