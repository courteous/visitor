#include "Id.h"
#include "IdInterface.h"
#include "IdValidatorInterface.h"
#include <iostream>

using namespace std;

namespace src
	{

	const string Id::name = "ID";

	Id::Id()
		{
		}

	Id::~Id()
		{
		}

	bool Id::validate(shared_ptr<IdValidatorInterface> validator)
	{

		shared_ptr<Id> thisObj = shared_from_this();
		shared_ptr<IdInterface> castedObj = static_pointer_cast<IdInterface>(thisObj);



		bool isValid = validator->isValid( castedObj );
		if (!isValid)
			{

			vector<string> vectorOfErrors = validator->validate(castedObj );

			std::cout << " the Id has NOT been validated" << std::endl;
			} else
				{
			std::cout << " the Id has been validated" << std::endl;

		}

		return isValid;
		}





	string Id::getName() const {
		return Id::name;
		}


	}
