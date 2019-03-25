#include <stdio.h>
 
int main() 
{
	char a[50],ch;
  
	int i,j,c=1,temp=1;
  
	scanf("%[^\n]s",a);
  
	for(i=0;a[i]!='\0';i++)
  
	{
		for(j=i+1;a[j]!='\0';j++)
    
		if(a[i]==a[j])
    
		{
			c++;
      
			if(c>temp)
      
			{
				temp=c;
        
				ch=a[i];
        
			}
      
		}
    
	}
  
	printf("%c",ch);
  
}
