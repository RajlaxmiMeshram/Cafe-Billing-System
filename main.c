//
//  main.c
//  Billing System
//
//  Created by rajlaxmi meshram on 29/09/22.
//

#include <stdio.h>
int choise=0,b=1,q,s,d,t,c,i,s1,d1,t1,c1,i1,tBill=0;
void menu()
{
    printf("::Menu::\n");
    printf("1.Samosa 20/-\n");
    printf("2.Dosa 35/-\n");
    printf("3.tea 10/-\n");
    printf("4.coffee 50/-\n");
    printf("5.ice creem 30/-\n");
    printf("0.exit\n");
}

void quantity(int choise)
{
        switch(choise)
        {
        case 1:
        case 2:
    printf("plate =");
    break;
    case 3:
    case 4:
    printf("cups =");
    break;
        }
}

void billing(int cBill)
{
    tBill+=cBill;
}

void printBill()
{
     printf("G Total = %d\n",tBill);
}
void order()
{
     while(b)
      {
       menu();
    printf("enter choise:");
    scanf("%d",&choise);
   
  
    switch(choise)
    {
    case 1:
        printf("you have order samosa\n");
        printf("how many ");
         quantity(choise);
          scanf("%d",&s);
            s1+=s;
            printf("ok anything else........\n");
           billing(s*20);
      
          
        break;
        
    case 2:
        printf("you have order dosa\n");
        printf("how many ");
         quantity(choise);
          scanf("%d",&d);
            d1+=d;
            printf("ok anything else.......\n");
           billing(d*35);
        
        break;
    
    case 3:
        printf("you have order tea\n");
        printf("how many ");
         quantity(choise);
          scanf("%d",&t);
            t1+=t;
            printf("ok anything else......\n");
           billing(t*10);
    
          
        break;
        
    case 4:
        printf("you have order coffee\n");
        printf("how many ");
         quantity(choise);
          scanf("%d",&c);
            c1+=c;
            printf("ok anything else.....\n");
           billing(c*50);
       
         
        break;
        
    case 5:
            printf("you have order ice cream\n");
        printf("how many =");
        scanf("%d",&i);
            quantity(choise);
            i1+=i;
            printf("ok anything else......\n");
          billing(i*30);
     
        break;
        
    case 0:
        printf("exit\n");
       b=0;
    
        break;
    }
      }
     
}
  void table()
  {
     if (s1)
     {
         printf(" samosa    | %d  | 20  | %d\n",s1,s1*20);
     }
     if (d1)
     {
        printf(" dosa      | %d  | 35  | %d\n",d1,d1*35);
     }
     if (t1)
     {
        printf(" tea       | %d  | 10  | %d\n",t1,t1*10);
     }
     if (c1)
     {
        printf(" coffee    | %d  | 50  | %d\n",c1,c1*50);
     }
     if (i1)
     {
        printf(" ice cream | %d  | 30  | %d\n",i1,i1*20);
     }
  }
     void money()
  {
      
  
     int cash,rCash;
    printf("enter your cash : ");
    scanf("%d",&cash);
    rCash=cash-tBill;
    printf("return cash = %d\n\n",rCash);
         int note;
    for(int i = 100; i != 0; i = i/2)
         {
             note = rCash / i;
             if(note==0)
             {
                 printf("");
             }
             else
             {
         printf("There are %d Note(s) of %d\n",note,i);
             }
             rCash = rCash % i;
         if ( i == 50)
         {
         i = 40;
         }

         }

  }

         
  int main()
     {
      printf("::welcome to cosmer::\n");
        order();
        printf(" Item      | Qty  | Rate | Total\n");
        printf("---------------------------------------------------\n");
        table();
        printf("---------------------------------------------------\n");
        printBill();
         printf("---------------------------------------------------\n");
        money();
    return 0;
    }

