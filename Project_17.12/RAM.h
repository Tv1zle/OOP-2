#pragma once
class RAM
{
	char* name = nullptr;
	const int memory;
	double price;
public:
	RAM(const char* n, int m, double r);
	RAM(const RAM& r);
	~RAM();
	void Input();
	void Print();
	// get
	const char* GetName();
	const int GetMemory();
	double GetPrice();

	// set
	void SetName(const char* n);
	void SetPrice(double pr);
};

