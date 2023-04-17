#include <stdio.h>
char arr[10]={'o','1','2','3','4','5','6','7','8','9'};
//global variable to store the positions for the game 
int c=0;
int check_win();
int prinf();
int game();
int winner(char a);
int main()
{
    //this function is simply used as a starting function
    printf("This is a simple game of tic-tac-toe:-\n");
    game();
}
int game()
{
    /*This is the function where the base of the game is and all the execution is controlled from here*/
    int pos;
    printf("Enter the name of the first player\n");
    char p1[30],p2[30];
    scanf("%s",&p1);
    printf("Enter the name of the second player\n");
    scanf("%s",&p2);
    while(check_win()==0)/*continues execution till the game is not won */
    {
        if(c%2==0)/*For the player 1 execution turn */
        {
            printf("%s's turn\n",p1);
            prinf();
            printf("Enter the position of your O\n");
            scanf("%d",&pos);
            printf("\n");
            printf("\n");
            arr[pos]='O';
        }
        else/*For the player 2 execution turn*/
        {
            printf("%s's turn\n",p2);
            prinf();
            printf("Enter the position of your X\n");
            scanf("%d",&pos);
            printf("\n");
            printf("\n");
            arr[pos]='X';
        }
        c++;
    }
    if(check_win()==1)/*Won by player 1*/
    {
        printf("\n");        
        printf("\n");
        printf("CONGRATULATIONS\n");
        printf("\n");
        printf("\n");
        printf("The game has been won by %s",p1);
        printf("\n");
        printf("\n");
    }
    if(check_win()==2)/*Won by player 2*/
    {
        printf("\n");        
        printf("\n");
        printf("CONGRATULATIONS\n");
        printf("\n");
        printf("\n");
        printf("The game has been won by %s",p2);
        printf("\n");
        printf("\n");
    }
}
int prinf()/*To print the updated table in every turn*/
{
    printf("       |       |\n");
    printf("   %c   |   %c   |   %c\n",arr[1],arr[2],arr[3]);
    printf("_______|_______|_______\n");
    printf("       |       |\n");
    printf("   %c   |   %c   |   %c\n",arr[4],arr[5],arr[6]);
    printf("_______|_______|_______\n");
    printf("       |       |\n");
    printf("   %c   |   %c   |   %c\n",arr[7],arr[8],arr[9]);
    printf("       |       |\n");
    return 0;
}
int check_win()/*To check if the game has already been won by someone checked after every turn*/
{
    if(arr[1]==arr[2]&&arr[2]==arr[3])
    {
        return winner(arr[1]);
    }
    else if(arr[4]==arr[5]&&arr[5]==arr[6])
    {
        return winner(arr[1]);
    }
    else if(arr[7]==arr[8]&&arr[8]==arr[9])
    {
        return winner(arr[1]);
    }
    else if(arr[1]==arr[4]&&arr[4]==arr[7])
    {
        return winner(arr[1]);
    }
    else if(arr[2]==arr[5]&&arr[5]==arr[8])
    {
        return winner(arr[1]);
    }
    else if(arr[3]==arr[5]&&arr[5]==arr[9])
    {
        return winner(arr[1]);
    }
    else if(arr[1]==arr[5]&&arr[5]==arr[7])
    {
        return winner(arr[1]);
    }
    else if(arr[7]==arr[5]&&arr[5]==arr[3])
    {
        return winner(arr[1]);
    }
    else
    {
        return 0;
    }
}
int winner(char a)/*To check who has won the game */
{
    if(a=='O')
    {
        return 1;
    }
    else
    {
        return 2;
    }
}