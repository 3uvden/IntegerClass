#include <numeric>

class Integer
{
public:
	bool isEven(int number)
	{
		if (number % 2 == 0)
		{
			return true;

		}
		else
		{
			return false;
		}
	}
public:
	bool isNegative(int number)
	{
		if (number > 0)
		{
			return true;
		}
		else if (number < 0)
		{
			return false;
		}
	}
public:
	bool isSimple(int number)
	{
		if (number % number == 0 && number / 1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	

};
