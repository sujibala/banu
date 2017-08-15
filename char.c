#include<stdio.h>
int main()
{
	char str[100];
	int countSpeciaChar,countAlphabet,countDigits;
	int counter;
	countSpeciaChar=countAlphabet=countDigits=0;
	printf("enter the string:");
	gets(str);
	for(counter=0;str[counter]!=NULL;counter++)
	{
		if(str[counter]>='0' && str[counter]<='9' )
		countDigit++;
		else if((str[counter]>='A' && str[counter]<='Z')||(str[counter]>='a' && str[counter]<='z'))
		countAlphabet++;
		else
		countSpecialChar++;
	}
	printf("\n digit=%d \n alphabet=%d \n specialChar=%d",countDigit,countAlphabet,countSpecialChar);
	return 0;
}
