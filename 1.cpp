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
	std::cout << "Para r=3, El diametro es " <<  diam(3) << " El perimetro es  " << peri(3) << " El área es " << area(3) << std::endl;
	return 0;
}
