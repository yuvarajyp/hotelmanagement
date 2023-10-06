#include<stdio.h>
#include<conio.h>
int dosa();
int idaly();
int poori();
int pongal();
int vadai();
void main()
{
int a,t=0,ch,p,op;
clrscr();
printf("\t\t\t\tWELCOME\nToday special:\n");
loop:
printf("\t\t1-dosa\n\t\t2-idaly\n\t\t3-poori\n\t\t4-pongal\n\t\t5-vadai\n");
printf("\nSelect any food:\t");
scanf("%d",&a);
if(a==1)
{
p=dosa();
t=t+p;
printf("\nTotal amount to pay:%d",t);
printf("Do you want to continue:\n\t1-Yes\n\t2-No\n");
scanf("%d",&op);
if(op==1)
{
goto loop;
}
else
{
printf("\nThank you");
}
}
else if(a==2)
{
p=idaly();
t=t+p;
printf("\nTotal price to pay:%d\n",t);
printf("Do you want to continue\n\t1-Yes\n\t2-No\n");
scanf("%d",&op);
if(op==1)
{
goto loop;
}
else
{
printf("\nThank you");
}
}
else if(a==3)
{
p=poori();
t=t+p;
printf("\nTotal price to pay:%d\n",t);
printf("Do you want to continue\n\t1-Yes\n\t2-No\n");
scanf("%d",&op);
if(op==1)
{
goto loop;
}
else
{
printf("\nThank you");
}
}
else if(a==4)
{
p=pongal();
t=t+p;
printf("\nTotal price to pay:%d\n",t);
printf("Do you want to continue\n\t1-Yes\n\t2-No\n");
scanf("%d",&op);
if(op==1)
{
goto loop;
}
else
{
printf("\nThank you");
}
}
else if(a==5)
{
p=vadai();
t=t+p;
printf("\nTotal price to pay:%d\n",t);
printf("Do you want to continue\n\t1-Yes\n\t2-No\n");
scanf("%d",&op);
if(op==1)
{
goto loop;
}
else
{
printf("\nThank you");
}
}
else
{
printf("Invalid choice");
goto loop2;
}
loop2:
printf("Total amount to pay=%d\n",t);
printf("\nThank you");
getch();
}
int dosa()
{
int p,q;
printf("dosa = 50Rs/-\n");
printf("Enter quantity:\t");
scanf("%d",&q);
p=50*q;
return(p);
}
int idaly()
{
int p,q;
printf("idly = 15Rs/-\n");
printf("Enter quantity:\t");
scanf("%d",&q);
p=15*q;
return(p);
}
int poori()
{
int p,q;
printf("poori = 30Rs/-\n");
printf("Enter quantity:\t");
scanf("%d",&q);
p=20*q;
return(p);
}
int pongal()
{
int p,q;
printf("pongal = 40Rs/-\n");
printf("Enter quantity:\t");
scanf("%d",&q);
p=40*q;
return(p);
}
int vadai()
{
int p,q;
printf("vadai = 10Rs/-\n");
printf("Enter quantit:\t");
scanf("%d",&q);
p=10*q;
return(p);
}






