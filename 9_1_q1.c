/*
Q.1 Write a Program to convert the given string in uppercase without using any string function.
For example,
Input:
Enter any string: hello world

Output:
Uppercase string: HELLO WORLD
*/
#include<stdio.h>
 
 void main(){
	int i;
	char a[]={'h','e','l','l','o','w','o','r','l','d'};
	
	for(i=0; i<10; i++){
		a[i]=a[i]-32;
		printf("%c",a[i]);
	}
	 	
 }
