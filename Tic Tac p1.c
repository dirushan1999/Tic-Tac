#include<stdio.h>
#include<string.h>
#include<math.h>
char p1[1];
char p2[1];
char game[3][3];
int display();
int row,column;
void cheackgame1();
int checkgame2();
void startgame1();
int startgame2(int);
void startgame1()
{
do{
        printf("\nplayer1 enter your row and column ");
        scanf("%d",&row);
        scanf("%d",&column);
    }while(game[row][column]!=NULL|| row<0||row>2||column<0||column>2);
    game[row][column]=p1[0];

checkgame1();
}
int checkgame1()
{
    int x=0;
    for(int i=0;i<3;i++)
{
    if(game[i][0]==p1[0]&&game[i][1]==p1[0]&&game[i][2]==p1[0])
    {

        printf("player1 is win the game!!!\n");
         x=1;
         display(x);

    }

}
for(int j=0;j<3;j++)
{

    if(game[0][j]==p1[0]&&game[1][j]==p1[0]&&game[2][j]==p1[0])
    {

        printf("player1 is win the game!!!\n");
         x=1;
         display(x);
    }

}
for(int k=0;k<1;k++)
{

    if(game[k][k]==p1[0]&&game[k+1][k+1]==p1[0]&&game[k+2][k+2]==p1[0])
    {

        printf("player1 is win the game!!!\n");
         x=1;
         display(x);
    }

}
startgame2(x);



}
int startgame2(int y)
{
    if(y==0)
    {int x;
    do{
        printf("\nplayer2 enter your row and column ");
        scanf("%d",&row);
        scanf("%d",&column);
    }while(game[row][column]!=NULL|| row<0||row>2||column<0||column>2);
    game[row][column]=p2[0];
    checkgame2();

    }

}
 int checkgame2()
 {
     int x;

   for(int i=0;i<3;i++)
{
    if(game[i][0]==p2[0]&&game[i][1]==p2[0]&&game[i][2]==p2[0])
    {

        printf("player2 is win the game!!!\n");
         x=1;
         display(x);
    }

}
for(int j=0;j<3;j++)
{

    if(game[0][j]==p2[0]&&game[1][j]==p2[0]&&game[2][j]==p2[0])
    {

        printf("player2 is win the game!!!\n");
         x=1;
         display(x);
    }

}


for(int k=0;k<1;k++)
{

    if(game[k][k]==p2[0]&&game[k+1][k+1]==p2[0]&&game[k+2][k+2]==p2[0])
    {

        printf("player2 is win the game!!!\n");
         x=1;
         display(x);
    }

}

   display(x);


 }
int display(int x)
{



    for(row=0;row<3;row++)
    {

        for(column=0;column<3;column++)
        {
            if(game[row][column]!=NULL)
            {
                printf("|%c|\t",game[row][column]);
            }
            else {
                printf("| |\t");
            }

        }
        if(row==2)
            break;

 printf("\n");
        printf("___________________");
         printf("\n");
    }
if(x!=1)
{

    startgame1();
}
else if(x==1)
{printf("\n game is end now\n");

    return 0;
}

}

int main()
{

printf("player1 enter your simpoll ");
gets(p1);

printf("player2 enter your simpoll ");
gets(p2);
printf("\n");
startgame1();

}

