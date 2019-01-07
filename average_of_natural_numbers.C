void main()
{
  int n,sum=0,avg=0,i;
  clrscr();
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("The average of the n natural numbers is \n");
  for(i=1;i<=n;i++)
  {
    sum=sum+i;
  }
  avg=sum/n;
  printf( "%d \n",avg);
getch();
}
