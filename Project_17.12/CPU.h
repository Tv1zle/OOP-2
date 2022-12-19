#pragma once
class CPU
{
	char* name = nullptr;
	double Ghz;
	double price;
public:
	CPU(const char* n, int m, double r);
	CPU(const CPU& c);
	~CPU();
	void Input();
	void Print();
	// get
	const char* GetName();
	const int GetGhz();
	double GetPrice();

	// set
	void SetName(const char* n);
	void SetPrice(double pr);
};

