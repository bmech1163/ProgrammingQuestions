#include <iostream>
#include "Food.h"
const char* RecommendAFood(char firstLetter)
{
	if (firstLetter == 'a' || firstLetter == 'A')
		return "Apple";
	else if (firstLetter == 'b' || firstLetter == 'B')
		return "Banana";
	else if (firstLetter == 'c' || firstLetter == 'C')
		return "Chocolate Cake";
	else
		return "Pizza";
}
void GetPizzaRecipe()
{
	std::cout << "Pizza Recipe:" << std::endl;
	std::cout << "1. Prepare dough" << std::endl;
	std::cout << "2. Add sauce and toppings" << std::endl;
	std::cout << "3. Bake in oven" << std::endl;
}