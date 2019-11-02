#ifndef _ID_VALIDATOR_INTERFACE_
#define _ID_VALIDATOR_INTERFACE_

#include "BaseElementValidatorInterface.h"
#include <string>
#include <memory>
#include <vector>


using namespace std;

class IdInterface;

namespace validator
	{


	class IdValidatorInterface : public virtual BaseElementValidatorInterface
		{

	 public:
		 IdValidatorInterface();
		 virtual ~IdValidatorInterface();

		 virtual bool isValid( shared_ptr<IdInterface> entity )  = 0;
		 virtual vector<string> validate( shared_ptr<IdInterface> entity) = 0;

		};

	}

#endif
