#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int CutSquare(int *paper);

void main()
{
    int x, y;

    printf("Width of paper:");
    scanf("%d", &x);

    printf("Length of paper:"); // Get paper size
    scanf("%d", &y);

    int paper[2] = {x,y}; // paper


    
    //printf("%d %d", x, y);

}

int CutPaperIntoSquares(int *paper)
{
    int squareSize;
    char dimension[3];
    
    while(paper[0] > 0 && paper[1] > 0)
    {
        squareSize = CutSquare(paper);
        printf("\n%d", squareSize);
    }
}

int CutSquare(int *paper)
{
    if(paper[0] > paper[1]) 
    {
        paper[0] -= paper[1];
        return paper[1];
    }
    else 
    {
        paper[1] -= paper[0];
        return paper[0];
    }
}



