#include<stdio.h>

int main() {
               char name[50];
               int phone_number;
               int customer_id;

            //Grocery iteams
               int sugar;
               int chai;
               int turmeric;
               int coffee;
               int rice;
               int wheat;
               int dal;

            //milk products  
               int butter;
               int milk;
               int buttermilk;
               int curd;

            //Beverages
               int pepsi;
               int coke;
               int soda;
               int mango;    

            int total;
            float discount;
            float grand_total;
            float subtract;
            int grocery_total;
            int milk_total;
            int beverages_total;  

    printf("- - - - - - - - - - - - - - - - - - - - - - - - -\n");
    printf("\t \t \t BILLING SYSTEM\n");
    printf(".................................................\n");
    printf("CUSTOMERS DETAILS:\n");

    printf("Customer Name:");
    scanf("%s",name);
    printf("Customers Number:");
    scanf("%d",&phone_number);
    printf("Customers ID:");
    scanf("%d",&customer_id);

printf("****************************************\n");

printf("GROCERIES\n\n");

    printf("sugar(RS 30):");
    scanf("%d",&sugar);
    printf("Chai(RS 20):");
    scanf("%d",&chai);
    printf("Turmeric(RS 50):");
    scanf("%d",&turmeric);
    printf("coffee(RS 90):");
    scanf("%d",&coffee);
    printf("Rice(RS 48):");
    scanf("%d",&rice);
    printf("Wheat(RS 20):");
    scanf("%d",&wheat);
    printf("Dal(RS 85):");
    scanf("%d",&dal);

printf("****************************************\n");

printf("MILK PRODUCTS\n\n");
      printf("Milk(RS 50):");
      scanf("%d",&milk);
      printf("Butter(RS 120):");
      scanf("%d",&butter);
      printf("Buttermilk(RS 20):");
      scanf("%d",&buttermilk);
      printf("Curd(RS 60):");
      scanf("%d",&curd);

printf("******************************************\n");

printf("BEVERAGES\n\n");
      printf("Pepsi(RS 35):");
      scanf("%d",&pepsi);     
      printf("Coke(RS 70):");
      scanf("%d",&coke);
      printf("Soda(RS 25):");
      scanf("%d",&soda);
      printf("Mango(RS 55):");
      scanf("%d",&mango);

printf("*************************************************************************\n\n");

printf("Enter discount percentage:");    //Discount 
scanf("%f",&discount);

printf("**************************************************************************\n\n");

   // For number of Items----
      int s,ch,t,c,r,w,d;
        s=30 *sugar;
        ch=20*chai;
        t=50*turmeric;
        c=90*coffee;
        r=48*rice;
        w=20*wheat;
        d=85*dal;
        grocery_total=s+ch+t+c+r+w+d;

        printf("Sugar:%d\n",s);
        printf("Chai:%d\n",ch);
        printf("Turmeric:%d\n",t);
        printf("Coffee:%d\n",c);
        printf("Rice:%d\n",r);
        printf("Wheat:%d\n",w);
        printf("Dal:%d\n",d);
        printf("TOTAL GROCERIES PRICE:%d\n",grocery_total);

printf("*************************************************************************\n");

         int butterT;
         int milkT;
         int buttermilkT;
         int curdT;
           
             butterT=120*butter;
             milkT=50*milk;
             buttermilkT=20*buttermilk;
             curdT=60*curd;
             milk_total = butterT+ milkT + buttermilkT + curdT;
        
        printf("Butter:%d\n",butterT);
        printf("Milk:%d\n",milkT);
        printf("Buttermilk:%d\n",buttermilkT);
        printf("Curd:%d\n",curdT);
        printf("TOTAL MILK_PRODUCT PRICE:%d\n",milk_total);

printf("******************************************************************************\n");

       int pepsiT;
         int cokeT;
         int sodaT;
         int mangoT;
           
             pepsiT=35*pepsi;
             cokeT=70*coke;
             sodaT=25*soda;
             mangoT=55*mango;
             beverages_total=pepsiT + cokeT + sodaT + mangoT;
        
        printf("Pepsi:%d\n",pepsiT);
        printf("Coke:%d\n",cokeT);
        printf("Soda:%d\n",sodaT);
        printf("Mango:%d\n",mangoT);
        printf("TOTAL BEVERAGES  PRICE:%d\n",beverages_total);

printf("******************************************************************************\n");

total=grocery_total + milk_total + beverages_total;
subtract=(discount/100)*total;
grand_total=total - subtract;

printf("******************************************************************************\n");

printf("Total price:%d RS\n",total);
printf("Grand  Total:%f RS\n",grand_total);

printf("******************************************************************************\n");

printf("\t \t SHUBHAM'S  SUPERMARKET \n");

printf("Customer name:%s\n",name);
printf("Cusomer phone number:%d\n",phone_number);
printf("Cusomer ID:%d\n",customer_id);

printf("PRODUCT NAME             QUANTITY        MRP             TOTAL  PRICE\n\n");
printf("Sugar                       %d           30               %d\n",sugar,s);
printf("Chai                        %d           20                %d\n",chai,ch);
printf("Turmeric                    %d           50                %d\n",turmeric,t);
printf("Coffee                      %d           90                %d\n",coffee,c);
printf("Rice                        %d           48                %d\n",rice,r);
printf("Wheat                       %d           20                %d\n",wheat,w);
printf("Dal                         %d           85                %d\n",dal,d);
printf("Milk                        %d           50                %d\n",milk,milkT);
printf("Butter                      %d           120               %d\n",butter,butterT);
printf("Buttermilk                  %d           20                %d\n",buttermilk,buttermilkT);
printf("Curd                        %d           60                %d\n",curd,curdT);
printf("Pepsi                       %d           35                %d\n",pepsi,pepsiT);
printf("Coke                        %d           70                %d\n",coke,cokeT);        
printf("Soda                        %d           25                %d\n",soda,sodaT);        
printf("Mango                       %d           55                %d\n",mango,mangoT);   

printf("**********************************************************************************\n");
printf("Grocery Total Price:%d\n\n",grocery_total);
printf("Milk Product Total Price:%d\n\n",milk_total);
printf("Beverages Total Price:%d\n\n",beverages_total);

printf("**********************************************************************************\n");

printf("Total Price:%d\n\n",total);
printf("Discount:%f\n\n",discount);
printf("Grand Total:%f\n\n",grand_total);


printf("**********************************************************************************\n");
printf("\t \t \t THANK YOU FOR VISITING! \n ");
   
    return 0;
}