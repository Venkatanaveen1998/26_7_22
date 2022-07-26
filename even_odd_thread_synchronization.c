#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
pthread_mutex_t lock;
int i=1;
void *even(void *s)
{    
	int *d=(int *)s;
	while(i<=d)
	{
	if(i%2==0)
	{
	pthread_mutex_lock(&lock);
printf("%d ",i);
i++;
	}
	else
pthread_mutex_unlock(&lock);
}
}
void *odd(void *s)
{
	
       int *d=(int *)s;
       while(i<=d)
       {
        if(i%2!=0)
	{
	pthread_mutex_lock(&lock);
printf("%d ",i);
i++;
	}
	else
   pthread_mutex_unlock(&lock);
}
}
int main()
{
 pthread_t t1[2];
 pthread_mutex_init(&lock,NULL);
 int n;
 printf("enter upto where u want to find even and odd num\n");
scanf("%d",&n); 
for(int j=1;j<n/2;j++)
{
 pthread_create(&t1[0],NULL,&even,(void *)n);
 pthread_create(&t1[1],NULL,&odd,(void *)n);
}
 pthread_join(t1[0],NULL);
 pthread_join(t1[1],NULL);
}
