 #include<stdio.h>
 int main( ) 
{
int a;
scanf("%c",&a);
if(a>=65 && a<=90 ){  
 printf("It is a capital alphabet");
 
}
else if(a>90 && a<97){
	printf("It is a special character");
}
else if(a>=97 && a<=122){
	printf("It is a small alphabet");
}
}