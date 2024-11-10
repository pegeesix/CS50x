#include <cs50.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calculate_score(string word);

int main(void)
{
   string player1, player2;
   int score1, score2;

   player1 = get_string("Player 1: ");
   player2 = get_string("Player 2: ");

   score1 = calculate_score(player1);
   score2 = calculate_score(player2);

   if(score1 > score2)
   {
      printf("Player 1 wins!\n");
   }
   else if(score2 > score1)
   {
      printf("Player 2 wins!\n");
   }
   else
   {
      printf("Tie!\n");
   }

   printf("%d and %d\n", score1, score2);
}

int calculate_score(string word)
{
   int score = 0;
   for(int i = 0, len = strlen(word); i < len; i++)
   {
      if(word[i] >= 65 && word[i] <= 90)
      {
         score += POINTS[word[i] - 65];
      }
      else if(word[i] >= 97 && word[i] <= 122)
      {
         score += POINTS[word[i] - 97];
      }
   }

   return score;
}
