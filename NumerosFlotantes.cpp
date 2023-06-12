#include <iostream>
#include <String>
int main(){
	float base, altura;
	float area;
	
	area = 1.5;
	
	std::cout << "Ingresa La Base Y La Altura:  ";
	std::cin >> base >> altura;
	
	area = base * altura / 2;
	std::cout << "AREA= " << area;
}
