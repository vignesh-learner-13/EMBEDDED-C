#include<8051.h>
void delay(int a)
{
int i=0;
for(i=0;i<a;i++);
}
char a[10]={0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
char
ke[20]={0x77,0x7B,0x7D,0xB7,0xBB,0xBD,0xD7,0xDB,0xDD,0xE7,0xEB,0xED};
void main()
{
while(1)
{
int read,res,c=0;
P0=0xF0;
read=P0;
P0=0x0F;
res=P0|read;
P2=res;
if(res==0x77)
{
P1=0xF9;
}
else if(res==0x7B)
{
P1=0xA4;
}
else if(res==0x7D)
{
P1=0xB0;
}
else if(res==0xB7)
{
P1=0xB0;
}
else
{
P1=0xFF;
}
}
}


