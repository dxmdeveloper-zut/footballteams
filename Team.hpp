#pragma once
#include <cstdint>
#include <ostream>
#include <string>
#include <stdint.h>

typedef unsigned int uint;
class Team {
    public:
    std::string name;
    uint wins = 0;
    uint draws = 0;
    uint loses = 0;
    uint goals = 0;
    uint lostGoals = 0;

    inline int getPoints() const;
    bool operator<(const Team& team) const;
    bool operator>=(const Team& team) const;
    friend std::ostream& operator<<(std::ostream& stream, const Team& team);
};
std::ostream& operator<<(std::ostream& stream, const Team& team);
