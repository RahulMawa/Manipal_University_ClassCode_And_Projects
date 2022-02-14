#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

const int DIMENSIONS = 3;
char board[DIMENSIONS][DIMENSIONS];
const char PLAYER = 'X';
const char COMPUTER = '0';

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char winner);

int main(){
    //
    char winner = ' ';
    char response = ' ';

   do
   {
      winner = ' ';
      response = ' ';
      resetBoard();

      while(winner == ' ' && checkFreeSpaces() != 0)
      {
         printBoard();

         playerMove();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }

         computerMove();
         winner = checkWinner();
         if(winner != ' ' || checkFreeSpaces() == 0)
         {
            break;
         }
      }

      printBoard();
      printWinner(winner);

      printf("\nWould you like to play again? (Y/N): ");
      //scanf("%c");
      scanf("%c", &response);
      response = toupper(response);
      
   } while (response == 'Y');

   printf("Thanks for playing!");

   return 0;
}

void resetBoard(){
    //Clean the whole board
    for(int i = 0; i < DIMENSIONS; i++)
    {
        for(int j = 0; j < DIMENSIONS; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void printBoard(){
    //Row 1
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");

    //Row 2
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");

    //Row 3
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int checkFreeSpaces(){
    //Number of free blocks on the board
    int freeSpaces = DIMENSIONS * DIMENSIONS;

    for(int i = 0; i < DIMENSIONS; i++)
    {
        for(int j = 0; j < DIMENSIONS; j++)
        {
            if(board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
}

void playerMove(){
    //User Input
    int x;
    int y;

    do{
        //Row Input
        printf("Enter the row number: (1-3): \n");
        scanf("%d", &x);
        x--; //since x should be 0-2 instead of 1-3

        //Column Input
        printf("Enter the column number: (1-3): \n");
        scanf("%d", &y);
        y--; 

        if(board[x][y] != ' '){
            printf("Invalid Input. Block is already filled.\n");
        }
        else{
            board[x][y] = PLAYER;
            break;
        }
    }
    while(board[x][y] != ' ');

}

void computerMove(){
    //random position chosen
    srand(time(0));
    int x;
    int y;

    if(checkFreeSpaces > 0)
    {
        do{
            x = rand() % 3;
            y = rand() % 3;
        }
        while(board[x][y] != ' ');

        board[x][y] = COMPUTER;
    }
    else{
        printWinner(' ');
    }
}

char checkWinner(){
    //check rows
   for(int i = 0; i < 3; i++)
   {
      if(board[i][0] == board[i][1] && board[i][0] == board[i][2])
      {
         return board[i][0];
      }
   }

   //check columns
   for(int i = 0; i < 3; i++)
   {
      if(board[0][i] == board[1][i] && board[0][i] == board[2][i])
      {
         return board[0][i];
      }
   }

   //check diagonals
   if(board[0][0] == board[1][1] && board[0][0] == board[2][2])
   {
      return board[0][0];
   }
   if(board[0][2] == board[1][1] && board[0][2] == board[2][0])
   {
      return board[0][2];
   }

   return ' ';
}

void printWinner(char winner){
    //
    if(winner == PLAYER){
        printf("You Win!");
    }
    else if(winner == COMPUTER){
        printf("You Lose!");
    }
    else{
        printf("It's a Tie");
    }
}