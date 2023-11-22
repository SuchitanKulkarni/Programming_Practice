#include<iostream>
#include<string.h>
#define max 50
using namespace std;

class STACK
{
	private:
		char a[max];
		int top;
	public:
		STACK()
		{
			top=-1;
		}
		void push(char);
		void reverse();
		void convert(char[]);
		void pallindrom();
		
		
};
void STACK::push(char c)
{
	top++;
	a[top]=c;
	a[top+1]='\0';
	
}
void STACK::reverse()
{
	char str[max];
	int i,j=0;
	for(i=top;i>=0;i--)
	{
		cout<<a[i];
		str[j]=a[i];
		j++;
	}
	str[j]='\0';
	cout<<"\nReversed string is :"<<str;
}
void STACK::convert(char str[])
{
	int j,k,len;
	len=strlen(str);
	for(j=0,k=0;j<len;j++)
	{
		if((str[j]>=97 && str[j]<=122)||(str[j]<=90 && str[j]>=65))
		{
			if(str[j]<=90)
			{
				str[k]=(str[j]+32);
			}
			else
			{
				str[k]=str[j];
			}
			k++;
		}
		
	}
	str[k]='\0';
		cout<<"\nConverted string is :"<<str;

}
void STACK::pallindrom()
{
	char str[max];
	int i,j;
	for(i=top,j=0;i>=0;i--,j++)
	{
		str[j]=a[i];
	}
	str[j]='\0';
	if(strcmp(str,a)==0)
	{
		cout<<"\nIt is pallindrom";
	}
	else
	{
		cout<<"\nIt is not pallinmdrom";
	}

}
int main()
{
	STACK stack;
	char str[max];
	int i;
	
	cout<<"\nEnter the string to reverse and check it is pallindrom or not \n\n";
	cin.getline(str,50);
	stack.convert(str);
	while(str[i]!='\0')
	{
		stack.push(str[i]);
		i++;
	}
	stack.pallindrom();
	stack.reverse();
	
	return 0;
}
