#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;

double ans1[20][20], ans2[20][20];

int main() {
    ans1[1][2] = 0.250000000000000;
    ans2[1][2] = 0.250000000000000;
    ans1[1][3] = 0.333333333333333;
    ans2[1][3] = 0.333333333333333;
    ans1[1][4] = 0.375000000000000;
    ans2[1][4] = 0.375000000000000;
    ans1[1][5] = 0.400000000000000;
    ans2[1][5] = 0.400000000000000;
    ans1[1][6] = 0.416666666666667;
    ans2[1][6] = 0.416666666666667;
    ans1[1][7] = 0.428571428571429;
    ans2[1][7] = 0.428571428571429;
    ans1[1][8] = 0.437500000000000;
    ans2[1][8] = 0.437500000000000;
    ans1[1][9] = 0.444444444444444;
    ans2[1][9] = 0.444444444444444;
    ans1[1][10] = 0.450000000000000;
    ans2[1][10] = 0.450000000000000;
    ans1[2][2] = 0.312500000000000;
    ans2[2][2] = 0.312500000000000;
    ans1[2][3] = 0.419753086419753;
    ans2[2][3] = 0.407407407407407;
    ans1[2][4] = 0.445312500000000;
    ans2[2][4] = 0.429687500000000;
    ans1[2][5] = 0.464000000000000;
    ans2[2][5] = 0.446400000000000;
    ans1[2][6] = 0.471450617283951;
    ans2[2][6] = 0.449845679012346;
    ans1[2][7] = 0.475218658892128;
    ans2[2][7] = 0.455643481882549;
    ans1[2][8] = 0.479492187500000;
    ans2[2][8] = 0.457275390625000;
    ans1[2][9] = 0.479804907788447;
    ans2[2][9] = 0.458771528730377;
    ans1[2][10] = 0.482500000000000;
    ans2[2][10] = 0.460100000000000;
    ans1[3][2] = 0.343750000000000;
    ans2[3][2] = 0.343750000000000;
    ans1[3][3] = 0.451303155006859;
    ans2[3][3] = 0.432098765432099;
    ans1[3][4] = 0.473388671875000;
    ans2[3][4] = 0.445312500000000;
    ans1[3][5] = 0.481344000000000;
    ans2[3][5] = 0.446656000000000;
    ans1[3][6] = 0.482145919067215;
    ans2[3][6] = 0.448645404663923;
    ans1[3][7] = 0.484747001674472;
    ans2[3][7] = 0.449702079915681;
    ans1[3][8] = 0.487075805664062;
    ans2[3][8] = 0.449508666992188;
    ans1[3][9] = 0.486264702949151;
    ans2[3][9] = 0.447498405279231;
    ans1[3][10] = 0.486021000000000;
    ans2[3][10] = 0.448769000000000;
    ans1[4][2] = 0.363281250000000;
    ans2[4][2] = 0.363281250000000;
    ans1[4][3] = 0.465782655083067;
    ans2[4][3] = 0.441548544429203;
    ans1[4][4] = 0.482482910156250;
    ans2[4][4] = 0.450073242187500;
    ans1[4][5] = 0.488194560000000;
    ans2[4][5] = 0.448601600000000;
    ans1[4][6] = 0.488372937623838;
    ans2[4][6] = 0.443086395938119;
    ans1[5][2] = 0.376953125000000;
    ans2[5][2] = 0.376953125000000;
    ans1[5][3] = 0.473776016528646;
    ans2[5][3] = 0.446629070771732;
    ans1[6][2] = 0.387207031250000;
    ans2[6][2] = 0.387207031250000;
    ans1[7][2] = 0.395263671875000;
    ans2[7][2] = 0.395263671875000;


    freopen("greater.in", "r", stdin);
    freopen("greater.out", "w", stdout);
    int d, b;
    while (scanf("%d%d", &d, &b), b) {
        printf("%.15f %.15f\n", ans1[d][b], ans2[d][b]);
    }

}
