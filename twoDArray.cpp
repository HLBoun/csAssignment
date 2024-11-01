/*

*/

#include <iostream>

// Global Variables
int total;

// Array with test data.
int primeNums[5][5] =
{
  { 2,  3,  5,  7, 11},
  {13, 17, 19, 23, 29},
  {31, 37, 41, 43, 47},
  {53, 59, 61, 67, 71},
  {73, 79, 83, 89, 97}
};

//-------------------------------------------

// Function that adds all data up.
int getTotal((&primeNums)[][5])
{

  for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
      total += primeNums[i][j];
    }
  }
  return total;
}

//--------------------------------------------

// Takes total and divides by amount of elements.
float getAverage((&primeNums)[][5])
{
  float avg;
  avg = total / sizeof(primeNums);
  
  return avg;
}

//--------------------------------------------

// Totals the values in a row.
int getRowTotal(&primeNums)[][5], int x)
{
  for(int i = 0; i < 5; i++)
  {

  }
}

//--------------------------------------------

// Totals the values in a column.
int getColumnTotal((&primeNums)[][5], int x)
{
  
}

//---------------------------------------------

// Parses a row and returns the largest num.
int getHighestInRow((&primeNums)[][5], int x)
{
  
}

//---------------------------------------------

// Parses a row and returns the smallest num.
int getLowestInRow((&primeNums)[][5], int x)
{

}

//---------------------------------------------

// Main function, every c++ program needs it.
int main()
{
  
}
