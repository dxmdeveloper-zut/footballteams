#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
#include "Team.hpp"

int main(int argc, char * argv[]){
    std::vector<Team> teams {
         /*name                                    wins draws loses goals lostgoals */
        {"Drużyna pierścienic",                     2,   1,    0,    24,   30},
        {"Pogoń Trzebież",                          4,   2,    1,    30,   41},
        {"Drużyna Actimela",                        0,   0,    8,     1,   66},
        {"Pogoń Strzebrzeszynki",                   5,   2,  0xbeef, 70,  2137},
        {"Bicie Żony Team",                        12,   0,    0,    69,    1},
        {"Nerdy z zutu",                            1,   0,    1,     1,    0},
        {"Wisła Kielce",                            0,   5,    1,    24,    3},
        {"FC Pałka",                               80,   0,    0,   420,    2},
        {"Stół z powyłamywanymi nogami",            0,   0,    0,     0,    0},
        {"Łowcy pedofili, miłośnicy pieczarek",     4,   2,    0,     6,    9},
        {"Mocarze z kiełbasą",                      5,   2,    9,    31,    8}
    };
    std::sort(teams.begin(), teams.end(), [](Team& a, Team& b){return a < b;});

    {
        uint i = teams.size();
        for(auto &team : teams){
            std::cout << i << ". " << team;
            i--;
        }
    }
    return 0;
}