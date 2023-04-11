#include<8051.h>
#define rs P1_0
#define rw P1_1
#define en P1_2
void lcdcmd(unsigned char cmd);
void data(unsigned char dat);
void delay(int n);
void lcd_string(char *s);
void lcd_string(char *s)
{
    while(*s) {
       data(*s++);
     }
}
void delay(int n)
{
int i;
for(i=0;i<n;i++);
}
void lcdcmd(unsigned char cmd)
{
P2=cmd;
rs=0;
rw=0;
en=1;
delay(10);
en=0;
}
void data(unsigned char dat)
{
P2=dat;
rs=1;
rw=0;
en=1;
delay(10);
en=0;
}

void main()
{
while(1)
{
lcdcmd(0x38);// take 2 lines 
delay(10);
lcdcmd(0x01);//clear the screen
delay(10);
lcdcmd(0x10);//cursor on
delay(10);
lcdcmd(0x0c);//display on 
delay(10);
lcdcmd(0x81);//go to second line 
delay(10);
data('h');
delay(10);
data('e');
delay(10);
data('l');
delay(10);
data('l');
delay(10);
data('o');
delay(10);
data('o');
delay(10);
data('o');
delay(10);
lcdcmd(0xc0);// go to second line 
lcd_string("hi");
}
}


