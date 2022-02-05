#include <stdio.h>
void display_update(int *no_of_ticket_remaining,int *i){
    printf("\nwelcome to pk travel\nupdating the display....\n");
    if(* no_of_ticket_remaining==0){
        printf("closed\n");
    }
    else
    if(*i%2==0){
            printf("the no of no_of_ticket_remaining in #trip_up to hill trip no %d is: %d\n",*i+1,*no_of_ticket_remaining);

        
    }
    else
        printf("the no of no_of_ticket_remaining in #trip_down to hill trip no %d is: %d\n",*i+1,*no_of_ticket_remaining);

    
}
int display_report(int *no_of_ticket_remaining,int *ticket_booked_after_discount){
    if(*no_of_ticket_remaining==0){
        int income=*ticket_booked_after_discount*250;
printf("total income in this trip is %d\n\n",income);
printf("\n\ntrain is moving please tight your seat belt until next station....\n\n");
return income;

        
    }
    


}


void book_ticket(int * no_of_ticket_remaining,int *ticket_booked_after_discount){
    int booked;
    
    printf("enter the no of no_of_ticket to be booked\n");
    scanf("%d",&booked);
    printf("the no of ticked booked is %d\n",booked);
     if(booked>*no_of_ticket_remaining){
        booked=*no_of_ticket_remaining;
        *no_of_ticket_remaining=0;
    }
    if (*no_of_ticket_remaining==0){
        printf("no more ticket left \n");
        
    }
    else
    *no_of_ticket_remaining=*no_of_ticket_remaining-booked;
    
   
    if(booked>9)
    {
        
        printf("the no of ticket you get discount is %d\n",booked/10);
        booked=booked-booked/10;
        int pay=booked*250;
        *ticket_booked_after_discount=booked;
        printf("costs to pay after discount is %d NPR \n",pay);
    }
    else{
        int pay;
        pay==booked*250;
    printf("costs to pay is %d \n",pay);
    }
    
    // display_update(no_of_ticket_remaining,i);
    
}
int main()
{
    int overall_income[4];
    int ticket_booked_after_discount;
    int i=0;
     int total_income=0;
    
 while(i<8){
        
        //no of total trips is 8 so we have to do that 
        int no_of_ticket_remaining=480;
       
    for(;no_of_ticket_remaining!=0;){
        display_update(&no_of_ticket_remaining,&i);
book_ticket(&no_of_ticket_remaining,&ticket_booked_after_discount);
overall_income[i]=display_report(&no_of_ticket_remaining,&ticket_booked_after_discount);
        
    }
    
       

        i++;
    }
       for (int i=0;i<8; i++){ 
    
    total_income+=overall_income[i];
       }
       printf("overall income throughtout the day %d is NPR \n\n ",total_income);
    

    return 0;
}

