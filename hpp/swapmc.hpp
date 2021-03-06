#ifndef SWAPMC_HPP
#define SWAPMC_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <math.h>
#include "../hpp/conf.hpp"
#include "../hpp/particles.hpp"
#include "../hpp/cells.hpp"

namespace PhysPeach{
    struct SwapMC {
        double L;
        double T;
        int trial;
        int accept;
        double t; //dt :~ dr / (2. * Np)
        Particles p;
        Cells c;
    };
    double Upartial(SwapMC*);
    double U(SwapMC*);
    void createSwapMC(SwapMC*, int);
    void deleteSwapMC(SwapMC*, int);
    int updateSwapMC(SwapMC*, int);
    void equilibrateSwapMC(SwapMC*, int);
}

#endif