/*
    CH08-320143
    a5p4
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/


#include "house.h"

House::House(const std::string& name): 
    GenericPlayer(name)
{}

House::~House()
{}

bool House::IsHitting() const
{
    return (GetTotal() <= 16);
}   

void House::FlipFirstCard()
{
    if (!(m_Cards.empty()))
	{
        m_Cards[0]->Flip();
	}
    else
	{
		std::cout << "No card to flip!\n";
	}
}
