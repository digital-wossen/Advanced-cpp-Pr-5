/*
    CH08-320143
    a5p4
    Wossen K Hailemariam
    w.hailemariam@jacobs-university.de
*/



#include "genericplayer.h"

GenericPlayer::GenericPlayer(const std::string& name): 
    m_Name(name)
{}

GenericPlayer::~GenericPlayer()  
{}

bool GenericPlayer::IsBusted() const
{ 
    return (GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
	std::cout << m_Name << " busts.\n";
}
