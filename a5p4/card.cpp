/*
    CH08-320143
    a5p4
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/



#include "card.h"

Card::Card(rank r, suit s, bool ifu):  m_Rank(r), m_Suit(s), m_IsFaceUp(ifu)
{} 

int Card::GetValue() const
{
	int value;

	// to be filled with content

	return value;
}

void Card::Flip()
{
    m_IsFaceUp = !(m_IsFaceUp);
}
