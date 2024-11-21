// c functions
#include<stdio.h>//scanf(),printf()
#include<math.h>//sin(),cos(),tan()sqrt()
int area(int l,int w);//function prototype
int perimeter(int length, int width);//function prototype
int main(){
	int a,c,len,wid;
	printf("enter length and width: ");
	scanf("%d%d",&len, &wid);
	a=area(len,wid);//function calling
	c=perimeter(len,wid);//function calling
	printf("Area is%d\n", a);
	printf("Perimeter is d\n", c);
	
	return 0;
}
//fuction definition
int area(int l,int w){
	int a;
	a=l*w;
	return a;
}\
int perimeter(int length, int width){
	int c;
	c=2*(length+width);
	return c;
}