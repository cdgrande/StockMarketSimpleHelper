#include <stdio.h>
#include <stdlib.h>

/*This program was made by Cody Grande.*/
/*This is a stock market program to help with buying and selling.*/
/* NOTE: I HAVE NO EXPERINCE WITH DEALING WITH THE STOCK MARKET, THIS IS TO LET ME EXPERMENT WITH PROGRAMING.*/

double worth, buy, prevousWorth;

void stockIncrease(double worth, double buy){
    if (worth < buy){
        printf("buy more!\n");
        printf("debug: worth=%lf buy=%lf\n", worth, buy);
    }
    else
        if (worth > buy)
            printf("Sell unless you want it to increase even more!\n");
        else
            printf("wait a little longer!\n");
}

void stockDecrease(double worth, double buy){
    if (worth < buy)
        printf("sell, the stock is on a crash course!\n");
    else
        if(worth > buy)
            printf("Is it a rough patch?\n");
        else
            printf("sell now to loss nothing rather that lose something later on.\n");
}

int main(void){
    printf("hi!\n");
    printf("What is your stock worth?\n");
    scanf("%lf", &worth);
    printf("what was it worth last month?\n");
    scanf("%lf", &prevousWorth);
    printf("what did you buy this stock at?\n");
    scanf("%lf", &buy);
    if (prevousWorth > worth)
        stockDecrease(worth, buy);
    else
        if (prevousWorth < worth)
            stockIncrease(worth, buy);
        else
            if (prevousWorth = worth)
                printf("no need to worry for another month.");
}
