#include <iostream>
#include <cmath>


float diam(float r){
	return 2*r;
	}
float peri(float r){
	return 2*3.1415926*r;
	};
float area(float r){
	return 3.1415926*r*r;
	}

int main(){
	std::cout << "El diametro es" <<  diam(2) << "El perimetro es " << peri(2) << "El área es " << area(2) << std::endl;
	return 0;
}
