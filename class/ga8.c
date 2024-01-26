#include <stdio.h>
void main()
{
    int total=0, response,item, extra;
    printf("Item1:100\nItem2:200\nItem3:300\nItem4:350\nItem5:400\nItem6:450\n");
    do
    {
        printf("Choose an Item to add in your cart:");
        scanf("%d",&item);
        
        switch(item)
        {
        case 1: total+=100;
        break;
        case 2: total+=200;
        break;
        case 3: total+=300;
        break;
        case 4: total+=350;
        break;
        case 5: total+=400;
        break;
        case 6: total+=450;
        break;
        default: printf("Enter valid Item");
        }
        printf("\nEnter 1 to add an item or 0 to exit:");
        scanf("%d", &response);
    } 
    while (response==1);
    {
        if (total<=2000)
        printf("Your total cart value is:%d. \n You are safe!",total);
        else
        {extra= total-2000;
        printf("Your cart value is out of your budget. \n You need %d more",extra);}
    }
}