#include <stdio.h>
void main()
{
    char s[100],s1[100];
    int i=0,j;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; ++i);

    printf("Length of string: %d", i);
      for(j=0;s[j] !='\0';j++)
     
        while (s[j] != '\0') {
    s1[j] = s[j];
    }
  }
 
  s1[j] = '\0';
 
  printf("After copying, the string: %s\n", s1[j]);

   while(s[i]!='\0')
  i++;
  while(s1[j]!='\0')
  {
    s[i]=s1[j];
    j++;
    i++;
  }
  s[i]='\0';
  printf("\nConcatenated String is %s",s);

    len=strlen(s)-1;
   
   for(i=0;i<strlen(s)/2;i++)
   {
      temp=s[i];
      s[i]=s[len];
      s[len--]=temp;
   }
   printf("\nReverse string :%s",str);

    for(i=0; s[i]!='\0'; i++)
       {
              if(s[i] == s1[i])
              temp = 1;
              else
              temp = 0;
       }

       if(temp == 1)
       printf("Both strings are same.");
 
       else
 
       printf("Both string not same.");

 
getch();

   
}