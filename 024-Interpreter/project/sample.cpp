#include <iostream>
#include <memory>
#include "Expression.h"
#include "TerminalExpression.h"
#include "OrExpression.h"
#include "AndExpression.h"

using namespace std;

std::unique_ptr<Expression> GetFemaleExpression()
{
	static TerminalExpression exp1("merve");
	static TerminalExpression exp2("buse");

	return make_unique<OrExpression>(&exp1, &exp2);
}

std::unique_ptr<Expression> GetMarriedExpression()
{
	static TerminalExpression exp1("ahmet");
	static TerminalExpression exp2("fatma");

	return make_unique<AndExpression>(exp1, exp2);
}


#if 1
int main()
{
	std::unique_ptr<Expression> fexp = GetFemaleExpression();
	std::unique_ptr<Expression> mexp = GetMarriedExpression();

	string text("ahmet merve ile evli");

	cout << (fexp->Interpret(text) ? "Bayan" : "Bayan Deðil") << endl;
	cout << (mexp->Interpret(text) ? "Evli" : "Bekar") << endl;

	string text2("ahmet fatma ile evli");

	cout << (fexp->Interpret(text2) ? "Bayan" : "Bayan deðil") << endl;
	cout << (mexp->Interpret(text2) ? "Evli" : "Bekar") << endl;

	return 0;
}

#endif
