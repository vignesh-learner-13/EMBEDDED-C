#include<8051.h>
void delay(int a)
{
int i=0;
for(i=0;i<a;i++);
}
void main()
{
int a[10]={0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
int c=0;
while(1)
{
delay(10);
P0=a[c];
c++;
if(c==8)
{
c=0;
}
delay(10);
}


}
