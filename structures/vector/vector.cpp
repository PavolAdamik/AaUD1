#include "vector.h"
#include "../utils.h"
#include <cstdlib>
#include <cstring>

namespace structures
{
	// kon�truktor 
	Vector::Vector(size_t size) :
		memory_(std::calloc(size, 1)), // priraduj� sa tam hodnoty, calloc inicializuje ur�it� ve�kos� a + inicializuje pam� 0
		size_(size) // to v z�tvork�ch je inicializ�cia, je efekt�vnej�ia ne� cez oper�tor priradenia =
	{	
	}

	//kop�rovac� kon�truktor
	Vector::Vector(Vector& other) :
		Vector(other.size_)
	{
		memcpy(memory_, other.memory_, size_); //skop�ruje pam� s p�vodn�ho vectora do nov�ho vectora
	}

	Vector::~Vector()
	{
		//TODO 01: Vector
	}

	size_t Vector::size()
	{
		return size_;
	}

	Structure& Vector::assign(Structure& other)
	{
		//TODO 01: Vector
		throw std::runtime_error("Vector::assign: Not implemented yet.");
	}

	bool Vector::equals(Structure& other)
	{
		//TODO 01: Vector
		throw std::runtime_error("Vector::equals: Not implemented yet.");
	}

	byte& Vector::operator[](int index)
	{
		return at(index);
	}

	byte& Vector::at(int index)
	{
		//TODO 01: Vector
		throw std::runtime_error("Vector::at: Not implemented yet.");
	}

	void Vector::copy(Vector& src, int srcStartIndex, Vector& dest, int destStartIndex, int length)
	{
		//TODO 01: Vector
		throw std::runtime_error("Vector::copy: Not implemented yet.");
	}

	byte* Vector::getBytePointer(int index)
	{
		//TODO 01: Vector
		throw std::runtime_error("Vector::getBytePointer: Not implemented yet.");
	}
}