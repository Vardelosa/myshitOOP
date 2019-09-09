#pragma once
class class1
{
	int a;
private:
	int first_number;
	int second_number;
public:
	class1(int a, int b)
	{
		first_number = a;
		second_number = b;
	}
	int Addnumbers()
	{
		return first_number + second_number;
	}
};

