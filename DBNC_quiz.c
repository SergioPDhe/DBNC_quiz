#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int CutSquare(int *paper);
int CutPaperIntoSquares(int *paper, int *output);
void PrintResults(int *output, int outputSize);

void main()
{
    int x, y;

    printf("Width of paper:");
    scanf("%d", &x);

    printf("Length of paper:"); // Get paper dimensions
    scanf("%d", &y);

    int paper[2] = {x,y}; // paper
    int output[100] = {0}, outputSize;

    outputSize = CutPaperIntoSquares(paper, output);

    PrintResults(output, outputSize);

}


int CutPaperIntoSquares(int *paper, int *output)
{
    int count = 0;
    
    while(paper[0] > 0 && paper[1] > 0)
    {
        output[count] = CutSquare(paper);
        count++;
    }

    return count;
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

void PrintResults(int *output, int outputSize)
{
    for(int i=0; i < outputSize; i++)
    {
        printf("%dX%d\n", output[i], output[i]);
    }
}



