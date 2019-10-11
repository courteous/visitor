#ifndef BASE_PRIMITIVE
#define BASE_PRIMITIVE

#include <optional>
#include <memory>
#include <iostream>

using namespace std;

namespace src {

class BasePrimitive: public enable_shared_from_this<BasePrimitive> {

public:
	
	BasePrimitive();
	virtual ~BasePrimitive();

};

}

#endif
