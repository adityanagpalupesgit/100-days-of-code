#include<stdio.h>

int main() 
{

char operation, letter;

double n1, n2;

unsigned short int letter_pos;

printf("Enter any letter from A, B, C, D,..., Z: ");

scanf("%c", &letter);

//printf("Entered letter if %c\n", letter);

printf("\n");

switch(letter){

case 'A':
    printf("The letter %c is at %d position\n", letter, 1);
    break;

case 'B':
    printf("The letter %c is at %d position\n", letter, 2);
    break;

case 'C':
    printf("The letter %c is at %d position\n", letter, 3);
    break;

case 'D':
    printf("The letter %c is at %d position\n", letter, 4);
    break;


default:
    printf("Invalid letter entered. Please enter a letter from A to Z.\n");
    break;

    case 'E':
printf("the character %c is at %d position \n",letter,5);
break;

case 'F':
printf("the character %c is at %d position \n", letter, 6);
break;

case 'G':
printf("the character %c is at %d position \n",letter,7);
break;

case 'H':
printf("the character %c is at %d position \n",letter,8);
break;

case 'I':
printf("the character %c is at %d position \n",letter,9);
break;

case 'J':
printf("the character %c is at %d position \n",letter,10);
break;

case 'K':
printf("the character %c is at %d position \n",letter,11);
break;

case 'L':
printf("the character %c is at %d position \n",letter,12);
break;

case 'M':
printf("the character %c is at %d position \n",letter,13);
break;

case 'N':
printf("the character %c is at %d position \n",letter,14);
break;

case 'O':
printf("the character %c is at %d position \n",letter,15);
break;

case 'P':
printf("the character %c is at %d position \n",letter,16);
break;

case 'Q':
printf("the character %c is at %d position \n",letter,17);
break;

case 'R':
printf("the character %c is at %d position \n",letter,18);
break;

case 'S':
printf("the character %c is at %d position \n",letter,19);
break;

case 'T':
printf("the character %c is at %d position \n",letter,20);
break;

case 'U':
printf("the character %c is at %d position \n",letter,21);
break;

case 'V':
printf("the character %c is at %d position \n",letter,22);
break;

case 'W':
printf("the character %c is at %d position \n",letter,23);
break;

case 'X':
printf("the character %c is at %d position \n",letter,24);
break;

case 'Y':
printf("the character %c is at %d position \n",letter,25);
break;

case 'Z':
printf("the character %c is at %d position \n",letter,26);
break;
}
}