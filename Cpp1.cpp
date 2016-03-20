#include<iostream>
using namespace std;
#include<string.h>
class Tt
{
public:
	Tt();

private:

	static int a;
	int b;
	friend void pp(Tt ttt);
};
Tt::Tt()
{
	b=444;
}
void pp(Tt ttt)
{
	cout<<ttt.b;
}
int Tt::a = 3333;
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
	char d[]="123";
	char s[]="123456789";
	//char d[]="123";
	strcpy(d,s);
	printf("%s\n%s\n",d,s);
	Tt tt;
	pp(tt);
	return 0;
}
