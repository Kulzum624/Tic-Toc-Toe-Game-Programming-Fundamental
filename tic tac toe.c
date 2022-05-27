#include <stdio.h>
#include <conio.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int gamestatus();
void gameboard();

int main()
{
    int player = 1, i, choice;

    char mark;
    do
    {
        gameboard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
            getch();
        }
        i = gamestatus();

        player++;
    }while (i ==  - 1);
    
    gameboard();
    
    if (i == 1)
        printf("\n\t\t\tCheer up Player %d win :) ", --player);
    else
        printf("\n\t\t\tGame draw, you both are active guys cheer up");

    getch();

    return 0;
}

					/*********************************************
					
							FUNCTION TO RETURN GAME STATUS
(1) FOR GAME IS OVER WITH RESULT (-1) FOR GAME IS IN PROGRESS (O) GAME IS OVER AND NO RESULT
					
					********************************************/

int gamestatus()
{
	
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}


                   /*******************************************************************
                                         TIC TAC TOE GAME BOARD
                   ********************************************************************/


void gameboard()
{
    system("cls"); /* (clearing screen) its for changing numbers to symbols in same board */
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

	printf("\t\t\t===================\n");
    printf("\t\t\t|     |     |     |\n");
    printf("\t\t\t|  %c  |  %c  |  %c  |\n", square[1], square[2], square[3]);

    printf("\t\t\t|_____|_____|_____|\n");
    printf("\t\t\t|     |     |     |\n");

    printf("\t\t\t|  %c  |  %c  |  %c  |\n", square[4], square[5], square[6]);

    printf("\t\t\t|_____|_____|_____|\n");
    printf("\t\t\t|     |     |     |\n");

    printf("\t\t\t|  %c  |  %c  |  %c  |\n", square[7], square[8], square[9]);

    printf("\t\t\t|     |     |     |\n");
    printf("\t\t\t===================\n");
}

				/*******************************************************************
											END OF PROJECT
							THANKYOU SIR ZAIN-UL-HASSAN AND MAM RAHEMEEN
				 ********************************************************************/
