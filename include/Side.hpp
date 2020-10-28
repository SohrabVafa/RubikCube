#ifndef _SIDE_HPP_
#define _SIDE_HPP_

#include "Colors.h"

struct Row {
    Colors c[3];
};

class Side {
    Colors p[8];            // p[0] is upper left and the others follow clockwise
    Colors center;

    public:
    Side(Colors c) {
        for (int i=0; i<8; i++)
            p[i] = c;
        center = c;
    }

    void TurnP() {
        Colors tmp = p[7];
        for (int i=7; i>0; i--)
            p[i] = p[i-1];
        p[0] = tmp;
    }
    void TurnN() {
        Colors tmp = p[0];
        for (int i=0; i<7; i++)
            p[i] = p[i+1];
        p[7] = tmp;
    }

    void getColors(Colors sc[3][3]) const{
        for (int i=0; i<3; i++) 
            sc[0][i] = p[i];
        sc[1][0] = p[7];
        sc[1][1] = center;
        sc[1][2] = p[3];
        for (int i=0; i<3; i++)
            sc[2][i] = p[6-i];
    }

    Row getTop() const {
        Row r;
        for (int i=0; i<3; i++) 
            r.c[i] = p[i];
        return r;
    }

    Row getRight() const {
        Row r;
        for (int i=0; i<3; i++) 
            r.c[i] = p[i+2];
        return r;
    }

    Row getBot() const {
        Row r;
        for (int i=0; i<3; i++) 
            r.c[i] = p[i+4];
        return r;
    }

    Row getLeft() const {
        Row r;
        for (int i=0; i<3; i++) 
            r.c[i] = p[(i+6)%8];
        return r;
    }

    void setTop(Row r) {
        for (int i=0; i<3; i++) 
            p[i] = r.c[i];
    }

    void setRight(Row r) {
        for (int i=0; i<3; i++) 
            p[i+2] = r.c[i];
    }

    void setBot(Row r) {
        for (int i=0; i<3; i++) 
            p[i+4] = r.c[i];
    }

    void setLeft(Row r) {
        for (int i=0; i<3; i++) 
            p[(i+6)%8] = r.c[i];
    }
};

#endif