#pragma once
#include<vector>
#include<string>
class Storage
{
public:
	Storage(void);
	~Storage(void);
	void addExpression(std::string);
	void addResult(std::string);
	void addAnswer(double);
	std::string getExpression(int);
	std::string getResult(int);
	double getAnswer(int);
private:
	std::vector<std::string> expressions;
	std::vector<std::string> results;
	std::vector<double> answers;
};

