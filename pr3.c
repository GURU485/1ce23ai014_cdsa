#include <stdio.h>
#include <ctype.h>
int main()
{
    char foodType = '\0';
    int choice = 0;
    puts("Welcome to Madurai Cafe");
    do
    {
        puts("V:Veg N:Nonveg, Your choice plz: ");
        foodType = getc(stdin);
        foodType = tolower(foodType);
        while((getchar()) !='\n');
        switch (foodType)
        {
        case 'v':
            puts("1:Banne-Dosa 2:Upma 3:Rava-idli. \nYour choice? ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your Tasty dosa Sir");
                break;
            case 2:
                puts("Your yummy upma Maam");
                break;
            case 3:
                puts("Your delicious idli Sir");
                break;
            default:
                puts("We dont serve Grass Sir");
            }
            break;
        case 'n':
            puts("1:Mutton-pulav 2:Chicken-chilly 3:Fish-fry. \nyourchoice ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your Tasty Hanumantu");
                break;
            case 2:
                puts("Guntur delicious Chicken Maam");
                break;
            case 3:
                puts("Your spicy fish fry Maam");
                break;
            default:
                puts("we don't serve lizards Maam ");
            }
            break;      

            default:
                puts("invalid choice. 1please enter V for Veg or N for Non-veg.");
        }
        puts("Do you wish to have more? 1:Yes 2:No");
        scanf("%d", &choice);
    } while (choice != 2);
    puts("Thank you Visit again!");
    return 0;
}