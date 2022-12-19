#include "VideoCard.h"
#include<iostream>

VideoCard::VideoCard(const char* n, int m, double r):memory(m), price(r)
{
	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

VideoCard::VideoCard(const VideoCard& v):memory(v.memory), price(v.price)
{
	this->name = new char[strlen(v.name) + 1];
	strcpy_s(this->name, strlen(v.name) + 1, v.name);
}

VideoCard::~VideoCard()
{
	delete[]name;
}

void VideoCard::Input()
{
	char buff[20];
	std::cout << "Enter name -> ";
	std::cin.getline(buff, 20);
	this->name = new char[strlen(buff) + 1];
	strcpy_s(this->name, strlen(buff) + 1, buff);
	std::cout << "Enter price -> ";
	std::cin >> price;
}

void VideoCard::Print()
{
	std::cout << "Name: " << name << std::endl
		<< "Price: " << price << std::endl
		<< "Memory: " << memory << std::endl;
}

const char* VideoCard::GetName()
{
	return name;
}

const int VideoCard::GetMemory()
{
	return memory;
}

double VideoCard::GetPrice()
{
	return price;
}

void VideoCard::SetName(const char* n)
{
	if (name != nullptr)
		delete[] name;

	this->name = new char[strlen(n) + 1];
	strcpy_s(this->name, strlen(n) + 1, n);
}

void VideoCard::SetPrice(double pr)
{
	price = pr;
}