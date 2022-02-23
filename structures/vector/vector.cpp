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
		free(memory_); // vyma�e d�ta z memory
		memory_ = nullptr;
		size_ = 0;
		//aby sa nestalo, �e by som nesk�r pristupoval k vymazan�mu objektu, tak je to lep�ie si prekry�, inak to bude fungova� dobre
	}

	size_t Vector::size()
	{
		return size_;
	}

	Structure& Vector::assign(Structure& other)
	{
		if (this != &other) { // overuejem, �i sa nesna��m prideli� s�m seba, sebe (ak sa ch�pem xD)
			Vector& otherVector = dynamic_cast<Vector&>(other); //dynamic cast vr�ti to �o je v hranat�ch z�tvork�ch
			// keby to pretypov�vame v z�tvork�ch, tak to je static cast, je to ��tate�nej�ie, a rob� viacej kontrol
			// a potom pri refaktoringu sa �ah�ie d� vyh�ada�
			size_ = otherVector.size_;
			memory_ = realloc(memory_, size_); //aby n�m p�vodn� smern�k po realokovan� ukazoval na nov� repsekt�ve spr�vny
		}

		return *this;  //vraciam sam�ho seba, preto�e som uravoval sam�ho seba.
	}

	bool Vector::equals(Structure& other)
	{
		if (this == &other)
		{
			return true;
		}
		else
		{
			Vector& otherVector = dynamic_cast<Vector*>(&other); // &other -> ukozovate� na structure a Vector* je pointer, ak sa nepodar� pretypova� tak vrat� NULL
			if (&otherVector != nullptr)
			{
				return  size_ = otherVector->size_ && memcmp(memory_, otherVector ->memory_, size_) = 0;
			}

			else
			{
				return false;
			}
		}
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