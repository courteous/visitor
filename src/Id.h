#ifndef ID
#define ID

#include "IdValidatableInterface.h"
#include "IdValidatorInterface.h"

#include <string>
#include <vector>
#include <memory>
#include <IdInterface.h>
#include <BasePrimitive.h>

class IdValidatorInterface;

namespace src
	{

	using IdValidatableInterface = src::IdValidatableInterface;
	using BasePrimitive = src::BasePrimitive;

	class Id : 	public virtual BasePrimitive,
				public virtual IdInterface

		{

	public:

		Id();
		virtual ~Id();

		static const string name;

		bool validate(shared_ptr<IdValidatorInterface> validator) override;

		string getName() const override;



	protected:
		shared_ptr<Id> shared_from_this()
			{
				return dynamic_pointer_cast<Id>(BasePrimitive::shared_from_this());
			}


		};




	}


#endif	//#ifndef ID
