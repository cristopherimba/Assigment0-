#include <iostream>
#include <typeinfo>
#include <tuple>

// Initialization 
std::pair<int,double> data() {
    return {7, 12.52};
}
int main() {
    int numone(17.3);
    std::string str("HOLA!!");

    double numtwoo{40.98};
    bool vof{true};
    float numfloat{6.8};

    std::cout<< "Initial Values:"<< std::endl;
    std::cout << "int: "<< numone << std::ends; 
    std::cout << " , string:" << str << std::ends;
    std::cout << " , double: " << numtwoo << std::ends; 
    std::cout << " , bool: " << vof << std::ends; 
    std::cout << " , float: " << numfloat << std::ends;
    auto [a, b] = data(); 
    std::cout << " ,  structured binding(point): "<<" (a: " << a << " b: "<< b <<")"<< std::endl;
     

//references 
    int& refer_numone = numone; 
    std::string& refer_str = str;
    double& refer_numtwoo = numtwoo;
    bool& refer_bool = vof;
    float& refer_float = numfloat;
    int& refer_a = a;
    double& refer_b = b; 

    refer_numone = 99;
    refer_str = "MUNDO! ";
    refer_numtwoo = 52.75;
    refer_bool = false;
    refer_float= 14.8;
    refer_a = 6;
    refer_b = 15.6;

    std::cout << "Modificated values"<< std::endl;
    std::cout << "int: "<< numone << std::ends; 
    std::cout << ", string: "<< str << std::ends; 
    std::cout << ", double: " << numtwoo << std::ends; 
    std::cout << " , bool: "<< vof << std::ends; 
    std::cout << ", float: " << numfloat << std::ends; 
    std::cout << " ,  structured binding(point): "<<" (a: "<< a << std::ends; 
    std::cout << "b: "<< b <<")"<< std::endl; 

    struct point{
        double x{1.0};
        double y{2.0};
        double z{3.0}; 
    };
    std::cout << "Structured Binding: "<< std::endl;

    auto [x, y, z] = point();
    std::cout << "x: "<< x << ", y: "<< y <<",  z: "<< z << std::endl;
    
    return 0;
}

//Analyze the following expressions and classify each as an l-value or an r-value:

// 1.	a = 42;                          a is l-value , 42 is r-value
// 2.	int x = a + b;                   x l-value , and a+b is a r-value
// 3.	&a;                              &a is r-value
// 4.	std::string s = c + " World";    s is l-value , and c + "world" r-value
// 5.	int& refX = x;                   refX  is l-value , also x is l-value 
// 6.	int&& rref = 100;                rref is l-value , 100 is r-value

