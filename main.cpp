#include <stdio.h>
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;
int
main ()
{

//Initialize variables    
  int foodMenu = 0;
  int drinkMenu = 0;
  int sizeMenu = 0;
  double foodPrice = 0.00;
  double sizePrice = 0.00;
//choice options
  cout << "Welcome to Andrew's Food Joint\n";
  cout << "\nPlease select one of the meals below:\n"
    << "  1) Dave's Single Combo ($6.50)\n"
    << "  2) 10 Piece Nuggets Combo ($7.00)\n"
    << "  3) Classic Chicken Sandwich Combo ($7.50)\n"
    << "  4) Baconator Combo ($8.00)\n"
    << "  5) Bourbon Bacon Cheeseburger Combo ($8.50)\n";
  cin >> foodMenu;
  
  //switch statement / where you make the food choice    
  switch (foodMenu)
    {
    case 1:
      cout << "Your selection: 1\n";
      break;
    case 2:
      cout << "Your selection: 2\n";
      break;
    case 3:
      cout << "Your selection: 3\n";
      break;
    case 4:
      cout << "Your selection: 4\n";
      break;
    case 5:
      cout << "Your selection: 5\n";
      break;
    default:
      cout << "Please choose a correct number next time.";
      return 0;
      break;
    }

//choice options
  cout << "\nPlease select one of the drinks below:\n"
    << "  1) Coke\n"
    << "  2) Diet Coke\n" 
    << "  3) Mountain Dew\n" 
    << "  4) Sweet Iced Tea\n";
  cin >> drinkMenu;

//switch statement / where you make the drink choice      
  switch (drinkMenu)
    {
    case 1:
      cout << "Your selection: 1\n";
      break;
    case 2:
      cout << "Your selection: 2\n";
      break;
    case 3:
      cout << "Your selection: 3\n";
      break;
    case 4:
      cout << "Your selection: 4\n";
      break;
    default:
      cout << "Please choose a correct number next time.";
      return 0;
      break;
    }

//choice options  
  cout << "\nWhat size would you like?\n"
    << "  1) Small (+ $0.00)\n"
    << "  2) Medium (+ $0.50)\n" 
    << "  3) Large (+ $1.00)\n";
  cin >> sizeMenu;

  switch (sizeMenu)
  {
    case 1:
    cout << "Your selection: 1\n";
    break;
    case 2:
    cout << "Your selection: 2\n";
    break;
    case 3:
    cout << "Your selection: 3\n";
  }
  
  cout << "\nThank you for ordering:\n";
  
  
  //if statements for the users size selection
  if (sizeMenu == 1)
  {
    sizePrice == 0.00;  
    cout << "Small ";
  }
  else if (sizeMenu == 2)
  {
    sizePrice == 0.50;  
    cout << "Medium ";  
  }
  else if (sizeMenu == 3)
  {
    sizePrice == 1.00;  
    cout << "Large ";  
  }
  
  //If statements for the users food selection
  if(foodMenu == 1)
  {
    foodPrice = 6.50;  
    cout << "Dave's Single Combo ";
  }
  else if (foodMenu == 2)
  {
    foodPrice = 7.00; 
    cout << "10 Piece Nuggets Combo ";  
  }
  else if (foodMenu == 3)
  {
    foodPrice = 7.50; 
    cout << "Classic Chicken Sandwich Combo ";  
  }
  else if (foodMenu == 4)
  {
    foodPrice = 8.00; 
    cout << "Baconator Combo ";  
  }
  else if (foodMenu == 5)
  {
    foodPrice = 8.50;  
    cout << "Bourbon Bacon Cheeseburger Combo ";  
  }
  
  //if statements for users drink selection
  if (drinkMenu == 1)
  {
    cout << "and Coke\n";  
  }
  else if (drinkMenu == 2)
  {
    cout << "and Diet Coke\n";  
  }
  else if (drinkMenu == 3)
  {
    cout << "and Mountain Dew\n";  
  }
  else if (drinkMenu == 4)
  {
    cout << "and Sweet Iced Tea\n";  
  }
  
  double totalPrice = foodPrice + sizePrice;
  cout << "Your price with 5% tax is: $" << fixed << setprecision (2) << totalPrice + ((totalPrice) * 0.05);
}



