#ifndef _RUBIKCUBE_HPP_
#define _RUBIKCUBE_HPP_
#include "Side.hpp"
class RubikCube {
    Side U, F, D, R, L, B;

    public:
    RubikCube(): U(white), F(blue), D(yellow), R(orange), L(red), B(green) {}

    void getColors(char side, Colors sc[3][3]) const;

    void moveUP();
    void moveUN();
    
    void moveFP();
    void moveFN();
    
    void moveDP();
    void moveDN();
    
    void moveRP();
    void moveRN();
    
    void moveLP();
    void moveLN();
    
    void moveBP();
    void moveBN();
    
};

#endif