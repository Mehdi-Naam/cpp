#include "Serializer.hpp"

int main(){

	Data salam = {42, 's',42.3f , 42.4};
	uintptr_t uis = Serializer::serialize(&salam);
	std::cout << "uis : " << uis << std::endl;

	Data *dt = Serializer::deserialize(uis);
	std::cout << "data : " << dt << std::endl;

}
