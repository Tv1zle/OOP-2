#pragma once // файл дизайна
class Hdd
{
	char* name = nullptr;
	const int memory;
	double price;
public:
	Hdd(const char* n, int m, double r);
	Hdd(const Hdd& h);
	~Hdd();
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

