#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
void help();
int main()
{
    int countr, r, r1, count, i, n;
    int score;
    char choice;
    char playername[20];
mainhome:
    system("cls");
    printf("\t\t\tC-LANGUAGE QUIZ CHALLENGE\n");
    printf("\n\t\t________________________________________");
    printf("\n\t\t\t   WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t   C QUIZ COMPETITION ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t   SHOW YOUR SKILLS AND SHINE BRIGHT ....!    ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice = toupper(getch());
    if (choice == 'V')
    {
        printf("A New Feature will added it will be added soon\n");
        goto mainhome;
    }
    else if (choice == 'H')
    {
        help();
        getch();
        goto mainhome;
    }
    else if (choice == 'R')
    {
        printf("A New Feature will added it will be added soon\n");
        getch();
        goto mainhome;
    }
    else if (choice == 'Q')
        exit(1);
    else if (choice == 'S')
    {
        system("cls");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name : ");
        gets(playername);

        system("cls");
        printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------", playername);
        printf("\n\n Before you begin, here are a few things to keep in mind :");
        printf("\n -------------------------------------------------------------------------");
        printf("\n >> The Quiz Game consists of 2 stages: WARMUP ROUND & CHALLENGE ROUND.");
        printf("\n >> In the warmup round, you will be asked 3 questions to assess your");
        printf("\n    knowledge. You must answer at least 2 correctly to move to the Challenge Round.");
        printf("\n    Failing to do so will end the game.");
        printf("\n >> The Challenge Round begins once you pass the warmup. You will face");
        printf("\n    20 questions, and each correct answer will earn you $100,000 !");
        printf("\n    You can win up to a grand total of ONE MILLION dollars !!!!!!.....");
        printf("\n >> Each question will have 4 options, and you need to press A, B, C, or D");
        printf("\n    to select your answer.");
        printf("\n >> Questions will be asked one after another until an incorrect answer is given.");
        printf("\n >> Do not worry—there is no penalty for wrong answers!");
        printf("\n\n\t...................... GOOD LUCK AND HAVE FUN .......................");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
        if (toupper(getch()) == 'Y')
        {
            goto home;
        }
        else
        {
            goto mainhome;
            system("cls");
        }

    home:
        system("cls");
        count = 0;
        for (i = 1; i <= 3; i++)
        {
            system("cls");
            r1 = i;

            switch (r1)
            {
            case 1:
                printf("\n\nWhich of the following is a correct integer syntax?");
                printf("\n\nA.int a = 30;\t\tB.int @a =23;\n\nC.float a =30;\t\tD.char a = 30;");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is A.int a = 30;");
                    getch();
                    break;
                }

            case 2:
                printf("\n\n\nHow many keywords in c ?");
                printf("\n\nA.45\t\tB.33\n\nC.32\t\tD.31");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is C.32");
                    getch();
                    break;
                }

            case 3:
                printf("\n\n\nWhich is the correct float variable syntax ?");
                printf("\n\nA.Float #ab =1.0;\t\tB.float a = 1.0;\n\nC.float 1a=1.2;\t\tD.int a =1.0;");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong!!! The correct answer is B.float a = 1.0;");
                    getch();
                    break;
                }
            }
        }

        if (count >= 2)
        {
            goto test;
        }
        else
        {
            system("cls");
            printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            getch();
            goto mainhome;
        }
    test:
        system("cls");
        printf("\n\n\t*** CONGRATULATION %s you are eligible to take the test***", playername);
        printf("\n\n\n\n\t!Press any key to Start the Game!");
        if (toupper(getch()) == 'p')
        {
            goto game;
        }
    game:
        count = 0;
        for (i = 1; i <= 20; i++)
        {
            system("cls");
            r = i;

            switch (r)
            {
            case 1:
                printf("\n\nWhat is the size of an int data type in C ?");
                printf("\n\nA. 2 bytes\t\tB. 4 bytes\n\nC. 8 bytes\t\tD. 1 byte");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                    getch();
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is B. 4 bytes");
                    getch();
                    break;
                }

            case 2:
                printf("\n\n\nWhich of the following is a valid identifier in C ?");
                printf("\n\nA. 2variable\t\tB. _variable\n\nC. variable@name\t\tD. float");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is B. _variable");
                    getch();
                    break;
                }

            case 3:
                printf("\n\n\nWho is the creator of the C language ? ");
                printf("\n\nA. Bjarne Stroustrup\t\tB. James Gosling\n\nC. Dennis Ritchie\t\tD. Guido van Rossum");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is C. Dennis Ritchie");
                    getch();
                    break;
                }

            case 4:
                printf("\n\n\nWhich header file is required to use the printf() function ?");
                printf("\n\nA. <math.h>\t\tB. <stdio.h>\n\nC. <stdlib.h>\t\tD. <conio.h>");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is B. <stdio.h>");
                    getch();
                    break;
                }

            case 5:
                printf("\n\n\nWhich of the following is used to take input from the user ?");
                printf("\n\nA. printf()\t\tB. scanf()\n\nC. getch()\t\tD. cin");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is B. scanf()");
                    getch();
                    break;
                }

            case 6:
                printf("\n\n\nWhich of the following is a correct way to declare an array in C ?");
                printf("\n\nA. int arr[5];\t\tB. int arr(5);\n\nC. array[5] int;\t\tD. int 5[arr];");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. int arr[5];");
                    getch();
                    goto score;
                    break;
                }
            case 7:
                printf("\n\n\nWhich of the following is a loop construct in C ?");
                printf("\n\nA. while\t\tB. if\n\nC. else\t\tD. switch");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. while");
                    getch();
                    break;
                }
            case 8:
                printf("\n\n\nWhich of the following correctly represents the ternary operator ?");
                printf("\n\nA. ??\t\tB. ?:\n\nC. &&\t\tD. ||");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is B. ?:");
                    getch();
                    break;
                }
            case 9:
                printf("\n\n\nWhat is the correct syntax for declaring a pointer in C ?");
                printf("\n\nA. int *ptr;\t\tB. int &ptr;\n\nC. int ptr;\t\tD. int #ptr;");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. int *ptr;");
                    getch();
                    break;
                }
            case 10:
                printf("\n\n\nWhich function is used to allocate memory dynamically ?");
                printf("\n\nA. malloc()\t\tB. scanf()\n\nC. printf()\t\tD. return");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. malloc()");
                    getch();
                    break;
                }
            case 11:
                printf("\n\n\n What is the purpose of the float data type in C ?");
                printf("\n\nA. To store integer values\t\tB. To store characters\n\nC. To store floating-point numbers\t\tD. To store boolean values");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is C. To store floating-point numbers");
                    getch();
                    break;
                }
            case 12:
                printf("\n\n\n  What is the correct way to start a multi-line comment in C ?");
                printf("\n\nA. //\t\tB. /**\n\nC. /*\t\tD. --");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is C. /*");
                    getch();
                    break;
                }
            case 13:
                printf("\n\n\n Which of the following is not a valid storage class in C ?");
                printf("\n\nA. auto\t\tB. static\n\nC. register\t\tD. public");
                if (toupper(getch()) == 'D')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is D. public");
                    getch();
                    break;
                }
            case 14:
                printf("\n\n\nWhich function in C is used to find the length of a string?");
                printf("\n\nA. strlen()\t\tB. strlength()\n\nC. length()\t\tD. strsize()");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. strlen()");
                    getch();
                    break;
                }
            case 15:
                printf("\n\n\nWhich function is used to terminate the program in C ?");
                printf("\n\nA. exit()\t\tB. terminate()\n\nC. stop()\t\tD. end()");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. exit()");
                    getch();
                    break;
                }
            case 16:
                printf("\n\n\nWhich keyword is used to define a constant variable in C ?");
                printf("\n\nA. var\t\tB. define\n\nC. const\t\tD. static");
                if (toupper(getch()) == 'C')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is C. const");
                    getch();
                    break;
                }
            case 17:
                printf("\n\n\nWhat does the break statement do in a loop ?");
                printf("\n\nA. Terminates the loop\t\tB. Skips to the next iteration\n\nC. Ends the program\t\tD. None of the above");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. Terminates the loop");
                    getch();
                    break;
                }

            case 18:
                printf("\n\n\nWhich of the following cannot be used as a variable name in C ?");
                printf("\n\nA. sum\t\tB. int\n\nC. _value\t\tD. value1");
                if (toupper(getch()) == 'B')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is B. int");
                    getch();
                    break;
                }

            case 19:
                printf("\n\n\nWhich of the following operators is used to access members of a structure ?");
                printf("\n\nA. .\t\tB. ->\n\nC. &\t\tD. *");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. .");
                    getch();
                    break;
                }

            case 20:
                printf("\n\n\nWhich function in C is used to open a file ?");
                printf("\n\nA. fopen()\t\tB. file()\n\nC. open()\t\tD. openfile()");
                if (toupper(getch()) == 'A')
                {
                    printf("\n\nCorrect ...!");
                    count++;
                    getch();
                    break;
                }
                else
                {
                    printf("\n\nWrong !!! The correct answer is A. fopen()");
                    getch();
                    break;
                }
            }
        }
    }
score:
    system("cls");
    score = count;
    if (score >= 2)
    {
        printf("\n\n\t\t**************** CONGRATULATION *****************");
        printf("\n\t You won a chance reappear it  your score is %d", score);
        printf("\n\t You won a chance reappear it press z to reapper");
        choice = toupper(getch());
        if (choice == 'Z')
        {
            goto game;
        }
    }

    else if (score >= 5)
    {
        printf("\n\n\n \t\t**************** CONGRATULATION ****************");
        printf("\n\t\t\t\t YOU ARE A HIRED");
        printf("\n\t\t You Score %d out of 15", score);
        printf("\t\t Thank You!!");
    }
    else
    {
        printf("\n\n\t******** SORRY YOU DIDN'T HIRE ********");
        printf("\n\t\t Thanks for your participation");
        printf("\n\t\t TRY AGAIN");
        goto go;
    }

go:
    puts("\n\n Press Y if you want to play next game");
    puts(" Press any key if you want to go main menu");
    if (toupper(getch()) == 'Y')
        goto home;

    goto mainhome;
}

void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... Welcome to the Ultimate C Quiz Challenge...........");
    printf("\n >> The game consists of two exciting rounds: the WARMUP ROUND & the MAIN ROUND.");
    printf("\n >> In the warmup round, you'll face 3 questions designed to assess your basic");
    printf("\n    knowledge. To advance, you need to answer at least 2 correctly. Fail to do so,");
    printf("\n    otherwise you can't play the Game...........");
    printf("\n >> The MAIN ROUND is where the stakes are high! You will be asked a total of");
    printf("\n    20 questions, and every correct answer will earn you $100,000.");
    printf("\n    Successfully answering all questions could lead you to win a grand prize of ONE MILLION USD !....");
    printf("\n >> For each question, you’ll be given 4 possible answers. Simply press A, B, C, or D to select");
    printf("\n    the correct one");
    printf("\n >> The questions will keep coming as long as you continue to give correct answers.");
    printf("\n >> There’s no penalty for wrong answers, so take your best shot every time!");

    printf("\n\n\t********************* GOOD LUCK AND ENJOY THE GAME *********************************");
    printf("\n\n\t***** C PROGRAM QUIZ GAME proudly created by Group 5, special thanks to Prof. Satyananda Swain ******** ");
}