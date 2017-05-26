#include <stdio.h>
int main()
{   char str[11];
	int k,i=0,count=0,temp=0;
	scanf("%s %d",str,&k);

    while(str[i]!='\0')
    {
    	count++;
    	i++;
    }


    for(i=count-1;i>=0;i--)
    {
    	if(str[i]=='0')
    		k--;
    	else
    		temp++;

    	if(!k)
    		break;

    }

    if(k>0)
    	printf("%d",count-1);
    else
    	printf("%d",temp);

   return 0;

}
