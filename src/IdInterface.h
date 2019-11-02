#ifndef ID_INTERFACE
#define ID_INTERFACE

#include <string>
#include <vector>
#include <memory>

#include "IdValidatorInterface.h"
#include "IdValidatableInterface.h"


namespace src
	{

	using IdValidatorInterface = validator::IdValidatorInterface;

	class IdInterface
		{

	public:

		IdInterface();
		virtual ~IdInterface();

		virtual string getName() const = 0;

		virtual bool validate(shared_ptr<IdValidatorInterface> validator) = 0;


		};

	}


#endif
