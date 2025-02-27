#include <iostream>
#include <utility>
#include <cmath>

std::pair<bool, std::pair<double,double>> solveQuadratic(double a, double b, double c){
    if (a==0) {
        std::cerr <<"No es ecuacion cuadrática: "<< std::endl;
        return {false,{0,0}};
    }
    double discriminante = b*b -4*a*c; 

    if (discriminante >= 0) {
        double x1 = (-b + sqrt(discriminante))/(2*a);
        double x2 = (-b - sqrt(discriminante))/(2*a);
        return {true, {x1,x2}};
    } else {
        std::cerr << "no tiene soluciones reales" << std::endl;
        return {false,{0,0}};
    }
}
int main () {
    double a, b, c;
    std::cout <<"ingrese coeficientes a,b,c!!!";
    std::cin >> a >> b >> c;

    std::pair<bool, std::pair<double,double>> result = solveQuadratic(a, b, c);

    if (result.first) {
        std::cout << "x1: "<< result.second.first << std::endl;
        std::cout << "x2: "<< result.second.second << std::endl;
    } else {
        std::cout<< "algo salio mal!!" << std::endl;
    }
    return 0;
}