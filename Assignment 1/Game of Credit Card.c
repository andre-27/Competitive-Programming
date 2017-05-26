#include <stdio.h>
int main()
{
	int n,i,j,flick;
	char str1[1000],str2[1000],temp[10]={'0','1','2','3','4','5','6','7','8','9'};
	int s1[10]={},s2[10]={};
	scanf("%d",&n);

    scanf("%s %s",str1,str2);
    for(i=0;i<n;i++)
    {
    	for(j=0;j<=9;j++)
    	{
             if(str1[i]==temp[j])
           	 s1[j]++;
           	 if(str2[i]==temp[j])
           	  s2[j]++;	
        }
           
    }
}
for(i=9;i>=0;i--)
{
	if(s1[i]>s2[i])
	{
		
	}
}