#include<stdio.h>
int totalBill;
void menu()
{
    int choice=0;
    char item='\0',off='\0';
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t WELCOME TO Supermall ONLINE SHOPPING\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\t\t\t\t\tM E N U\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("~~~~~~~~~~~~~~~~~\n");
    printf("1=CLOTHES\n");
    printf("2=GROCERY\n");
    printf("3=ACCESORIES\n");
    printf("4=HOME_APPLIANCES\n");
    printf("5=UNDER_GARMENTS\n");
    printf("6=ELECTRONICS\n");
    printf("7=DEALS\n");
    printf("8=SPECIAL OFFERS\n");
    printf("~~~~~~~~~~~~~~~~~\n");
    printf("||||||||||||||||||||\n");
    printf("~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("~~~~~~~~~~~~~~~~~~~~\n");
    printf("||||||||||||||||||||\n");
    if(choice==1)
    {
    	printf("~~~~~~~\n");
        printf("CLOTHES\n");
        printf("~~~~~~~\n");
   		printf("||||||||||||||||||||||||||||||\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("a:Levis                 4000Rs\n");
        printf("b:Zara                  5000Rs\n");
        printf("c:Warda                 8000Rs\n");
        printf("d:Junaid_Jamshed        7500Rs\n");
        printf("e:Sana_Safinaz          3000Rs\n");
        printf("f:Gul_Ahmed             5500Rs\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("||||||||||||||||||||||||||||||\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Select Your item: ");
        scanf(" %c",&item);
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("||||||||||||||||||||||||||||||\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            if(item=='a')
            {
                printf("Levis              4000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                totalBill=totalBill+4000;
            }
            else if(item=='b')
            {
                printf("Zara               5000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                totalBill=totalBill+5000;
            }
            else if(item=='c')
            {
                printf("Warda                8000\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                totalBill=totalBill+8000;
            }
            else if(item=='d')
            {
                printf("Junaid_Jamshed     7500Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                totalBill=totalBill+7500;
            }
             else if(item=='e')
            {
                printf("Sana_Safinaz      3000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
                totalBill=totalBill+3000;
			}
             else if (item=='f')
            {
                printf("Gul_Ahmed          5500Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                totalBill=totalBill+5500;
			}
    }
    else if(choice==2)
    {
      printf("~~~~~~~\n");
      printf("GROCERY\n");
      printf("~~~~~~~\n");
      printf("|||||||||||||||||||||||||\n");
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      printf("a:Vegetables        900Rs\n");
      printf("b:Sanitary_Items   1500Rs\n");
      printf("c:Grains     		 2000Rs\n");
      printf("d:Powder_Items      850Rs\n");
      printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      printf("|||||||||||||||||||||||||\n");
      printf("~~~~~~~~~~~~~~~~\n");
      printf("Select your item: ");
      scanf(" %c",&item);
      printf("~~~~~~~~~~~~~~~~\n");
      printf("||||||||||||||||\n");
      if(item=='a')
      {
          printf("~~~~~~~~~~~~~~~~~~~~~~\n");
          printf("Vegetables       900Rs\n");
          printf("~~~~~~~~~~~~~~~~~~~~~~\n");
          totalBill=totalBill+900;
      }
      else if (item=='b')
      {
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Sanitary_Items   1500Rs\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
      totalBill=totalBill+1500;
	  }
      else if(item=='c')
      {
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Grains     		 2000Rs\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
        totalBill=totalBill+30;
      }
      else if(item=='d')
      {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Powder_Items         850Rs\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
      totalBill=totalBill+20;
	  }
    }
    else if(choice==3)
    {
        printf("~~~~~~~~~~\n");
        printf("Accesories\n");
        printf("~~~~~~~~~~\n");
        printf("||||||||||||||||||||||||||\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("a:Watch      		1500Rs\n");
        printf("b:Bracelets          200Rs\n");
        printf("c:Perfumes          2000Rs\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("||||||||||||||||||||||||||\n");
		printf("~~~~~~~~~~~~~~~~\n");
        printf("Select your item: ");
        scanf(" %c",&item);
        printf("~~~~~~~~~~~~~~~~\n");
         printf("||||||||||||||||||||||||||\n");
        if(item=='a')
        {
            printf("~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Watch      		1500Rs\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~\n");
        	totalBill=totalBill+1500;
		}
        else if(item=='b')
        {
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Bracelets         200Rs\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
        totalBill=totalBill+200;
		}
        else if(item=='c')
        {
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("Perfumes         2000Rs\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
        totalBill=totalBill+2000;
		}
    }
    else if(choice==4)
    {
    	printf("||||||||||||||||||||||||||\n");
        printf("~~~~~~~~~~~~~~~\n");
        printf("Home_Appliances\n");
        printf("~~~~~~~~~~~~~~~\n");
        printf("||||||||||||||||||||||||||\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("a:Juicer            5000Rs\n");
        printf("b:Fridge	       60000Rs\n");
        printf("c:AC           	   80000Rs\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("||||||||||||||||||||||||||\n");
		printf("~~~~~~~~~~~~~~~~~~\n");
        printf("Select your item: ");
        scanf(" %c",&item);
        printf("~~~~~~~~~~~~~~~~~~\n");
        printf("||||||||||||||||||||||||||||\n");
        if(item=='a')
        {
            printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Juicer            5000Rs\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
            totalBill=totalBill+5000;
        }
        else if(item=='b')
        {
            printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Fridge	         60000Rs\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
        	totalBill=totalBill+60000;
		}
        else if(item=='c')
        {
            printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("AC               80000Rs\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
        	totalBill=totalBill+80000;
		}
    }
    else if(choice==5)
        {
	        printf("|||||||||||||||||||||||\n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	        printf("Under_Garments\n");
	        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	        printf("|||||||||||||||||||||||\n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	        printf("a:Sandow    	  200Rs\n");
	        printf("b:Socks		      150Rs\n");
	        printf("c:Belt		      300Rs\n");
	        printf("d:Tie     		  60Rs\n");
	        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	        printf("|||||||||||||||||||||||\n");
	        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	        printf("Select your item: ");
	        scanf(" %c",&item);
	        printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	        printf("|||||||||||||||||||||||\n");
	        if (item=='a')
	            {
	            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	            printf("a:Sandow    	  200Rs\n");
	            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	            totalBill=totalBill+200;
				}
	        else if(item=='b')
	            {
	            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	            printf("b:Socks		      150Rs\n");
	            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	            totalBill=totalBill+150;
				}
	        else if (item=='c')
	            {
	            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	            printf("c:Belt		      300Rs\n");
	            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	            totalBill=totalBill+300;
				}
	        else if(item=='d')
	            {
	            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	            printf("d:Tie     		  60Rs \n");
	            printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
	            totalBill=totalBill+60;
				}
        }
        else if(choice==6)
        {
            printf("~~~~~~~~~~~\n");
            printf("Electronics\n");
            printf("~~~~~~~~~~~\n");
            printf("|||||||||||||||||||||||||||\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("a:Mobile        	20000Rs\n");
            printf("b:Laptop    		80000Rs\n");
            printf("c:Gaming_Consoles   14000Rs\n");
            printf("d:Monitor	         8000Rs\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("|||||||||||||||||||||||||||\n");
            printf("~~~~~~~~~~~~~~~~\n");
            printf("Select your item: ");
            scanf(" %c",&item);
            printf("~~~~~~~~~~~~~~~~\n");
            printf("|||||||||||||||||||||||||||\n");
            if (item=='a')
            {
                printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("Mobile        	20000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            	totalBill=totalBill+20000;
			}
            else if(item=='b')
            {
                printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("Laptop    		80000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~\n");
            	totalBill=totalBill+80000;
			}
            else if(item=='c')
            {
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("Gaming_Consoles   14000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            	totalBill=totalBill+14000;
			}
            else if(item=='d')
            {
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("d:Monitor	        8000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        		totalBill=totalBill=80000;
			}
        }
        else if(choice==7)
        {
            printf("~~~~~\n");
            printf("Deals\n");
            printf("~~~~~\n");
            printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("a:1 levis\t\t2Pcs Of clothes\t\t2 Bracelets\t    3999Rs\n");
            printf("b:3 Sando\t\t1 Mobile\t\tFridge\tWatch\t   60000RS\n");
            printf("c:1 Perfume\t\t1 juicer\t\tGul_Ahmed\t   15000Rs\n");
            printf("d:1 Warda\t\t3 pairs of Socks\tSanitary Items\t   15000Rs\n");
            printf("e:Gaming_Consoles\t1 Laptop\t\tSana_Safinaz\t  100000Rs\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("~~~~~~~~~~~~~~~~~~~\n");
            printf("Select Your item: ");
            scanf(" %c",&item);
            printf("~~~~~~~~~~~~~~~~~~~\n");
            
            if (item=='a')
            {
            	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
             	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
             	printf("1 levis\t2Pcs Of clothes\t2 Bracelets\t\t  3999Rs\n");
             	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
             	totalBill=totalBill+3999;
			}
            else if(item=='b')
            {
            	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            	printf("3 Sando\t\t1 Mobile\t\tFridge\tWatch\t   60000RS\n");
            	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            	totalBill=totalBill+60000;
			}
            else if(item=='c')
            {
            	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            	printf("1 Perfume\t\t1 juicer\t\tGul_Ahmed\t   15000Rs\n");
            	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            	totalBill=totalBill+15000;
			}
            else if(item=='d')
            {
            	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("1 Warda\t\t3 pairs of Socks\tSanitary Items\t   15000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            	totalBill=totalBill+15000;
			}
            else if(item=='e')
            {
            	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            	printf("Gaming_Consoles\t1 Laptop\t\tSana_Safinaz\t  100000Rs\n");
            	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            	totalBill=totalBill+100000;
			}
        }
        else if(choice==8)
        {
        	
            printf("~~~~~~~~~~~~~~\n");
            printf("SPECIAL OFFERS\n");
            printf("~~~~~~~~~~~~~~\n");
            printf("||||||||||||||\n");
            printf("~~~~~~~~~~~~~~\n");
            printf("a:Ramzan Offer\n");
            printf("b:Eid Offer\n");
            printf("~~~~~~~~~~~~~~\n");
            printf("||||||||||||||||||||\n");
            printf("~~~~~~~~~~~~~~~~~~~~\n");
            printf("Select Your Offer: ");
            scanf(" %c",&item);
            printf("~~~~~~~~~~~~~~~~~~~~\n");
            printf("||||||||||||||||||||\n");
            if(item=='a')
            {
            	printf("~~~~~~~~~~~~\n");
            printf("RAMZAN OFFER\n");
            printf("~~~~~~~~~~~~\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("w:Vegetables\t\tSana_Safinaz\tWatch\t   2000Rs\n");
            printf("e:Sanitary_Items\t4pcs Sando\tLaptop\t  20000Rs\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Select Your Offers: ");
            scanf(" %c",&off);
            printf("~~~~~~~~~~~~~~~~~~~~~\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||\n");
            if(off=='w')
            {
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("Vegetables\tSana_Safinaz\tWatch\t   2000Rs\n");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("|||||||||||||||||||||||||||||||||||||||||||||||||\n");
                totalBill=totalBill+2000;
            }
            else if(off=='e')
	            {
	            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	            printf("Sanitary_Items\t4pcs Sando\tLaptop\t  20000Rs\n");
	            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	            printf("|||||||||||||||||||||||||||||||||||||||||||||||||\n");
	            totalBill=totalBill+20000;
	            }
            }
            else if(item=='b')
            {
            printf("~~~~~~~~~~\n");
            printf("EID OFFERS\n");
            printf("~~~~~~~~~~\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("w:Perfumes\t\tBracelets\tGul_Ahmed\t10000Rs\n");
            printf("e:Gaming_Consoles\tJuicer\t\tMobile\t\t30000Rs\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            printf("~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Select Your Offers: ");
            scanf(" %c",&off);
            printf("~~~~~~~~~~~~~~~~~~~~~\n");
			printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            if(off=='w')
            {
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                printf("Perfumes\t\tBracelets\tGul_Ahmed\t10000Rs\n");
				printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
				printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
            	totalBill=totalBill+10000;
			}
            else if (off=='e')
            {
              printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
              printf("Gaming_Consoles\t\tJuicer\t\tMobile\t\t30000Rs\n");
              printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
              printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
              totalBill=totalBill+30000;
            }
            }
        }
}
int main()
{
    char num='\0';
do{
    menu();
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Do you want more..... (y/n): \n");
    scanf(" %c",&num);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("|||||||||||||||||||||||||||||\n");
}while(num=='y');
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf(" Your bill is %d",totalBill);
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    return 0;
}

