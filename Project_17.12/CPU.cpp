#include "CPU.h"
#include<iostream>

CPU::CPU(const char* n, int m, double r):Ghz(m), price(r)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}


CPU::CPU(const CPU& c):Ghz(c.Ghz), price(c.price)
{
	this->name = new char[strlen(c.name) + 1];
	strcpy_s(this->name, strlen(c.name) + 1, c.name);
}


CPU::~CPU()
{
	delete[]name;
}

void CPU::Input()
{
	char buff[20];
	std::cout << "Enter name -> ";
	std::cin.getline(buff, 20);
	this->name = new char[strlen(buff) + 1];
	strcpy_s(this->name, strlen(buff) + 1, buff);
	std::cout << "Enter price -> ";
	std::cin >> price;
}

void CPU::Print()
{
	std::cout << "Name: " << name << std::endl
		<< "Price: " << price << std::endl
		<< "Ghz: " << Ghz << std::endl;
}

const char* CPU::GetName()
{
	return name;
}

const int CPU::GetGhz()
{
	return Ghz;
}

double CPU::GetPrice()
{
	return price;
}

void CPU::SetName(const char* n)
{
	if (name != nullptr)
		delete[] name;

	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

void CPU::SetPrice(double pr)
{
	price = pr;
}