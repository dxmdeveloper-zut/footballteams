#include <iomanip>
#include "Team.hpp"
#include "terminal.hpp"

inline int Team::getPoints() const {
    return this->wins * 3 + this->draws;
}

bool Team::operator<(const Team &team) const {
    int points[2]{this->getPoints(), team.getPoints()};

    if(points[0] != points[1])      return points[0] < points[1];
    if(this->wins != team.wins)     return this->wins < team.wins;
    if(this->loses != team.loses)   return this->loses > team.loses;
    if(this->goals != team.goals)   return this->goals < team.goals;
                                    return this->lostGoals > team.lostGoals;
}

bool Team::operator>=(const Team &team) const{
    return !(*this < team);
} 
std::ostream& operator<<(std::ostream& stream, const Team& team){
    stream  << std::left << std::setw(40) 
            << team.name << terminal::setTextColorEsc({25, 255, 30})  << "\t"
            << team.wins << terminal::resetStylesEsc()                      << "\t"
            << team.draws << terminal::setTextColorEsc({255, 30, 30}) << "\t"
            << team.loses << terminal::setTextColorEsc({25, 255, 30}) << "\t\t"
            << team.goals << terminal::setTextColorEsc({255, 30, 30}) << "\t"
            << team.lostGoals << terminal::resetStylesEsc()
            << std::endl;
    return stream;
}

/*
stream  << "Nazwa: "            << team.name << terminal::setTextColorEsc({25, 255, 30})
            << "\t\t\t\t Wygrane: "   << team.wins << terminal::resetStylesEsc()
            << "\t Remisy:"         << team.draws << terminal::setTextColorEsc({255, 30, 30})
            << "\t Przegrane: "     << team.loses << terminal::setTextColorEsc({25, 255, 30})
            << "\t Gole: "          << team.goals << terminal::setTextColorEsc({255, 30, 30})
            << "\t Stracone gole: " << team.lostGoals << terminal::resetStylesEsc() 
            << std::endl;
    return stream;
    */