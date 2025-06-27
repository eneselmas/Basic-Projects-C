/*
Author: Enes Elmas
Date: 2022-11-03
Description:This C program creates a console-based art display using asterisk (*) characters
to visually print specific letters representing a surname and a city. It takes a size input
from the user (recommended between 9 and 18 for optimal appearance) and then prints out
stylized versions of letters in a decorative format.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,size=0;

    printf("Enter the size (recommended size for better appearance: between 9 and 18):");
    scanf("%d",&size);

    printf("\n\t  S U R N A M E \n\n");


//E harfi bilgi : yazilan E harfinin , tek ve cift sayilarda simetrik olmasi icin tek ve cift sayilar icin ayri olarak kodlandi.
//Ornegın sizeE cift sayi iken orta kisim 2yildiz satiri seklinde yazildi,tek sayi iken tek yildiz satiri olarak ayarlandi.

    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(size%2==0)
            {
                if(j<=2 || i<=2 || i==size/2+1 || i==size/2 || i>=size-1)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if(j<=2 || i<=2 || i==size/2+1 || i>=size-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");


//L harfi bilgi : yazilan L harfinin daha güzel görünmesi icin kalin sekilde yazdirildi(2sutun '*' ve 2satir '*' kullanildi)
    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(j==1 || j==2 || i==size-1 || i==size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");


//M harfi bilgi : yazilan M harfinin , tek ve cift sayilarda simetrik olmasi icin tek ve cift sayilar icin ayri olarak kodlandi.
    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(size%2!=0)
            {
                if(j==1 || j==size || i==j&j<size/2+2 || i+j==size+1&i<size/2+1)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if(j==1 || j==size-1 || i==j&j<size/2+1 || i+j==size&i<size/2+1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");


//A harfi bilgi :En ust satir bastaki ve sondaki '*' karakteri olmadan yazdirildi ve orta kisim daha guzel gorunmesi icin 2satir * kullanilarak yazildi.

    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(j==1&i>1&i<size || j==size&i>1&i<size || i==1&j>1&j<size || i==size/2+1&j>1&j<size || i==size/2&j>1&j<size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

//S harfi bilgi : 5 sayisina benzememesi icin bazi * karakterleri silindi.[S harfi iki farkli stilde yazilmistir(1.s harfi ve 2.s harfi farklidir)].

    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(i==1&j>2&j<size || i+j==size+2&i<3 || i+j==size&i>size-2 || i+j==4||i+j==size/2+2&i>size/2-1&i<size/2+1||i+j==size+size/2+1&i<size/2+3&i>size/2+1|| i==size/2+1&j>2&j<size-1||i+j==2*size-2 || i==size&j<size-1&j>1 || j==1&i<(size/2)&i>2 || j==size&i>size/2+2&i<size-1 )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");


    printf("--------------------------------");
    printf("\n");



    printf("\n\t  C I T Y \n\n");

//K harfi bilgi : ust ve alt kismi ayri for donguleri ile olusturuldu.

    for(i=1; i<size/2+2; i++)
    {
        for(j=1; j<size/2+2; j++)
        {
            if(j==1 || i+j==size/2+2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(i=size/2+1; i<=size; i++)
    {
        for(j=size/2+1; j<=size+1; j++)
        {
            if(j==(size+2)/2 || i==j-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");


//A harfi bilgi:En ust satir bastaki ve sondaki '*' karakteri olmadan yazdirildi ve orta kisim daha guzel gorunmesi icin 2satir * kullanilarak yazildi.

    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(j==1&i>1&i<size || j==size&i>1&i<size || i==1&j>1&j<size || i==size/2+1&j>1&j<size || i==size/2&j>1&j<size)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

//Y harfi bilgi : simetrik olmasi amaciyla tek ve cift ayrimi yapilarak yazildi.
    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(size%2!=0)
            {
                if(i==j&j<size/2+1 || i+j==size-1&i<size/2+1 || j==size/2&i>size/2 )
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if(i==j&j<size/2+1 || i+j==size-1&i<size/2+1 || j==size/2&i>size/2 || j==size/2-1&i>size/2)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");


//S harfi bilgi : bir onceki s harfinden stil olarak farkli sekilde kodlandi.(farklilik olmasi amaciyla)

    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(i==1&j>2&j<size || i+j==size+2&i<3 || i+j==size&i>size-2 || i+j==4||i+j==size/2+2&i>size/2-1&i<size/2+1||i+j==size+size/2+1&i<size/2+3&i>size/2+1|| i==size/2+1&j>2&j<size-1||i+j==2*size-2 || i==size&j<size-1&j>1 || j==1&i<(size/2)&i>2 || j==size&i>size/2+2&i<size-1 )
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");

//E harfi bilgi : simetrik olmasi amaciyla tek ve cift ayrimi yapilarak yazildi.

    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(size%2==0)
            {
                if(j<=2 || i<=2 || i==size/2+1 || i==size/2 || i>=size-1)
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if(j<=2 || i<=2 || i==size/2+1 || i>=size-1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

//R harfi bilgi: ust kisim ve alt kisim icin ayri for donguleri kullanildi.

    for(i=1; i<=size/2; i++)
    {
        for(j=1; j<=size/2+1; j++)
        {
            if(i==1&j<size/2+1 || j==1 || i==size/2&j<size/2+1 || j==size/2+1&i>1&i<size/2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    for(i=size/2; i<=size; i++)
    {
        for(j=size/2; j<=size+1; j++)
        {
            if(j==size/2 || i==j-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");

//i harfi bilgi: guzel gozukmesi icin 2sutun * karakteri ile yazdirildi.


    for(i=1; i<=size; i++)
    {
        for(j=1; j<=size; j++)
        {
            if(j==size/2 || j==size/2+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n\n");


    printf("----------------------------------------------------\n");
    printf("\t Some letters not present in last names and cities \n\n");


    int size2=32;
    for(i=1 ; i<size2 ; i++)
    {
        for(j=1 ; j<size2 ; j++)
        {
            if(i>22&i<25&j>21||j>25&j<28&i>22||j>11&j<14&i>22||j>18&j<21&i>22||i>29&j>12&j<20||j<3&i>22||j>8&j<11&i>22||i==27&j<10||j==23&i>11&i<22||i==12&j>23&j<29||i==16&j>23&j<29||j==29&i>12&i<16||i+j==33&i>11&i<22||i==12&j>11&j<21||i==21&j>11&j<21||j==1&i<21&i>12||i==12&j<11&j>1||i==21&j>1&j<10||i==16&j>3&j<10||j==10&i>16&i<21||j>21&j<24&i<11||i<3&j>21&j<31||i>4&i<7&j>21&j<31||j<14&j>11&i<11||i<3&j>11&j<20||i>8&i<11&j<20&j>11||j==1&i<11||i==j&i<11||j==10&i<11)
                printf("*");

            else
                printf(" ");

        }

        printf("\n");
    }

    return 0 ;
}
