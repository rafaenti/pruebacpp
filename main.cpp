#include <iostream>


int main (int argc, char** argv){

	if (argc > 1){
		std::cout << "Holi " << argv[1] << "!" << std::endl;
	}
	else{
		std::cout << "Introduce un nombre como parámetro!!!" << std::endl;
	}

	return 0;
}
