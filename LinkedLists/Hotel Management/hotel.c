#include<stdio.h>
#include<conio.h>
#include<math.h>
struct node
{
   int no,age,code,days;
   string name;
   string nat;
   string add;
   string gend;
   string mail;
   string choice;
   struct node *next;
};
struct node *head,*x,*y;
void book();
void cancel();
void search();
int calc(int,int);
int i=1,j=1;
void main()
{
       int a;
      clrscr();
printf("********************************************************************************\n");
printf("*                                                                              *\n");
printf("*                                  WELCOME                                     *\n");
printf("*                                  TO THE                                      *\n");
printf("*                                 ENDYMION                                     *\n");
printf("*                                GUEST HOUSE                                   *\n");
printf("*                                                                              *\n");
printf("********************************************************************************\n");
printf("----------------------------------------------------------------------------------------------\n");
printf("                                    MAIN MENU                                                 \n");
printf("We extend you a warm welcome and wish you a enjoyable ,refreshing and cozy stay with us\n");
do
{
              printf("ENTER A OPTION\n");
               printf("1- BOOK A HOTEL ROOM \n");
               printf("2- RESERVE A TABLE AT CASABLANCA\n");
               printf("3- FIND YOUR RESERVATION\n");
               printf("4- CANCEL BOOKING \n");
               printf("5- EXIT\n");
               scanf("%d",&a);
          if(a==1)
           book();
           i++;
          if(a==2)
           reserve();
            j++
          if(a==3)
           search();
          if(a==4)
           cancel();
         if(a==5)
            break;
}while(a!=5);
printf("--------------------------------------------------------------------------------------------------------------\n");
printf("                                           THANK YOU FOR CHOOSING OUR SERVICES                                \n");
getch();
}
void book()
{
      int b,m;
if(i<=60)
{
     y=(struct node*)malloc(sizeof(struct node));
     (*y).code=i;
     printf("YOUR BOOKING ID IS %d\n",(*y).code);
     do
   {
        printf("ENTER YOUR ROOM CHOICE\n");
         printf("1- BUDGET\n");
          printf("2- ECONOMICAL\n");
           printf("3- DELUXE (INCLUDES AC ROOM)\n");
          printf("4- PRESEDENTIAL (INCLUDES AC ROOM + BREAKFAST COMPLIMENTARY)\n");
         printf("5- EXIT\n");
             scanf("%d",&b);
    if(b==1)
{
              prinf("ENTER YOUR NAME:\n");
            gets((*y).name);
               prinf("ENTER YOUR AGE:\n");
            scanf("%d",&((*y).age);
               prinf("ENTER YOUR CONTACT NUMBER:\n");
            scanf("%d",&((*y).no));
               prinf("ENTER YOUR NATIONALITY:\n");
           scanf("%s",&((*y).nat));
                prinf(" ENTER YOUR ADDRESS:\n");
            gets((*y).add);
               prinf("ENTER YOUR GENDER\n");
           scanf("%s",&((*y).gend));
               prinf("ENTER YOUR EMAIL\n");
         gets((*y).mail);
                prinf("ENTER YOUR ROOM CHOICE\n");
          gets((*y).choice);
                prinf("ENTER NUMBER OF DAYS OF STAY\n");
            scanf("%d",&((*y).days));
        m=(*y).days; 
       calc(b,m);
}
    if(b==2)
{
              prinf("ENTER YOUR NAME:\n");
            gets((*y).name);
               prinf("ENTER YOUR AGE:\n");
            scanf("%d",&((*y).age);
               prinf("ENTER YOUR CONTACT NUMBER:\n");
            scanf("%d",&((*y).no));
               prinf("ENTER YOUR NATIONALITY:\n");
           scanf("%s",&((*y).nat));
                prinf(" ENTER YOUR ADDRESS:\n");
            gets((*y).add);
               prinf("ENTER YOUR GENDER\n");
           scanf("%s",&((*y).gend));
               prinf("ENTER YOUR EMAIL\n");
         gets((*y).mail);
                prinf("ENTER YOUR ROOM CHOICE\n");
          gets((*y).choice);
                prinf("ENTER NUMBER OF DAYS OF STAY\n");
            scanf("%d",&((*y).days));
              m=(*y).days; 
       calc(b,m);
}
    if(b==3)
{
              prinf("ENTER YOUR NAME:\n");
            gets((*y).name);
               prinf("ENTER YOUR AGE:\n");
            scanf("%d",&((*y).age);
               prinf("ENTER YOUR CONTACT NUMBER:\n");
            scanf("%d",&((*y).no));
               prinf("ENTER YOUR NATIONALITY:\n");
           scanf("%s",&((*y).nat));
                prinf(" ENTER YOUR ADDRESS:\n");
            gets((*y).add);
               prinf("ENTER YOUR GENDER\n");
           scanf("%s",&((*y).gend));
               prinf("ENTER YOUR EMAIL\n");
         gets((*y).mail);
                prinf("ENTER YOUR ROOM CHOICE\n");
          gets((*y).choice);
                prinf("ENTER NUMBER OF DAYS OF STAY\n");
            scanf("%d",&((*y).days));
               m=(*y).days; 
       calc(b,m);
}
    if(b==4)
{
              prinf("ENTER YOUR NAME:\n");
            gets((*y).name);
               prinf("ENTER YOUR AGE:\n");
            scanf("%d",&((*y).age);
               prinf("ENTER YOUR CONTACT NUMBER:\n");
            scanf("%d",&((*y).no));
               prinf("ENTER YOUR NATIONALITY:\n");
           scanf("%s",&((*y).nat));
                prinf(" ENTER YOUR ADDRESS:\n");
            gets((*y).add);
               prinf("ENTER YOUR GENDER\n");
           scanf("%s",&((*y).gend));
               prinf("ENTER YOUR EMAIL\n");
         gets((*y).mail);
                prinf("ENTER YOUR ROOM CHOICE\n");
          gets((*y).choice);
                prinf("ENTER NUMBER OF DAYS OF STAY\n");
            scanf("%d",&((*y).days));
               m=(*y).days;
       calc(b,m);
}
   if(b==5)
break;
}while(b!=5);
if(head==NULL)
{ 
       (*y).next=NULL;
       head=y;
}
else
{ 
      (*y).next=head;
      head=y;
}
}
else 
{
    printf("------------------------HOTEL IS FULLY BOOKED---------------------\n");
}
}
void reserve()
{
     printf("functionality not yet available");
}
void search()
{  
      int n;
         printf("--------------ENTER YOUR BOOKING ID-------------------------------\n");
           scanf("%d",&n);
      x=head;
       while((*x).code!=n)
     {   
            x=(*x).next
      }
   if((*x).code==n)
   {    
            printf("YOU HAVE A BOOKING\n");
            printf("YOUR BOOKING DEATILS ARE\n");
            printf("NAME:%s\n",(*x).name);
            printf("CONTACT:%d\n",(*x).no);
            printf("AGE:%d\n",(*x).age);
             printf("ADDRESS:%s\n",(*x).add);
            printf("EMAIL::%s\n",(*x).mail);
            printf("ROOM CHOICE:%d\n",(*x).choice);
}
    else
{      
          printf("----------------------YOU DON'T HAVE A BOOKING----------------------------\n");
}
}
void cancel()
{        
           int o;
           char ch;
           printf("-------------------DO YOU WANT TO CANCEL THE BOOKING-----------------------\n");
           printf("Y-yes\n");
           printf("N=no\n");
           scanf("%c",&ch);
if(ch==Y)
{
           printf("------------------------ENTER BOOKING ID------------------------------------\n");
           scanf("%d",&o);
          x=head;
        while((*x).head!=o)
{    
        x=(*x).next;
}
    if((*x).head==o)
{   
    delete(x);
    printf("-------------------------------YOUR BOOKING IS SUCESSFULLY CANCELLED----------------------\n");
}  
else
{   
printf("-------------------------------YOU DON'T HAVE A BOOKING------------------------------------\n");
}
}
else 
break;
}
int calc(int e,int f)
{   
    int gst=0.18;
    int base=1000;
    int total;
    if(e==1)
   {  
      total=gst*base*10*f;
    printf("-------------------YOUR TOTAL ANMOUNT TO BE PAID AT RECEPTION-----------------------------------\n")
    printf("%d\n",total);
   }
    if(e==2)
   {  
      total=gst*base*20*f;
    printf("-------------------YOUR TOTAL ANMOUNT TO BE PAID AT RECEPTION-----------------------------------\n")
    printf("%d\n",total);
   }
     if(e==3)
   {  
      total=gst*base*50*f;
    printf("-------------------YOUR TOTAL ANMOUNT TO BE PAID AT RECEPTION-----------------------------------\n")
    printf("%d\n",total);
   }
     if(e==4)
   {  
      total=gst*base*100*f;
    printf("-------------------YOUR TOTAL ANMOUNT TO BE PAID AT RECEPTION-----------------------------------\n")
    printf("%d\n",total);
   }
}
