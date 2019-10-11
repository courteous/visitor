#include "IdValidator.h"
#include "Id.h"
#include "IdInterface.h"

using namespace std;

namespace src
	{
	
	using Id = src::Id;

	IdValidator::IdValidator()
		{
		}

	bool IdValidator::isValid(shared_ptr<IdInterface> entity)
		{

		vector<string> listOfErros = validate(entity);

		if(listOfErros.empty() ){
			return false;
		}else{
			return true;
		}

		}

	vector<string> IdValidator::validate(shared_ptr<IdInterface> entity)
		{


		vector<string> stringList = vector<string>();

		// do some validation of the name
		string name = entity->getName()

		if (name == "BadName")
			{
			string error = "Error. id name is bad";
			stringList.push_back(error);
			return stringList;
			}

		return stringList;

		}
	}
