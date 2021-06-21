#include <stdio.h>
int main()
{
  char c11= ' ', c12= ' ', c13= ' ', c21= ' ', c22= ' ', c23= ' ', c31= ' ', c32= ' ', c33= ' ';
  int turn = 1, i, j, a;
  printf("Game is starting \n");
  printf("Enter row number and column number to play \n");
  printf("Enter 0 to quit \n");
  printf("Row start from 1 to 3 \n");
  printf("Column start from 1 to 3 \n");
  printf("Enter any number beside 0-3, or you will need to input again \n");
  printf("------------------- \n");
  printf("|     |     |     | \n");
  printf("------------------- \n");
  printf("|     |     |     | \n");
  printf("------------------- \n");
  printf("|     |     |     | \n");
  printf("------------------- \n");

  //start loop with user input
  while(c11==' ' || c12==' ' || c13==' ' || c21==' '|| c22==' '|| c23==' ' || c31==' '|| c32==' '|| c33==' ')
  {
    printf("Player %d turn \n", turn);
    do{
      printf("Enter row: ");
      scanf("%d", &i);
      if(i<1 || i>3)
      {
        printf("Wrong input \n");
      }
    } while(i<1 || i>3);
    do{
      printf("Enter column: ");
      scanf("%d", &j);
      if(j<1 || j>3)
      {
        printf("Wrong input \n");
      }
    } while(j<1 || j>3);
    //condition to print x or o
    if(i==1 && j==1 && c11 == ' ')
    {
      if(turn== 1)
      {
        c11 = 'x';
      }
      else
      {
        c11 = 'o';
      }

    }
    else if(i==1 && j==2 && c12 == ' ')
    {
      if(turn== 1)
      {
        c12 = 'x';
      }
      else
      {
        c12 = 'o';
      }
    }
    else if(i==1 && j==3 && c13 == ' ')
    {
      if(turn == 1)
      {
        c13 = 'x';
      }
      else
      {
        c13 = 'o';
      }
    }
    else if(i==2 && j==1 && c21 == ' ')
    {
      if(turn == 1)
      {
        c21 = 'x';
      }
      else
      {
        c21 = 'o';
      }
    }
    else if(i==2 && j==2 && c22 == ' ')
    {
      if(turn== 1)
      {
        c22 = 'x';
      }
      else
      {
        c22 = 'o';
      }
    }
    else if(i==2 && j==3 && c23 == ' ')
    {
      if(turn == 1)
      {
        c23 = 'x';
      }
      else
      {
        c23 = 'o';
      }
    }
    else if(i==3 && j==1 && c31 == ' ')
    {
      if(turn == 1)
      {
        c31 = 'x';
      }
      else
      {
        c31 = 'o';
      }
    }
    else if(i==3 && j==2 && c32 == ' ')
    {
      if(turn == 1)
      {
        c32 = 'x';
      }
      else
      {
        c32 = 'o';
      }
    }
    else if(i==3 && j==3 && c33 == ' ' )
    {
      if(turn == 1)
      {
        c33 = 'x';
      }
      else
      {
        c33 = 'o';
      }
    }
    else //row and collumn filled case
    {
      printf("Block already filled!! choose orther one \n");
      continue;
    }
    //change player
    if(turn== 1)
    {
    turn++;
    }
    else
    {
    turn--;
    }
    // print game
    printf("------------------- \n");
    printf("|  %c  |  %c  |  %c  | \n", c11, c12, c13);
    printf("------------------- \n");
    printf("|  %c  |  %c  |  %c  | \n", c21, c22, c23);
    printf("------------------- \n");
    printf("|  %c  |  %c  |  %c  | \n", c31, c32, c33);
    printf("------------------- \n");
    //who win??
    if((c11=='x' && c12== 'x' && c13 == 'x') || (c21=='x' && c22== 'x' && c23 == 'x') ||
       (c31=='x' && c32== 'x' && c33 == 'x') || (c11=='x' && c21== 'x' && c31 == 'x') ||
       (c12=='x' && c22== 'x' && c32 == 'x') || (c13=='x' && c23== 'x' && c33 == 'x') ||
       (c11=='x' && c22== 'x' && c33 == 'x') || (c13=='x' && c22== 'x' && c31 == 'x') )
       {
         printf("Player 1 win!!");
         return 0;
       }
    else if((c11=='o' && c12== 'o' && c13 == 'o') || (c21=='o' && c22== 'o' && c23 == 'o') ||
          (c31=='o' && c32== 'o' && c33 == 'o') || (c11=='o' && c21== 'o' && c31 == 'o') ||
          (c12=='o' && c22== 'o' && c32 == 'o') || (c13=='o' && c23== 'o' && c33 == 'o') ||
          (c11=='o' && c22== 'o' && c33 == 'o') || (c13=='o' && c22== 'o' && c31 == 'o') )
          {
            printf("Player 2 win!!");
            return 0;
          }
  }
  printf("No one win!!");
  return 0;
}
