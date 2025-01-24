#include <iostream>
#include <numeric>

class Integer
{
public:
	bool isEven(int number)const
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
	bool isNegative(int number)const
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
	bool isSimple(int number)const
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
	bool isCoprime(Integer other)const
	{
		return std::gcd(units_, other.units_) == 1;
	}
	int nok(Integer other)
	{
		return std::lcm(units_, other.units_);
	}
	int nod(Integer other) 
	{
		return std::gcd(units_, other.units_);
	}


	 Integer operator+(const Integer& other)const
	{
		Integer result;
		if (sign_ == other.sign_) {
			result.sign_ = sign_;
			result.units_ = units_ + other.units_;
		}
		else
		{
			if (units_ > other.units_)
			{
				result.sign_ = sign_;
				result.units_ = units_ - other.units_;
			}
			else if (units_ < other.units_)
			{
				result.sign_ = other.sign_;
				result.units_ = other.units_ - units_;
			}
		}
	}

	 friend Integer operator-(const Integer& a, const Integer& b)
	 {
		 Integer result;
		 if (a.sign_ == b.sign_) {
			 result.sign_ = a.sign_;
			 result.units_ = a.units_ - b.units_;
		 }
		 else
		 {
			 if (a.units_ > b.units_)
			 {
				 result.sign_ = a.sign_;
				 result.units_ = a.units_ - b.units_;
			 }
			 else if (a.units_ < b.units_)
			 {
				 result.sign_ = b.sign_;
				 result.units_ = b.units_ - a.units_;
			 }
		 }
	 }

	 friend Integer operator*(const Integer& a, const Integer& b)
	 {
		 Integer result;
		 if (a.sign_ == b.sign_) {
			 result.sign_ = a.sign_;
		 }
		 else
		 {
			 if (a.units_ > b.units_)
			 {
				 result.sign_ = a.sign_;
			 }
			 else if (a.units_ < b.units_)
			 {
				 result.sign_ = b.sign_;
			 }
		 }
		 result.units_ = a.units_ * b.units_;
	 }

	 friend Integer operator/(const Integer& a, const Integer& b)
	 {
		 Integer result;
		 if (a.sign_ == b.sign_) {
			 result.sign_ = a.sign_;
			 result.units_ = a.units_ / b.units_;
		 }
		 else
		 {
			 if (a.units_ > b.units_)
			 {
				 result.sign_ = a.sign_;
				 result.units_ = a.units_ / b.units_;
			 }
			 else if (a.units_ < b.units_)
			 {
				 result.sign_ = b.sign_;
				 result.units_ = b.units_ / a.units_;
			 }
		 }
	 }

	 friend Integer operator%(const Integer& a, const Integer& b)
	 {
		 Integer result;
		 if (a.sign_ == b.sign_) {
			 result.sign_ = a.sign_;
			 result.units_ = a.units_ % b.units_;
		 }
		 else
		 {
			 if (a.units_ > b.units_)
			 {
				 result.sign_ = a.sign_;
				 result.units_ = a.units_ % b.units_;
			 }
			 else if (a.units_ < b.units_)
			 {
				 result.sign_ = b.sign_;
				 result.units_ = b.units_ % a.units_;
			 }
		 }
	 }

	 Integer& operator+=(Integer other)
	 {

	 }

private:
	bool sign_;
	unsigned int units_;
};


int main()
{
	

	return 0;
}
