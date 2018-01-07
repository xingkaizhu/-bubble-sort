#include <stdio.h>
int main ()
{int a,t, i,j,k;
scanf("%d",&a);
int b[30];
for(i=0;i<a;i++)
{scanf("%d",&b[i]);

}
for(j=0;j<a;j++)
{
for(t=0;t<a-j-1;t++)
{ if(b[t]>b[t+1])
{  k=b[t];
b[t]=b[t+1];
b[t+1]=k;
}
}
if(j<a-1)
{for(i=0;i<a-1;i++)
printf("%d ",b[i]);
printf("%d\n",b[a-1]);
}

}		
	return 0;
}
