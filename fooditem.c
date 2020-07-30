#include<stdio.h>
main()
{
    int choice;
    printf(" Menu:: \n 1.pavbhaji \n 2.masal dosa \n 3.uttappa \n 4.puri \n 5.idli \n");
    printf(" Enter your choice::");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf(" Food item - pavbhaji \n");
            printf("Price - Rs 55");
            break;
        case 2:
            printf(" Food item - masal dosa \n");
            printf("Price - Rs 50");
            break;
        case 3:
            printf(" Food item - uttappa \n");
            printf("Price - Rs 40");
            break;
        case 4:
            printf(" Food item - puri \n");
            printf("Price - Rs 45");
            break;
        case 5:
            printf(" Food item - idli \n");
            printf("Price - Rs 30");
            break;
        default: printf(" use the default case \n");
    }

}
