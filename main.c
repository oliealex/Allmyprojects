#include <stdio.h>


void transpositionAttack(char string[], int nrOfColumns);


int main()
{
  char string[200] = "sdiiätahd3rcnrSNasanaoZ-nefDtenort1Gk.ättOwc!aäylöE";



  return 0;
}


void transpositionAttack(char string[], int nrOfColumns)
{
    int i = 0, stringLength;
    char tmp[4][1];

    while(string[i] != '\0')
    {
        stringLength = i++;
    }

    int x = stringLength / nrOfColumns;

    for(int i = 0; i < nrOfColumns; i++)
    {
      for(int j = 0; j < x; i++)
      {
        tmp[i][0] += string[j];
      }
    }
}
