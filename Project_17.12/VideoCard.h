#pragma once
class VideoCard
{
	char* name = nullptr;
	const int memory;
	double price;
public:
	VideoCard(const char* n, int m, double r);
	VideoCard(const VideoCard& v);
	~VideoCard();
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

