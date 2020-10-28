#include "RubikCube.hpp"

#include <iostream>

using namespace std;

std::ostream& operator<<(std::ostream& os, Colors c) {
    switch (c)
    {
    case white:
        os<<'W';
        break;
    case red:
        os<<'R';
        break;
    case blue:
        os<<'B';
        break;
    case green:
        os<<'G';
        break;
    case orange:
        os<<'O';
        break;
    case yellow:
        os<<'Y';
        break;
    }
    return os;
}
void ShowCube(const RubikCube &cube) {
    char sides[6] = {'U', 'F', 'R', 'L', 'B', 'D'};
    cout<<"//--==>>CUBE<<==--\\"<<endl;
    for (int i=0; i<6; i++) {
        Colors sc[3][3];
        cube.getColors(sides[i], sc);
        cout<<"---->"<<sides[i]<<"<----"<<endl;
        for (int j=0; j<3; j++) {
            for (int k=0; k<3; k++)
                cout<<sc[j][k]<<"\t";
            cout<<endl;
        }
        cout<<endl;
    }
}

int main() {

    RubikCube myCube;

    ShowCube(myCube);

    char s, d;
    cin >> s >> d;

    while (s!='q') { //while not equal
        
        switch (s)
        {
        case 'U':
            if (d == 'P')
                myCube.moveUP();
            else
                myCube.moveUN();
            break;
        case 'F':
            if (d == 'P')
                myCube.moveFP();
            else
                myCube.moveFN();
            break;
        case 'R':
            if (d == 'P')
                myCube.moveRP();
            else
                myCube.moveRN();
            break;
        case 'B':
            if (d == 'P')
                myCube.moveBP();
            else
                myCube.moveBN();
            break;
        case 'L':
            if (d == 'P')
                myCube.moveLP();
            else
                myCube.moveLN();
            break;
        case 'D':
            if (d == 'P')
                myCube.moveDP();
            else
                myCube.moveDN();
            break;
        
        default:
            break;
        }
        
        ShowCube(myCube);
        cin >> s >> d;
    }
}