#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// code written by Sergio Dhelomme

//  NOTE: it was unclear if the desired output of the function was a printed list of dimensions or an array.
//          So i wrote a function that saves all the squares as an array of ints (each int represents the edge length of its square)
//          as well as a function that prints the full results from the array.

int CutSquare(int *paper);
int CutPaperIntoSquares(int *paper, int *output);
void PrintResults(int *output, int outputSize);

void main()
{
    int x, y;       // side lengths of original paper

    printf("Width of paper:");
    scanf("%d", &x);

    printf("Length of paper:"); // Get paper dimensions
    scanf("%d", &y);

    int paper[2] = {x,y};   // paper
    int output[100] = {0};  // output  
    int outputSize;         // size of output (number of squares)

    outputSize = CutPaperIntoSquares(paper, output);

    PrintResults(output, outputSize);

}


int CutPaperIntoSquares(int *paper, int *output) // cuts original paper into each square; returns how many squares were cut
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
    if(paper[0] > paper[1]) // subtract the shortest length from the largest
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

void PrintResults(int *output, int outputSize) // prints the full list of squares from the array of ints
{
    for(int i=0; i < outputSize; i++)
    {
        printf("%dX%d\n", output[i], output[i]);
    }
}



