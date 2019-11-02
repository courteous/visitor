#ifndef _ID_VALIDATABLE_INTERFACE_
#define _ID_VALIDATABLE_INTERFACE_

#include <memory>

#include "IdValidatorInterface.h"



namespace validator
	{

	class IdValidatableInterface

		{

	 public:
		IdValidatableInterface();
		virtual ~IdValidatableInterface();

		virtual bool validate(shared_ptr<IdValidatorInterface> validator) = 0;

		};
	}


#endif
