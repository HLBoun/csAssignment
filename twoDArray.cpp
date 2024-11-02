/*

*/

#include <iostream>
#include <array>
#include <iomanip>
#include <string>




// Global variable to shut program down.
char progStopper = 'x';
std::string waiter;



// Array with test data.
std::array<std::array<int, 5>, 5> primeNums =
{ {
  {02, 03, 05, 07, 11},
  {13, 17, 19, 23, 29},
  {31, 37, 41, 43, 47},
  {53, 59, 61, 67, 71},
  {73, 79, 83, 89, 97}
} };






//---------------------------------------------

// Function to print the array.
void arrayPrinter(const std::array<std::array<int,5>,5> &primeNums)
{
 for(int i = 0; i < 5; i++)
  {
    for(int j = 0; j < 5; j++)
    {
        std::cout <<std::setw(2) << std::setfill('0') << primeNums[i][j] << " ";
    }
    std::cout << std::endl;
  }
}



//-------------------------------------------

// Function that adds all data up. J represents left to right columns.
int getTotal(const std::array<std::array<int,5>,5> &primeNums)
{
  int total = 0;

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
float getAverage(const std::array<std::array<int,5>,5> &primeNums)
{
  int total = 0;
  float avg = 0.0;

  for (int i = 0; i < 5; i++)
  {
      for (int j = 0; j < 5; j++)
      {
          total += primeNums[i][j];
      }
  }
  avg = total / 25;

  return avg;
}

//--------------------------------------------

// Totals the values in a row.
int getRowTotal(const std::array<std::array<int,5>,5> &primeNums, int x)
{
  int rowTotal = 0;
 
  for(int i = 0; i < 5; i++)
  {
    rowTotal += primeNums[x-1][i];
  }
  return rowTotal;
}

//--------------------------------------------

// Totals the values in a column.
int getColumnTotal(const std::array<std::array<int,5>,5> &primeNums, int x)
{
   int columnTotal = 0;

  for(int j = 0; j < 5; j++)
  {
    columnTotal += primeNums[x-1][j];
  }
  return x,columnTotal; 
}

//---------------------------------------------


// Parses a row and returns the largest num.
int getHighestInRow(const std::array<std::array<int,5>,5> &primeNums, int x)
{
  int rowHighest = 0;

  for(int i = 0; i < 5; i++)
  {
    if(primeNums[x-1][i] > rowHighest)
    {
      rowHighest = primeNums[x-1][i];  
    }
  }
  return rowHighest;
}

//---------------------------------------------

// Parses a row and returns the smallest num.
int getLowestInRow(const std::array<std::array<int,5>,5> &primeNums, int x)
{
  int rowLowest = 1000;

  for(int i = 0; i < 5; i++)
  {
    if(primeNums[x-1][i] < rowLowest)
    {
      rowLowest = primeNums[x-1][i];  
    }
  }
  return rowLowest;
}



//------------------------------------------------------------------------------
// Lets the user decide which function to use.
void whichFunctionFunction()
{
  char userChoice;
  int rowAsk;
  int columnAsk;

  std::cout << "How would you like to analyze this data? Type [y] to close the program, as well.\n" 
    << "Total[1], Avg[2], Row Total[3]," <<
     "Column Total[4], Largest in Row[5], Smallest in Row[6]\nYour choice: ";
  std::cin >> userChoice;

  switch(userChoice)
  {
    case '1':
      std::cout << "Total: " << getTotal(primeNums) << "\n\n";
      break;

    case '2':
      std::cout << "Average: " << getAverage(primeNums) << "\n\n";
      break;

    case '3':
      std::cout << "Which Row would you like to total?\n" << "Row: ";
      std::cin >> rowAsk;
      std::cout << "Row Total: " << getRowTotal(primeNums, rowAsk) << "\n\n";
      break;
    
    case '4':
      std::cout << "Which column would you like to total?\n" << "Column: ";
      std::cin >> columnAsk;
      std::cout << "Column Total: " << getColumnTotal(primeNums, columnAsk) << "\n\n";
      break;

    case '5':
      std::cout << "Which Row would you like to parse?\n" << "Row: ";
      std::cin >> rowAsk;
      std::cout << "Highest in Row: " << getHighestInRow(primeNums, rowAsk) << "\n\n";
      break;

    case '6':
      std::cout << "Which Row would you like to parse?\n" << "Row: ";
      std::cin >> rowAsk;
      std::cout << "Lowest in Row: " << getLowestInRow(primeNums, rowAsk) << "\n\n";
      break;

    case 'y':
      progStopper = 'y';
      break;

    default:
      std::cout << "\n\nYOU SHOULD ENTER SOMETHING VALID.\n\n";
  }
}




//---------------------------------------------






// Main function, every c++ program needs it.
int main()
{
  std::cout << "Welcome to your Prime Number Examiner (PNE).\n\n";
  std::cout << "Here is the array you are working with: \n";
  while (progStopper == 'x')
  {
    arrayPrinter(primeNums);

    whichFunctionFunction();

    std::cout << "Type any key, then hit enter when you are ready to move on.";
    std::cin >> waiter;
  }
}
