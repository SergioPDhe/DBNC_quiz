#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int CutSquare(int *paper);
void CutPaperIntoSquares(int *paper, char *output);

void main()
{
    int x, y;

    printf("Width of paper:");
    scanf("%d", &x);

    printf("Length of paper:"); // Get paper dimensions
    scanf("%d", &y);

    int paper[2] = {x,y}; // paper
    char output[] = "";

    CutPaperIntoSquares(paper, output);
    
    //printf("%d %d", x, y);

}

void CutPaperIntoSquares(int *paper, char *output)
{
    //int squareSize;
    
    while(paper[0] > 0 && paper[1] > 0)
    {
        
        char dimension[] = "", squareSize[128];
        itoa(CutSquare(paper), squareSize ,10);
        
        

        printf("\n%s", squareSize);
        //return dimension;
    }
}

int CutSquare(int *paper) // Cuts the largest possible square out of the paper. Returns the edge length of that square.
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



