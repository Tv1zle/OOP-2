#include "RAM.h"
#include<iostream>


RAM::RAM(const char* n, int m, double r):memory(m), price(r)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

RAM::RAM(const RAM& r):memory(r.memory), price(r.price)
{
	this->name = new char[strlen(r.name) + 1];
	strcpy_s(this->name, strlen(r.name) + 1, r.name);
}

RAM::~RAM()
{
	delete[]name;
}

void RAM::Input()
{
	char buff[20];
	std::cout << "Enter name -> ";
	std::cin.getline(buff, 20);
	this->name = new char[strlen(buff) + 1];
	strcpy_s(this->name, strlen(buff) + 1, buff);
	std::cout << "Enter price -> ";
	std::cin >> price;
}

void RAM::Print()
{
	std::cout << "Name: " << name << std::endl
		<< "Price: " << price << std::endl
		<< "Memory: " << memory << std::endl;
}

const char* RAM::GetName()
{
	return name;
}

const int RAM::GetMemory()
{
	return memory;
}

double RAM::GetPrice()
{
	return price;
}

void RAM::SetName(const char* n)
{
	if (name != nullptr)
		delete[] name;

	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

void RAM::SetPrice(double pr)
{
	price = pr;
}
