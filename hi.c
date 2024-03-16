#include <stdio.h>

int main(void)
{
  // 2 bytes 00000000 01000001
  // 0-9
  // 1
  // Base 8
  // 0-7 10
  // char word; // -127-+127
  // word = 'a';
  // printf("%c\n", word);

  // char words[2];
  // words[1] = 'H';
  // words[2] = 'I';
  
  // printf("%c", words[0]);
  // printf("%c\n", words[1]);
  // printf("%s\n", words);


  unsigned int number; // 0-65,535
  number = 10;


  unsigned int numbers[2];

  numbers[0] = 100;
  numbers[1] = 10000;
  numbers[2] = 65535;
  numbers[3] = 257;
  numbers[4] = 32000;

  printf("%d\n", numbers[0]);
  printf("%d\n", numbers[1]);
}
