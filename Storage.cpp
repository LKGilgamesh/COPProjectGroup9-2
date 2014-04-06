#include "Storage.h"
#include<vector>

using namespace std;

Storage::Storage(void)
{
}

Storage::~Storage(void)
{
}

// Methods:		addExpression(string), getResult(string), getAnswer(string)
// Parameters:	string expression, string result, double answer
// Description:	These methods takes a parameter and save it for 
//				future purposes
// return:		None
void Storage::addExpression(string expression)
{
	expressions.push_back(expression);
}

void Storage::addResult(std::string result)
{
	results.push_back(result);
}

void Storage::addAnswer(double answer)
{
	answers.push_back(answer);
}

// Methods:		getExpression(int n), getResult(int n), getAnswer(int n)
// Parameters:	int n (location of element starting from end of vector)
// Description:	This method take a location to look in the storage. 
//				However, this number is given counting from the end of the vector
// return:		the corresponding element at that location
std::string Storage::getExpression(int n)
{
	int i = expressions.size() - n;
	return expressions.at(i);
}

std::string Storage::getResult(int n)
{
	int i = results.size() - n;
	return results.at(i);
}

double Storage::getAnswer(int n)
{
	int i = answers.size() - n;
	return answers.at(i);
}


