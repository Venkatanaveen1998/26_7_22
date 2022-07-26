#include<stdio.h>
#define sum(num,i)  num&(1<<i)
int main()
{
        int num=0xab,pos=2,s=0,num_bits=3,new_value=0;
        num=num>>pos+1;
        printf("num= %08x ",num);
        for(int i=0;i<num_bits;i++)
        {
                s=sum(num,i);
                new_value=new_value+s;
        }
        printf("%d ",new_value);


}
