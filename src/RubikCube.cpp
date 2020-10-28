#include "RubikCube.hpp"

void RubikCube::getColors(char side, Colors sc[3][3]) const{
    switch (side)
    {
    case 'U':
        U.getColors(sc);
        break;
    case 'F':
        F.getColors(sc);
        break;
    case 'R':
        R.getColors(sc);
        break;
    case 'B':
        B.getColors(sc);
        break;
    case 'L':
        L.getColors(sc);
        break;
    case 'D':
        D.getColors(sc);
        break;
    }
}

void RubikCube::moveUP() {
    U.TurnP();
    Row aux = F.getTop();
    F.setTop(R.getTop());
    R.setTop(B.getTop());
    B.setTop(L.getTop());
    L.setTop(aux);
}
void RubikCube::moveUN() {
    U.TurnN();
    Row aux = F.getTop();
    F.setTop(L.getTop());
    L.setTop(B.getTop());
    B.setTop(R.getTop());
    R.setTop(aux);
}

void RubikCube::moveFP() {
    F.TurnP();
    Row aux = U.getBot();
    U.setBot(L.getRight());
    L.setRight(D.getTop());
    D.setTop(R.getLeft());
    R.setLeft(aux);

}
void RubikCube::moveFN() {
    F.TurnN();
    Row aux = U.getBot();
    U.setBot(R.getLeft());
    R.setLeft(D.getTop());
    D.setTop(L.getRight());
    L.setRight(aux);
}

void RubikCube::moveDP() {
    D.TurnP();
    Row aux = F.getBot();
    F.setBot(L.getBot());
    L.setBot(B.getBot());
    B.setBot(R.getBot());
    R.setBot(aux);
}
void RubikCube::moveDN() {
    D.TurnN();
    Row aux = F.getBot();
    F.setBot(R.getBot());
    R.setBot(B.getBot());
    B.setBot(L.getBot());
    L.setBot(aux);
}

void RubikCube::moveRP() {
    R.TurnP();
    Row aux = U.getRight();
    U.setRight(F.getRight());
    F.setRight(D.getRight());
    D.setRight(B.getLeft());
    B.setLeft(aux);
}
void RubikCube::moveRN() {
    R.TurnN();
    Row aux = U.getRight();
    U.setRight(B.getLeft());
    B.setLeft(D.getRight());
    D.setRight(F.getRight());
    F.setRight(aux);
}

void RubikCube::moveLP() {
    L.TurnP();
    Row aux = U.getLeft();
    U.setLeft(B.getRight());
    B.setRight(D.getLeft());
    D.setLeft(F.getLeft());
    F.setLeft(aux);
}
void RubikCube::moveLN() {
    L.TurnN();
    Row aux = U.getLeft();
    U.setLeft(F.getLeft());
    F.setLeft(D.getLeft());
    D.setLeft(B.getRight());
    B.setRight(aux);
}

void RubikCube::moveBP() {
    B.TurnP();
    Row aux = U.getTop();
    U.setTop(R.getRight());
    R.setRight(D.getBot());
    D.setBot(L.getLeft());
    L.setLeft(aux);
}
void RubikCube::moveBN() {
    B.TurnN();
    Row aux = U.getTop();
    U.setTop(L.getLeft());
    L.setLeft(D.getBot());
    D.setBot(R.getRight());
    R.setRight(aux);
}