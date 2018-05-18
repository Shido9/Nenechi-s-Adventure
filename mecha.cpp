#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define rens 24
#define cols 78
void consultam(char nums[rens][cols])
 {
 int y,x;   
 for (y=17;y<=rens-1;y++)
     for(x=0;x<=cols-1;x++)
     {
     if (nums[y][x]=='0')
        {
        textcolor(0);
        gotoxy(x+1,y+1);
        printf("%c",219);
                         }
     if (nums[y][x]=='|')
        {
        textcolor(1);
        gotoxy(x+1,y+1);
        printf("%c",223);
                         }
     if (nums[y][x]=='1')
        {
        textcolor(1);
        gotoxy(x+1,y+1);
        printf("%c",219);
                         }
     if (nums[y][x]=='2')
        {
        textcolor(49);
        gotoxy(x+1,y+1);
        printf("%c",220);     
                        }
     if (nums[y][x]=='3')
        {
        textcolor(3);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='4')
        {
        textcolor(52);
        gotoxy(x+1,y+1);
        printf("%c",223);     
                        }
     if (nums[y][x]=='5')
        {
        textcolor(4);
        gotoxy(x+1,y+1);
        printf("%c",220);     
                        }
     if (nums[y][x]=='6')
        {
        textcolor(9);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='7')
        {
        textcolor(7);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='8')
        {
        textcolor(8);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='9')
        {
        textcolor(12);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='i')
        {
        textcolor(7);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        } 
     if (nums[y][x]=='u')
        {
        textcolor(7);
        gotoxy(x+1,y+1);
        printf("%c",220);     
                        } 
     if (nums[y][x]=='p')
        {
        textcolor(55);
        gotoxy(x+1,y+1);
        printf("%c",223);     
                        }
     if (nums[y][x]=='t')
        {
        textcolor(11);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='r')
        {
        textcolor(11);
        gotoxy(x+1,y+1);
        printf("%c",220);     
                        }
     if (nums[y][x]=='f')
        {
        textcolor(12);
        gotoxy(x+1,y+1);
        printf("%c",196);     
                        }
     if (nums[y][x]=='g')
        {
        textcolor(0);
        gotoxy(x+1,y+1);
        printf("%c",196);     
                        }
     if (nums[y][x]=='e')
        {
        textcolor(4);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='q')
        {
        textcolor(2);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='k')
        {
        textcolor(3);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='j')
        {
        textcolor(6);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='h')
        {
        textcolor(12);
        gotoxy(x+1,y+1);
        printf("%c",220);     
                        }
     if (nums[y][x]=='y')
        {
        textcolor(12);
        gotoxy(x+1,y+1);
        printf("%c",223);     
                        }
     if (nums[y][x]=='w')
        {
        textcolor(15);
        gotoxy(x+1,y+1);
        printf("%c",219);     
                        }
     if (nums[y][x]=='a')
        {
        textcolor(15);
        gotoxy(x+1,y+1);
        printf("%c",220);     
                        }
     if (nums[y][x]=='d')
        {
        textcolor(15);
        gotoxy(x+1,y+1);
        printf("%c",223);     
                        }         
                        } 
 }
void consultas(char nums[rens][cols] )
 {
 clrscr();
 int x,y;
 for (y=0;y<=rens-1;y++)
     for (x=0;x<=cols-1;x++)
         {
         if (nums[y][x]=='0')
            {
            gotoxy(x+1,y+1);               
            textcolor(0);
            putchar(219);
                         }
         if (nums[y][x]=='1')
            {
            gotoxy(x+1,y+1);               
            textcolor(1);
            putchar(219);
                         }
         if (nums[y][x]=='2')
            {
            gotoxy(x+1,y+1);               
            textcolor(2);
            putchar(219);
                         }
         if (nums[y][x]=='3')
            {
            gotoxy(x+1,y+1);               
            textcolor(3);
            putchar(219);
                         }
         if (nums[y][x]=='4')
            {
            gotoxy(x+1,y+1);               
            textcolor(4);
            putchar(219);
                         }
         if (nums[y][x]=='5')
            {
            gotoxy(x+1,y+1);
            textcolor(5);
            putchar(219);
                         }
         if (nums[y][x]=='6')
            {
            gotoxy(x+1,y+1);               
            textcolor(6);
            putchar(219);
                         }
         if (nums[y][x]=='7')
            {
            gotoxy(x+1,y+1);               
            textcolor(7);
            putchar(219);
                         }
         if (nums[y][x]=='8')
            {
            gotoxy(x+1,y+1);               
            textcolor(8);
            putchar(219);
                         }
         if (nums[y][x]=='9')
            {
            gotoxy(x+1,y+1);               
            textcolor(9);
            putchar(219);
                         }
         if (nums[y][x]=='z')
            {
            gotoxy(x+1,y+1);               
            textcolor(10);
            putchar(219);
                         }
         if (nums[y][x]=='x')
            {
            gotoxy(x+1,y+1);               
            textcolor(11);
            putchar(219);
                         }
         if (nums[y][x]=='c')
            {
            gotoxy(x+1,y+1);               
            textcolor(12);
            putchar(219);
                         }
         if (nums[y][x]=='v')
            {
            gotoxy(x+1,y+1);               
            textcolor(13);
            putchar(219);
                         }
         if (nums[y][x]=='b')
            {
            gotoxy(x+1,y+1);               
            textcolor(14);
            putchar(219);
                         }
         if (nums[y][x]=='n')
            {
            gotoxy(x+1,y+1);               
            textcolor(15);
            putchar(219);
                         }
         if (nums[y][x]=='m')
            {
            gotoxy(x+1,y+1);
            textbackground(1);
            textcolor(15);
            putchar('*');
                         }
                         }
 }
void mono60(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1;
 nums[yy-1][xx+6]='1';
 nums[yy-2][xx+5]='2';
 nums[yy-2][xx+6]='2';
 nums[yy-1][xx+7]='2';
 for (y1=yy-4;y1<=yy-2;y1++)
     nums[y1][xx+3]='6';
 for (y1=yy-4;y1<=yy-2;y1++)
     nums[y1][xx+4]='9';
 nums[yy-4][xx+4]='1';
 nums[yy-1][xx+3]='|';
 nums[yy-1][xx+2]='1';
 nums[yy-1][xx+1]='2';
 for (x9=xx+2;x9<=xx+5;x9+=3)
     nums[yy-3][x9]='p';
 for (x9=xx+1;x9<=xx+6;x9+=5)
     nums[yy-3][x9]='u';
 nums[yy-5][xx+4]='i';
 for (x9=xx+4;x9<=xx+5;x9++)
     nums[yy-6][x9]='5';
 nums[yy-5][xx+3]='4';
 xx=1;
 yy=25;
 }  
void mono50(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1;
 nums[yy-1][xx+1]='1';
 nums[yy-2][xx+1]='2';
 nums[yy-2][xx+2]='2';
 nums[yy-1][xx]='2';
 for (y1=yy-4;y1<=yy-2;y1++)
     nums[y1][xx+4]='6';
 for (y1=yy-4;y1<=yy-2;y1++)
     nums[y1][xx+3]='9';
 nums[yy-4][xx+3]='1';
 nums[yy-1][xx+4]='|';
 nums[yy-1][xx+5]='1';
 nums[yy-1][xx+6]='2';
 for (x9=xx+2;x9<=xx+5;x9+=3)
     nums[yy-3][x9]='p';
 for (x9=xx+1;x9<=xx+6;x9+=5)
     nums[yy-3][x9]='u';
 nums[yy-5][xx+3]='i';
 for (x9=xx+2;x9<=xx+3;x9++)
     nums[yy-6][x9]='5';
 nums[yy-5][xx+4]='4';
 xx=1;
 yy=25;
 }    
void monoa(int xx, int yy, char nums[rens][cols], char noms[rens][cols])
 {     
 int x9,y4,x,y,y1,y5;
 y4=23;
 for (x9=xx+1;x9<=xx+2;x9++)
     nums[y4--][x9]='1'; 
 nums[yy-1][xx]='2';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+4]='9';
 nums[yy-5][xx+4]='1';
 y5=22;
 for (x9=xx+5;x9<=xx+6;x9++)
     nums[y5++][x9]='1';
 nums[yy-1][xx+7]='2';
 for (x9=xx+2;x9<=xx+5;x9+=3)
     nums[yy-4][x9]='u';
 nums[yy-4][x9-2]='t';
 nums[yy-5][x9-1]='t';
 nums[yy-5][x9]='r';
 nums[yy-5][x9+1]='r';
 nums[yy-6][xx+4]='i';
 for (x9=xx+4;x9<=xx+5;x9++)
     nums[yy-7][x9]='5';
 nums[yy-6][xx+3]='4';   
 xx=1;
 yy=25;                            
 } 
void mono40(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1;
 nums[yy-1][xx+1]='1';
 nums[yy-2][xx+2]='1'; 
 nums[yy-1][xx]='2';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+4]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='9';
 nums[yy-5][xx+3]='1';
 nums[yy-2][xx+5]='1';
 nums[yy-1][xx+6]='1';
 nums[yy-1][xx+7]='2';
 for (x9=xx+2;x9<=xx+5;x9+=3)
       nums[yy-4][x9]='p';
 nums[yy-6][xx+3]='i';    
 for (x9=xx+2;x9<=xx+3;x9++)
     nums[yy-7][x9]='5';
 nums[yy-6][xx+4]='4';
 nums[yy-4][x9-3]='t';
 nums[yy-5][x9-4]='t';
 nums[yy-5][x9-5]='r';
 nums[yy-5][x9-6]='r';
 xx=1;
 yy=25;
 }                   
void mono1(int xx, int yy, char nums[rens][cols], char noms[rens][cols])
 {
 int x9,x,y,y1,y5;  
 nums[yy-1][xx]='1';
 nums[yy-2][xx+1]='1';
 nums[yy-1][xx+1]='2';  
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+2]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='9';
 nums[yy-5][xx+3]='1';  
 y5=22;
 for (x9=xx+4;x9<=xx+5;x9++)
     nums[y5++][x9]='1';
 nums[yy-1][xx+6]='2';
 for (x9=xx+5;x9<=xx+6;x9++)
     nums[yy-4][x9]='p';
 nums[yy-4][xx+4]='u';
 nums[yy-6][xx+3]='i';
 nums[yy-7][xx+3]='5';
 nums[yy-6][xx+4]='4';
 x=3;
 y=25;
 }
void mono2 (int xx, int yy,char nums[rens][cols], char noms[rens][cols])
 {
 int x9,x,y;  
 nums[yy-1][xx]='1';
 nums[yy-2][xx+1]='1';
 nums[yy-1][xx+1]='2';
 int y1;
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+1]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+2]='9';
 nums[yy-5][xx+2]='1';
 nums[yy-2][xx+3]='1';
 nums[yy-1][xx+3]='1';
 nums[yy-1][xx+4]='2';
 nums[yy-4][xx+3]='u';
 nums[yy-6][xx+2]='i';
 nums[yy-7][xx+2]='5';
 nums[yy-6][xx+3]='4';
 x=3;
 y=25;
 }
void mono3(int xx, int yy, char nums[rens][cols], char noms[rens][cols])
 {
 int x9,x,y,y1;  
 nums[yy-1][xx]='1';
 nums[yy-2][xx+1]='1';
 nums[yy-1][xx+1]='2';   
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+1]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+2]='9';
 nums[yy-5][xx+2]='1';
 nums[yy-2][xx+2]='1';
 nums[yy-1][xx+2]='1';
 nums[yy-1][xx+3]='2';
 nums[yy-4][xx+3]='u';
 nums[yy-6][xx+2]='i';
 nums[yy-7][xx+2]='5';
 nums[yy-6][xx+3]='4';
 x=1;
 y=25;
 }
void mono4(int xx, int yy, char nums[rens][cols], char noms[rens][cols])
 {   
 int x9,y4,x,y,y1,y5;
 y4=23;
 for (x9=xx+2;x9<=xx+3;x9++)
     nums[y4--][x9-1]='1';    
 nums[yy-1][xx]='2';  
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+4]='9';
 nums[yy-5][xx+4]='1';    
 nums[yy-2][xx+5]='1';
 nums[yy-1][xx+6]='1';
 nums[yy-1][xx+7]='2';
 for (x9=xx+2;x9<=xx+5;x9+=3)
     nums[yy-4][x9]='u';
 for (x9=xx+1;x9<=xx+6;x9+=5)
     nums[yy-3][x9]='p';
 nums[yy-6][xx+4]='i';
 for (x9=xx+4;x9<=xx+5;x9++)
     nums[yy-7][x9]='5';
 nums[yy-6][xx+3]='4';
 xx=1;
 yy=25;                         
 } 
void mono5(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1,y5; 
 nums[yy-2][xx+2]='1';
 nums[yy-1][xx+1]='1';
 nums[yy-1][xx]='2';
 for (y1=yy-5;y1<=yy-3;y1++)
       nums[y1][xx+4]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='9';
 nums[yy-5][xx+3]='1';  
 y5=22;
 for (x9=xx+5;x9<=xx+6;x9++)
     nums[y5++][x9]='1';
 nums[yy-1][xx+5]='2';
 for (x9=xx;x9<=xx+1;x9++)
     nums[yy-4][x9]='p';
 nums[yy-4][xx+2]='u';
 nums[yy-6][xx+3]='i';     
 nums[yy-7][xx+3]='5';
 nums[yy-6][xx+2]='4';
 xx=3;
 yy=25;
 }
void mono6(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1;  
 nums[yy-1][xx]='2';
 nums[yy-2][xx+1]='1';
 nums[yy-1][xx+1]='1';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+2]='9';
 nums[yy-5][xx+2]='1';
 nums[yy-2][xx+3]='1';
 nums[yy-1][xx+4]='1';
 nums[yy-1][xx+3]='2';
 nums[yy-4][xx+1]='u';
 nums[yy-6][xx+2]='i';
 nums[yy-7][xx+2]='5';
 nums[yy-6][xx+1]='4';
 xx=3;
 yy=25;
 }
void mono7(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1;  
 nums[yy-1][xx]='2';
 nums[yy-2][xx+1]='1';
 nums[yy-1][xx+1]='1';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+2]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+1]='9';
 nums[yy-5][xx+1]='1';
 nums[yy-2][xx+2]='1';
 nums[yy-1][xx+3]='1';
 nums[yy-1][xx+2]='2';
 nums[yy-4][xx]='u';
 nums[yy-6][xx+1]='i';
 nums[yy-7][xx+1]='5';
 nums[yy-6][xx]='4';
 xx=1;
 yy=24;
 } 
void mono8(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1;
 nums[yy-1][xx+1]='1';
 nums[yy-2][xx+2]='1'; 
 nums[yy-1][xx]='2';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+4]='6';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='9';
 nums[yy-5][xx+3]='1';
 nums[yy-2][xx+5]='1';
 nums[yy-1][xx+6]='1';
 nums[yy-1][xx+7]='2';
 for (x9=xx+2;x9<=xx+5;x9+=3)
       nums[yy-4][x9]='p';
 for (x9=xx+1;x9<=xx+6;x9+=5)
     nums[yy-4][x9]='u';
 nums[yy-6][xx+3]='i';       
 for (x9=xx+2;x9<=xx+3;x9++)
     nums[yy-7][x9]='5';
    nums[yy-6][xx+4]='4';
 xx=1;
 yy=25;
 } 
void mono4a(int xx, int yy, char nums[rens][cols], char noms[rens][cols])
 {   
 int x9,y4,x,y,y1,y5;
 y4=23;
 for (x9=xx+2;x9<=xx+3;x9++)
     nums[y4--][x9-1]='9';
 nums[yy-1][xx]='h';  
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='9';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+4]='e';
 nums[yy-5][xx+4]='9';    
 nums[yy-2][xx+5]='9';
 nums[yy-1][xx+6]='9';
 nums[yy-1][xx+7]='h';
 for (x9=xx+2;x9<=xx+5;x9+=3)
     nums[yy-4][x9]='h';
 for (x9=xx+1;x9<=xx+6;x9+=5)
     nums[yy-3][x9]='y';
 nums[yy-6][xx+4]='9';
 for (x9=xx+4;x9<=xx+5;x9++)
     nums[yy-7][x9]='5';
 nums[yy-6][xx+3]='4';
 xx=1;
 yy=25;                         
 }
void mono4b(int xx, int yy, char nums[rens][cols], char noms[rens][cols])
{   
 int x9,y4,x,y,y1,y5;
 y4=23;
 for (x9=xx+2;x9<=xx+3;x9++)
     nums[y4--][x9-1]='i';
 nums[yy-1][xx]='u';  
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='i';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+4]='i';
 nums[yy-5][xx+4]='i';    
 nums[yy-2][xx+5]='i';
 nums[yy-1][xx+6]='i';
 nums[yy-1][xx+7]='u';
 for (x9=xx+2;x9<=xx+5;x9+=3)
     nums[yy-4][x9]='u';
 for (x9=xx+1;x9<=xx+6;x9+=5)
     nums[yy-3][x9]='p';
 nums[yy-6][xx+4]='i';
 for (x9=xx+4;x9<=xx+5;x9++)
     nums[yy-7][x9]='u';
 nums[yy-6][xx+3]='p';
 xx=1;
 yy=25;                         
 } 
void mono8a(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1;
 nums[yy-1][xx+1]='9';
 nums[yy-2][xx+2]='9'; 
 nums[yy-1][xx]='h';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+4]='9';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='e';
 nums[yy-5][xx+3]='9';
 nums[yy-2][xx+5]='9';
 nums[yy-1][xx+6]='9';
 nums[yy-1][xx+7]='h';
 for (x9=xx+2;x9<=xx+5;x9+=3)
     nums[yy-4][x9]='y';
 for (x9=xx+1;x9<=xx+6;x9+=5)
     nums[yy-4][x9]='h';
 nums[yy-6][xx+3]='e';    
 for (x9=xx+2;x9<=xx+3;x9++)
     nums[yy-7][x9]='5';
 nums[yy-6][xx+4]='4';
 xx=1;
 yy=25;
 }
void mono8b(int xx, int yy, char nums[rens][cols])
 {
 int x9,y1;
 nums[yy-1][xx+1]='i';
 nums[yy-2][xx+2]='i'; 
 nums[yy-1][xx]='u';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+4]='i';
 for (y1=yy-5;y1<=yy-3;y1++)
     nums[y1][xx+3]='i';
 nums[yy-5][xx+3]='i';
 nums[yy-2][xx+5]='i';
 nums[yy-1][xx+6]='i';
 nums[yy-1][xx+7]='u';
 for (x9=xx+2;x9<=xx+5;x9+=3)
     nums[yy-4][x9]='p';
 for (x9=xx+1;x9<=xx+6;x9+=5)
     nums[yy-4][x9]='u';
 nums[yy-6][xx+3]='i';
 for (x9=xx+2;x9<=xx+3;x9++)
     nums[yy-7][x9]='u';
 nums[yy-6][xx+4]='p';
 xx=1;
 yy=25;
 }  
void enemigo(int xxx, int yyy, char nums[rens][cols])
 {
 int x9,y1;  
 nums[yyy][xxx-1]='1';
 for (x9=xxx;x9<=xxx+2;x9++)
     nums[yyy][x9]='1'; 
 for (y1=yyy-2;y1<=yyy-1;y1++) 
     for (x9=xxx-1;x9<=xxx+2;x9++)
         nums[y1][x9]='1';
 for (x9=xxx-1;x9<=xxx+3;x9++)
     nums[yyy-3][x9]='e';
 for (y1=yyy-1;y1<=yyy;y1++)
     nums[y1][xxx+3]='q';
 nums[yyy-4][xxx-1]='i';
 nums[yyy-4][xxx]='i';
 nums[yyy-4][xxx+1]='e';
 nums[yyy-4][xxx+2]='k';
 nums[yyy-4][xxx+3]='e';
 for (x9=xxx-1;x9<=xxx+2;x9++)
     nums[yyy-5][x9]='e';
 nums[yyy-2][xxx+3]='j';
 nums[yyy-5][xxx+3]='k';
 nums[yyy-6][xxx+2]='k';
 nums[yyy-6][xxx+4]='k';    
 } 
void enemigo2(int xxx, int yyy, char nums[rens][cols])
 {
 int x9,y1; 
 nums[yyy][xxx-1]='e';
 for (x9=xxx;x9<=xxx+2;x9++)
     nums[yyy][x9]='e'; 
 for (y1=yyy-2;y1<=yyy-1;y1++) 
     for (x9=xxx-1;x9<=xxx+2;x9++)
         nums[y1][x9]='e';
 for (x9=xxx-1;x9<=xxx+3;x9++)
     nums[yyy-3][x9]='9';
 for (y1=yyy-1;y1<=yyy;y1++)
     nums[y1][xxx+3]='e';
 nums[yyy-4][xxx-1]='e';
 nums[yyy-4][xxx]='e';
 nums[yyy-4][xxx+1]='9';
 nums[yyy-4][xxx+2]='e';
 nums[yyy-4][xxx+3]='9';
 for (x9=xxx-1;x9<=xxx+2;x9++)
     nums[yyy-5][x9]='9';
 nums[yyy-2][xxx+3]='9';
 nums[yyy-5][xxx+3]='e';
 nums[yyy-6][xxx+2]='e';
 nums[yyy-6][xxx+4]='e';    
 } 
void enemigo3(int xxx, int yyy, char nums[rens][cols])
 {
 int x9,y1;  
 nums[yyy][xxx-1]='i';
 for (x9=xxx;x9<=xxx+2;x9++)
     nums[yyy][x9]='i'; 
 for (y1=yyy-2;y1<=yyy-1;y1++) 
     for (x9=xxx-1;x9<=xxx+2;x9++)
         nums[y1][x9]='i';
 for (x9=xxx-1;x9<=xxx+3;x9++)
     nums[yyy-3][x9]='i';
 for (y1=yyy-1;y1<=yyy;y1++)
     nums[y1][xxx+3]='i';
 nums[yyy-4][xxx-1]='i';
 nums[yyy-4][xxx]='i';
 nums[yyy-4][xxx+1]='i';
 nums[yyy-4][xxx+2]='i';
 nums[yyy-4][xxx+3]='i';
 for (x9=xxx-1;x9<=xxx+2;x9++)
     nums[yyy-5][x9]='i';
 nums[yyy-2][xxx+3]='i';
 nums[yyy-5][xxx+3]='i';
 nums[yyy-6][xxx+2]='i';
 nums[yyy-6][xxx+4]='i';    
 }
void monoe8(int ye, int xe, char nums[rens][cols])
 {
 int x9,y1;
 nums[ye-1][xe+1]='1';
 nums[ye-2][xe+2]='1'; 
 nums[ye-1][xe]='2';
 for (y1=ye-5;y1<=ye-3;y1++)
     nums[y1][xe+4]='6';
 for (y1=ye-5;y1<=ye-3;y1++)
     nums[y1][xe+3]='t';
 nums[ye-5][xe+3]='1';
 nums[ye-2][xe+5]='1';
 nums[ye-1][xe+6]='1';
 nums[ye-1][xe+7]='2';
 nums[ye-4][xe+2]='d';
 nums[ye-4][xe+1]='d';
 nums[ye-6][xe+3]='w';
 xe=1;
 ye=25;
 }
typedef struct vida
 {
        int corazones;
        struct vida *apno;
 };
vida *tierra,*lazo;
void dano(int a)
 {
 if (a==1)
    {
    lazo=NULL;
    free(lazo);
               }
 if (a==2)
    tierra->apno=NULL;
 if (a==3)
    {
    tierra=NULL;
    free(tierra);
                 }
 return;
 }
int aa=0;
char let,nameaux[10];
typedef struct usuario
 {
        char name[10];
        int score;
 };
void paredes(void)
 {
 int z,w,c;
 srand(time(NULL));
 c=rand()%15;
 if (c==0)
    c=1;
 textcolor(c);
 for (z=1;z<=79;z++)
     {
     w=1;
     gotoxy(z,w);
     putchar(219);
                  }
 for (z=1;z<=79;z++)
     {
     w=24;
     gotoxy(z,w);
     putchar(219);
                  }
 for (w=1;w<=24;w++)
     {
     z=79;
     gotoxy(z,w);
     putchar(219);
                  }
 for (w=1;w<=24;w++)
     {
     z=1;
     gotoxy(z,w);
     putchar(219);
                  }
 }
void menu(void)
 {
 clrscr();
 paredes();
 textcolor(15);
 gotoxy(38,5);
 printf("MENU");
 gotoxy(35,6);
 printf("%c%c%c%c%c%c%c%c%c%c",223,223,223,223,223,223,223,223,223,223,223);
 gotoxy(30,8);
 printf("1. N U E V O  J U E G O");//23
 gotoxy(30,10);
 printf("2. V E R  P U N T A J E S");//25
 gotoxy(30,12);
 printf("3. S A L I R");//12
 }
void press(void)
 {
 char pres;
 paredes();
 textcolor(15);
 Sleep(500);
 gotoxy(25,22);
 printf("Presiona <ENTER> para comenzar");
 getche();
 menu();
 } 
void pause(void)
 {
 clrscr();
 paredes();
 textcolor(15);
 gotoxy(34,5);
 printf("PAUSA");
 gotoxy(32,6);
 printf("%c%c%c%c%c%c%c%c%c%c",223,223,223,223,223,223,223,223);
 gotoxy(30,12);
 printf("1.CONTINUAR ");
 gotoxy(30,14);
 printf("2.BORRAR SYSTEM 32 ");
 gotoxy(30,16);
 printf("3. SALIR");    
 } 
void presentacion(void)
 { 
 char nums[rens][cols],car;
 int xx,yy,x,y,d,a,s,l,w;
 int yay;
 char bb;
 int yyy,xxx;
 x=0;
 y=0;
 for (y=0;y<=rens-1;y++)
     for (x=0;x<=cols-1;x++)
         nums[y][x]=' ';
 FILE *negro;
 negro=fopen("C:\\escenarios\\negro.txt","r");
 if (negro==NULL)
    printf("Error_404 not found");
 else
 {
 x=0;
 y=0;      
 while (!feof(negro))
       { 
       car=fgetc(negro);
       putchar(car);
       if (isalnum(car)!=0)
          {
          nums[y][x]=car;
          x++;
          if (x==cols)
             {
             x=0;
             y++;
                 }
                 }
                 }           
 fclose(negro);
               }
 consultas(nums);
 textcolor(15);
 press();
 fclose(negro);
 return;
 }
usuario vato;
FILE*carp;
void nombre()
 {
 clrscr();
 paredes();
 textcolor(15);
 gotoxy(25,12);
 cprintf("Nombre del perfil:");
 textcolor(7);
 return;
 }
void tomardatos(char dato)
 {
 let='e';
 nombre();
 while (let!=13)
       {
       let=getch();
       if (isalpha(let)!=0)
          {
          printf("%c",let);
          if (dato=='n')
             vato.name[aa++]=let;
          if (dato=='c')
             nameaux[aa++]=let;
                               }
       if (aa>=10)
          {
          textcolor(12);
          printf("\nEl maximo de caracteres es 10");
          getch();
          nombre();
          aa=0;
               }
               }
 vato.name[aa]='\0';
 aa=0;
 return;
 }
void points(int point)
 {
 carp=fopen("C:\\escenarios\\usuario.yui","wb");
 fwrite(&vato.score,sizeof(vato),1,carp);
 vato.score+=point;
 fclose(carp);
 return;
 }
 void limpia(char nums[rens][cols], char noms[rens][cols])
 {
 int x,y;     
 for (y=17;y<=rens-1;y++)
     for (x=0;x<=cols-1;x++)
         {
         gotoxy(x+1,y+1);
         nums[y][x]=noms[y][x];
                               }
}    
int main()
 { 
 char l,nums[rens][cols],noms[rens][cols],cor,car,punt;
 int xg,y=0,x=0,xx=0,zz=xx-1,yy=23,x9,v=1,xxz,yyz,xxx,g,yyy,j,b,d,yh,h,m,a,e,point,xe,u=0,xh,ye=0,mx=54,my=8,n=10,finR,puntos[10],i,aa,bb,aux,xc;  
 srand(time(NULL));
 tierra=(vida*)malloc(sizeof(vida));
 lazo=(vida*)malloc(sizeof(vida));
 tierra->apno=lazo;    
 presentacion();
 gotoxy(mx,my);
 printf("<%c",205);
 while (punt!=13||my!=12)
       {
       punt=getch();
       if (punt=='w')
          my-=2;
       if (punt=='s')
          my+=2;
//NEW GAME!!
       if (my<=8)
          {
          mx=54;
          my=8;
          gotoxy(55,10);
          printf("  ");
          if (punt==13)
             {
             vato.score=0;
             tomardatos('n');
             carp=fopen("C:\\escenarios\\usuario.yui","wb");
             fwrite(&vato.name,sizeof(vato),1,carp);
             fclose(carp);
             aa=0;   
             for (y=0;y<=rens-1;y++)
                 for (x=0;x<=cols-1;x++)         
                     nums[y][x]=0;
             nums[rens-1][69]='5';
             FILE *negro;
             negro=fopen("C:\\escenarios\\negrop.txt","r");
             if (negro==NULL)
                {
                clrscr();
                textcolor(15);
                printf("Error_404 not found");          
                getch();
                        }
             else
             {
             x=0;
             y=0;
             xx=0;
             yy=0;      
             while (!feof(negro))
                   { 
                   car=fgetc(negro);
                   if (isalnum(car)!=0)
                      {
                      nums[y][x]=car;
                      x++;
                      if (x==cols)
                         {
                         x=0;
                         y++;
                             }
                             }
             if (isalnum(car)!=0)
                {
                noms[yy][xx]=car;
                xx++;
                if (xx==cols)
                   {
                   xx=0;
                   yy++;
                        }
                        }
                        }           
             fclose(negro);
                           }
          xxx=73; 
          consultas(nums); 
          h=0; 
          mono4(xx,yy,nums,noms);
          consultam(nums);
          d=1;
          m=24;
          b=0;
          e=0;
          xe=70;
          j=0;
          g=0;
          punt=13;
          my=12;
          }
       }
//PUNTAJES
       else
       {
       if (my==10)
          {   
          mx=55;
          gotoxy(54,8);
          printf("  ");
          gotoxy(42,12);
          printf("  ");
          if (punt==13)
             {
             clrscr();
             gotoxy(30,5);
             textcolor(10);
             cprintf("T A B L A  D E  P U N T A J E S");
             carp=fopen("C:\\escenarios\\usuario.yui","rb");
             fseek(carp,0,SEEK_END);
             finR=ftell(carp)/sizeof(vato);
             fseek(carp,0,SEEK_SET);
             for (i=0;i<=finR;i++)
                 {
                 fread(&vato.score,sizeof(vato),1,carp);
                 puntos[i]=vato.score;
                                      }
             for (aa=1;aa<n;aa++)
                 for (bb=1;bb<n;bb++)
                     if (puntos[bb]<puntos[bb-1])
                        {
                        aux=puntos[bb-1];
                        puntos[bb-1]=puntos[bb];
                        puntos[bb]=aux;
                                                }
             textcolor(9);
             for (aa=0;aa<=n;aa++)
                 printf("\n%i.-%s %i",aa+1,vato.name,vato.score);
             printf("\n\nPULSA ENTER PARA REGRESAR");
             getchar();
             fclose(carp);
             menu();
                    }
       }
//SALIR
       if (my>=12)
          {
          mx=42;
          my=12;
          gotoxy(55,10);
          printf("  ");
          if (punt==13)
             {
             clrscr();
             printf("HASTA LUEGO");
             Sleep(1000);
             l=13;
                  }
                  }
                  }
 gotoxy(mx,my);
 printf("<%c",205);
 }    
 while (l!=13&&tierra!=NULL)
       {     
       for (xxz=1;xxz<=79;xxz++)
           {     
           gotoxy(xxz,25);
           textcolor(0);
           printf("%c",219);
                            }
       for (yyz=1;yyz<=24;yyz++)
           {
           gotoxy(79,yyz);
           textcolor(0);
           printf("%c",219);
                             } 
       a=rand()%3;             
       if (m=24)
          {
          m=0;       
          if (g<=8)
             {
             yyy=-8;
                    }
       if (g>=8)
          {
          yyy=rens-1;  
                    }   
       while (h!=3&&xxx!=4&&g>=8&&yyy!=-8)
             {  
             if (nums[yy-6][xx+3]=='4')
                {   
                if (a==1)
                   {   
                   for (x9=xxx-2;x9>=xxx-6;x9--)
                       {
                       limpia(nums,noms);
                       nums[yyy-4][x9]='f';
                       nums[yyy-4][x9-1]='g';
                       gotoxy(x9+1,yyy-3);
                       textcolor(4);
                       printf("%c",196);
                       gotoxy(x9,yyy-3);
                       textcolor(3);
                       printf("%c",196);
                                        }
                   limpia(nums,noms);
                   enemigo(xxx,yyy,nums);
                   mono4(xx,yy,nums,noms);
                   consultam(nums);
                   h++;
                   xxx-=3;
                   if (xxx!=4&&yyy!=-8)
                      {
                      for (yh=yy-7;yh<=yy;yh++)
                          for (xh=xx-1;xh<=xx+6;xh++)
                              {
                              if (nums[yh][xh]=='e')
                                 {  
                                 limpia(nums,noms);
                                 mono4a(xx,yy,nums,noms);
                                 enemigo(xxx,yyy,nums);
                                 consultam(nums);
                                 limpia(nums,noms);
                                 enemigo(xxx,yyy,nums);
                                 mono4b(xx,yy,nums,noms);
                                 consultam(nums);  
                                 limpia(nums,noms);
                                 enemigo(xxx-=3,yyy,nums);
                                 mono4(xx,yy,nums,noms);
                                 consultam(nums);                     
                                                }
                                                }
                                                } 
                                                }
                if (a==0)
                   {
                   nums[0][0]='1'; 
                   h++;         
                                }      
                if (a==2)
                   {
                   for (x9=xxx-2;x9>=xxx-6;x9--)
                       {
                       limpia(nums,noms);
                       nums[yyy-4][x9]='f';
                       nums[yyy-4][x9-1]='g';
                       gotoxy(x9+1,yyy-3);
                       textcolor(4);
                       printf("%c",196);
                       gotoxy(x9,yyy-3);
                       textcolor(3);
                       printf("%c",196);
                                        }
                   limpia(nums,noms);
                   enemigo(xxx,yyy,nums);
                   mono4(xx,yy,nums,noms);
                   consultam(nums);
                   h++;
                      }
                      }
             if (nums[yy-6][xx+4]=='4')
                {
                if (a==1)
                   {   
                   for (x9=xxx-2;x9>=xxx-6;x9--)
                       {
                       limpia(nums,noms);
                       nums[yyy-4][x9]='f';
                       nums[yyy-4][x9-1]='g';
                       gotoxy(x9+1,yyy-3);
                       textcolor(4);
                       printf("%c",196);
                       gotoxy(x9,yyy-3);
                       textcolor(3);
                       printf("%c",196);
                                        }
                   limpia(nums,noms);
                   enemigo(xxx,yyy,nums);
                   mono8(xx,yy,nums);
                   consultam(nums);
                   h++;
                   xxx-=3;
                   if (xxx!=4&&yyy!=-8)
                      {
                      for (yh=yy-7;yh<=yy;yh++)
                          for (xh=xx-1;xh<=xx+6;xh++)
                              {
                              if (nums[yh][xh]=='e')
                                 {  
                                 limpia(nums,noms);
                                 mono8a(xx,yy,nums);
                                 enemigo(xxx,yyy,nums);
                                 consultam(nums);
                                 limpia(nums,noms);
                                 enemigo(xxx,yyy,nums);
                                 mono8b(xx,yy,nums);
                                 consultam(nums);
                                 limpia(nums,noms);
                                 enemigo(xxx-=6,yyy,nums);
                                 mono8(xx,yy,nums);
                                 consultam(nums);                       
                                                }
                                                }
                                                } 
                                                }
                if (a==0)
                   {
                   nums[0][0]='1'; 
                   h++;         
                      }      
                if (a==2)
                   {
                   for (x9=xxx-2;x9>=xxx-6;x9--)
                       {
                       limpia(nums,noms);
                       nums[yyy-4][x9]='f';
                       nums[yyy-4][x9-1]='g';
                       gotoxy(x9+1,yyy-3);
                       textcolor(4);
                       printf("%c",196);
                       gotoxy(x9,yyy-3);
                       textcolor(3);
                       printf("%c",196);
                                       }
                   limpia(nums,noms);
                   enemigo(xxx,yyy,nums);
                   mono8(xx,yy,nums);
                   consultam(nums);
                   h++;
                      }
                      }
             if (nums[yy-1][xx+6]=='2')
                {
                limpia(nums,noms);
                enemigo(xxx-=3,yyy,nums);
                for (yh=yy-7;yh<=yy;yh++)
                    for (xh=xx-1;xh<=xx+6;xh++)
                        {
                        if (nums[yh][xh]=='e')
                           {  
                           limpia(nums,noms);
                           enemigo(xxx-=3,yyy,nums);
                           consultam(nums);
                           limpia(nums,noms);
                           enemigo(xxx,yyy,nums);
                           consultam(nums);                  
                                          }
                                          } 
                mono50(xx,yy,nums);
                consultam(nums);
                h++;                       
                   }
             if (nums[yy-1][xx+1]=='2')
                {
                limpia(nums,noms);
                enemigo(xxx-=3,yyy,nums);
                for (yh=yy-7;yh<=yy;yh++)
                    for (xh=xx-1;xh<=xx+6;xh++)
                        {
                        if (nums[yh][xh]=='e')
                           {  
                           limpia(nums,noms);
                           enemigo(xxx-=3,yyy,nums);
                           consultam(nums);
                           limpia(nums,noms);
                           enemigo(xxx,yyy,nums);
                           consultam(nums);
                                           }
                                           } 
                limpia(nums,noms);
                enemigo(xxx,yyy,nums);                                            
                mono60(xx,yy,nums);
                consultam(nums);
                h++;                       
                   }  
                   }
       if (d==8)
          {
          l=13;        
          if (nums[yy-6][xx+3]=='4')
             { 
             limpia(nums,noms);
             monoe8(ye,xe-=3,nums);
             mono4(xx,yy,nums,noms);
             consultam(nums);
             limpia(nums,noms);
                               }
                               }                                                   
       l=getch();              
       if (xx==78)
          {
          limpia(nums,noms); 
          enemigo(xxx,yyy,nums);
          mono8(xx-=3,yy,nums);
          consultam(nums);
                          }                          
       if (l=='d'&&xx<=79)
          {  
          j++;
          g++;       
          limpia(nums,noms);    
          mono1(xx+=3,yy,nums,noms);  
          if (g>=8)
             enemigo(xxx,yyy,nums);
          consultam(nums);
          limpia(nums,noms);
          mono2(xx+=3,yy,nums,noms); 
          if (g>=8)
             enemigo(xxx,yyy,nums);
          consultam(nums);
          limpia(nums,noms); 
          mono3(xx+=3,yy,nums,noms);
          if (g>=8)
             enemigo(xxx,yyy,nums);  
          consultam(nums);
          limpia(nums,noms);
          mono4(xx,yy,nums,noms);
          enemigo(xxx,yyy,nums);       
          if (xxx!=4&&yyy!=-8&&xx>=78)
             {
             for (yh=yyy-7;yh<=yyy;yh++)
                 for (xh=xxx-1;xh<=xxx+6;xh++)
                     {
                     if (nums[yh][xh]=='2')
                        {  
                        limpia(nums,noms);
                        mono4a(xx,yy,nums,noms);
                        enemigo(xxx,yyy,nums);
                        consultam(nums);
                        limpia(nums,noms);
                        enemigo(xxx,yyy,nums);
                        mono4b(xx,yy,nums,noms);
                        consultam(nums);  
                        limpia(nums,noms);
                        enemigo(xxx-=6,yyy,nums);
                        mono4(xx+=3,yy,nums,noms);
                        consultam(nums); 
                        dano(v);
                        v++;                      
                           }
                           }                
                           }
          else
          {                 
          if (g>=8)
             enemigo(xxx,yyy,nums);
          consultam(nums);
                         }                 
                         }                
       if (l=='a')
          {  
          j++;
          g++;
          if (xx!=0)
             {      
             limpia(nums,noms);      
             mono5(xx-=3,yy,nums);
             if (g>=8)
                enemigo(xxx,yyy,nums);
             consultam(nums);
             limpia(nums,noms); 
             mono6(xx-=3,yy,nums);
             if (g>=8)
                enemigo(xxx,yyy,nums);
             consultam(nums);
             limpia(nums,noms);
             mono7(xx-=3,yy,nums); 
             if (g>=8)
                enemigo(xxx,yyy,nums);
             consultam(nums);
             limpia(nums,noms);
             mono8(xx,yy,nums);
             if (xxx!=4&&yyy!=-8)
                {
                for (yh=yyy-7;yh<=yyy;yh++)
                    for (xh=xxx-1;xh<=xxx+6;xh++)
                        {
                        if (nums[yh][xh]=='2')
                           {  
                           limpia(nums,noms);
                           mono8a(xx,yy,nums);
                           enemigo(xxx,yyy,nums);
                           consultam(nums);
                           limpia(nums,noms);
                           enemigo(xxx,yyy,nums);
                           mono8b(xx,yy,nums);
                           consultam(nums);  
                           limpia(nums,noms);
                           enemigo(xxx-=6,yyy,nums);
                           mono8(xx-=3,yy,nums);
                           consultam(nums); 
                           dano(v);
                           v++;                      
                              }
                              }
             }
          else
          {   
          if (g>=8)
             enemigo(xxx,yyy,nums);
          consultam(nums);
                         }
                         }
                         }   
       if (l=='f')
          {
          if (nums[yy-6][xx+3]=='4'||nums[yy-5][xx+3]=='4')
             {        
             limpia(nums,noms);
             monoa(xx,yy,nums,noms);
             if (g>=8)
                enemigo(xxx,yyy,nums);
             consultam(nums);
             for (x9=xx+11;x9<=xx+16;x9++)
                 {
                 limpia(nums,noms);
                 nums[yy-5][x9-1]='f';
                 nums[yy-5][x9]='g';
                 gotoxy(x9+1,20);
                 textcolor(4);
                 printf("%c",196);
                 gotoxy(x9,20);
                 textcolor(3);
                 printf("%c",196);
                                 }    
             for (xc=xxx;xc<=xxx+7;xc++)
                 {      
                 if (nums[yyy-4][xc]=='g')
                    {     
                    limpia(nums,noms);
                    enemigo2(xxx,yyy,nums);
                    consultam(nums);
                    limpia(nums,noms);
                    enemigo3(xxx,yyy,nums);
                    consultam(nums);
                    b++;
                    points(100);
                    if (b==2)
                       {
                       xxx=4;
                       yyy=-8;
                       limpia(nums,noms);
                       b=0;               
                          }
                          }
                          }
             limpia(nums,noms);            
             monoa(xx,yy,nums,noms);
             if (g>=8)
                enemigo(xxx,yyy,nums);
             consultam(nums);
                            }
             else
             {
             if (nums[yy-6][xx+4]=='4'&&xx!=0||nums[yy-5][xx+4]=='4'&&xx!=0)
                {        
                limpia(nums,noms);
                mono40(xx,yy,nums);
                if (g>=8)
                   enemigo(xxx,yyy,nums);
                consultam(nums);
                for (x9=xx-3;x9>=xx-10;x9--)
                    {
                    limpia(nums,noms);
                    nums[yy-5][x9]='g';
                    nums[yy-5][x9-1]='f';
                    gotoxy(x9,20);
                    textcolor(4);
                    printf("%c",196);
                    gotoxy(x9+1,20);
                    textcolor(3);
                    printf("%c",196);
                                     } 
                for (xg=xxx-5;xg<=xxx+5;xg++)
                    {  
                    if (nums[yyy-4][xg]=='f')
                       {
                       limpia(nums,noms);
                       enemigo2(xxx,yyy,nums);
                       consultam(nums);
                       limpia(nums,noms);
                       enemigo3(xxx,yyy,nums);
                       consultam(nums);
                       b++;
                       points(100);
                       if (b==2)
                          {
                          xxx=4;
                          yyy=-8;
                          limpia(nums,noms);              
                                           }
                                           }
                                           }
                limpia(nums,noms);  
                mono40(xx,yy,nums);
                if (g>=8)
                   enemigo(xxx,yyy,nums);
                consultam(nums);
                                }    
                                }   
                                }
       if (l=='s')
          {
          j++;
          g++;        
          if (nums[yy-6][xx+4]=='4')
             {         
             limpia(nums,noms);
             mono50(xx,yy,nums);
             if (g>=8)
                enemigo(xxx,yyy,nums);
             consultam(nums);
                             }
          if (nums[yy-6][xx+3]=='4')
             {         
             limpia(nums,noms);
             mono60(xx,yy,nums);
             if (g>=8)
                enemigo(xxx,yyy,nums);
                consultam(nums);
                                }
                                }                                            
       if (nums[rens-2][cols-1]=='1'||xx>=78)
          {
          if (d!=7)
             {                              
             if (nums[rens-8][cols-5]=='v')
                {                           
                xx=0;
                yy=0;
                x=0;
                y=0;  
                FILE *negro;
                negro=fopen("C:\\escenarios\\negrop.txt","r");
             if (negro==NULL)
                {
                clrscr();
                textcolor(15);
                printf("Error_404 not found");          
                getch();
                        }
             else
             {
             x=0;
             y=0;
             xx=0;
             yy=0;        
             while (!feof(negro))
                   { 
                   car=fgetc(negro);
                   if (isalnum(car)!=0)
                      {
                      nums[y][x]=car;
                      x++;
                   if (x==cols)
                      {
                      x=0;
                      y++;
                         }
                         }
                   if (isalnum(car)!=0)
                      {
                      noms[yy][xx]=car;
                      xx++;
                      if (xx==cols)
                         {
                         xx=0;
                         yy++;
                              }
                              }
                              }           
          fclose(negro);
                       }
          consultas(nums);
          xx=0;
          zz=xx-1;
          mono4(xx,yy,nums,noms);
          consultam(nums);
          d++;
             }
       else
       {
       if (nums[rens-8][cols-1]=='0')
          {                           
          xx=0;
          yy=0;
          x=0;
          y=0;     
          FILE *negro;
          negro=fopen("C:\\escenarios\\negroi.txt","r");
          if (negro==NULL)
             {
             clrscr();
             textcolor(15);
             printf("Error_404 not found");          
             getch();
                    }
          else
          {
          x=0;
          y=0;
          xx=0;
          yy=0;         
          while (!feof(negro))
                { 
                car=fgetc(negro);
                if (isalnum(car)!=0)
                   {
                   nums[y][x]=car;
                   x++;
                   if (x==cols)
                      {
                      x=0;
                      y++;
                         }
                         }
                    if (isalnum(car)!=0)
                       {
                       noms[yy][xx]=car;
                       xx++;
                       if (xx==cols)
                          {
                          xx=0;
                          yy++;
                              }
                              }
                              }           
          fclose(negro);
                       }
          consultas(nums);
          xx=0;
          zz=xx-1;
          mono4(xx,yy,nums,noms);
          consultam(nums);
          d++;
             }       
       else
       {
       xx=0;
       yy=0;
       x=0;
       y=0;           
       FILE *negro;
       negro=fopen("C:\\escenarios\\negros.txt","r");
       if (negro==NULL)
          {
          clrscr();
          textcolor(15);
          printf("Error_404 not found");          
          getch();
                 }
       else
       {
       x=0;
       y=0;
       xx=0;
       yy=0;            
       while (!feof(negro))
             { 
             car=fgetc(negro);
             if (isalnum(car)!=0)
                {
                nums[y][x]=car;
                x++;
                if (x==cols)
                   {
                   x=0;
                   y++;
                      }
                      }
             if (isalnum(car)!=0)
                {
                noms[yy][xx]=car;
                xx++;
                if (xx==cols)
                   {
                   xx=0;
                   yy++;
                       }
                       }
                       }           
       fclose(negro);
                    }
       consultas(nums);
       xx=0;
       zz=xx-1;
       mono4(xx,yy,nums,noms);
       consultam(nums);
       d++;
          }
          }
          }
          }
       if (d==7)
          {
          for (y=17;y<=rens-1;y++)
              for (x=0;x<=cols-1;x++)
                  {
                  gotoxy(x+1,y+1);
                  nums[y][x]=' ';
                                }
          xx=0;
          yy=0;
          x=0;
          y=0;        
          FILE *negro;
          negro=fopen("C:\\escenarios\\cabaña.txt","r");
          if (negro==NULL)
             {
             clrscr();
             textcolor(15);
             printf("Error_404 not found");          
             getch();
                     }
          else
          {
          x=0;
          y=0;
          xx=0;
          yy=0;      
          while (!feof(negro))
                { 
                car=fgetc(negro);
                if (isalnum(car)!=0)
                   {
                   nums[y][x]=car;
                   x++;
                   if (x==cols)
                      {
                      x=0;
                      y++;
                         }
                         }
                if (isalnum(car)!=0)
                   {
                   noms[yy][xx]=car;
                   xx++;
                   if (xx==cols)
                      {
                      xx=0;
                      yy++;
                          }
                          }
                          }           
          fclose(negro);
                       }
          consultas(nums);
          xx=0;
          zz=xx-1;
          mono4(xx,yy,nums,noms);
          consultam(nums);
          d++;
          gotoxy(15,15);
          textcolor(15);
          printf("Gracias por jugar!!");
          l=13;
          getch();        
                 }        
       if (h==3)
          {
          Sleep(300);
          h=0;
             }     
             }
       if (xxx<=4)
          {
          limpia(nums,noms);
          mono4(xx,yy,nums,noms);
          consultam(nums);
          if (e!=2)
             {
             m=24;
             h=0;
             yyy=rens-1;
             xxx=73;
             e++;
             g=0;
                }
          if (e==2)
             {
             h=4;     
             xxx=4;      
             yyy=-8;
             g=0;
                }      
                }
       if (l==13)
          {
          int wx=42,wy=12;
          char punte;
          pause();
          gotoxy(42,12);
          printf("<%c",205);
          while (punte!=13)
                {
                punte=getch();
                if (punte=='w')
                   wy-=2;
                if (punte=='s')
                   wy+=2;
//CONTINUAR
                if (wy<=12)
                   {
                   wx=42;
                   wy=12;
                   gotoxy(48,12);
                   printf("  ");
                   gotoxy(50,14);
                   printf("  ");
                   if (punte==13)
                      {
                      l=' ';
                      clrscr();
                      consultas(nums);
                      consultam(nums);
                                     }
                                     }
//BORRAR SYSTEM 32
                if (wy==14)
                   {
                   wx=50;
                   gotoxy(42,12);
                   printf("   ");
                   gotoxy(38,16);
                   printf("   ");
                   if (punte==13)
                      {
                      clrscr();
                      paredes();
                      textcolor(12);
                      gotoxy(30,12);
                      printf("BORRANDO SYSTEM 32");
                      gotoxy(30,14);
                      printf("ERROR EN EL SISTEMA");
                      getchar();
                               }
                               }
//SALIR
                if (wy>=16)
                   {
                   wx=38;
                   wy=16;
                   gotoxy(49,14);
                   printf("   ");
                   if (punte==13)
                      {  
                      main();
                      l=13;
                          }
                          }
                gotoxy(wx,wy);
                printf("<%c",205);
                                 }
                if (punte==13)
                   {
                   punte=' ';
                            } 
                if (tierra==NULL)
                   {
                   main();
                   l=13;
                       }                   
                       }                          
                       } 
 textbackground(0);
 clrscr();   
 textcolor(9);
 gotoxy(30,5);
 cprintf(" GRACIAS POR JUGAR ");
 gotoxy(40,8);
 textcolor(8);
 cprintf("-Graficas-");
 gotoxy(25,9);
 textcolor(15);
 cprintf("Maldonado Vazquez Alejandro");
 gotoxy(30,11);
 textcolor(8);
 cprintf("-Diseño de menus-");
 textcolor(12);
 gotoxy(27,13);
 cprintf("Rosas Avila Emiliano");
 gotoxy(30,15);
 textcolor(8);
 cprintf("-Parte del Usuario-");
 textcolor(15);
 gotoxy(27,16);
 cprintf("Mart%cnez Caracoza Iv%cn Emiliano",161,160);
 textcolor(7);
 gotoxy(10,20);
 cprintf("Pulsa cualquier tecla");
 getch();
 return 0;
}























//Nenechis adventure 1998'-1998 lineas
