#include<iostream>
#include<string.h>
int main()
{
	int a=5,b=3;
	a=a^b;
	b=a^b;
	a=a^b;
	std::cout<<a<<b;
	char str[]="hello world";
	strcpy(str,"hf");
	printf("%s\n",str);
	printf("%c\n",str[1]);
	printf("%c\n",str[2]);
	return 0;
}
