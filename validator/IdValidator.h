#ifndef _ID_VALIDATOR_
#define _ID_VALIDATOR_

#include <string>
#include <vector>
#include <limits>
#include <memory>
#include "../src/Id.h"
#include "IdValidatorInterface.h"

namespace validator
	{

	using Id = src::Id;
	using IdValidatorInterface = src::IdValidatorInterface;


	class IdValidator : public virtual IdValidatorInterface
		{

	public:
		
		IdValidator();
		virtual ~IdValidator();

		virtual bool isValid( shared_ptr<IdInterface> entity) override;

		vector<string> validate(shared_ptr<IdInterface> entity) override;

		};

	}


#endif
