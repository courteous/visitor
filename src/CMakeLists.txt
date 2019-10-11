MESSAGE( STATUS "ADDING VALIDATOR_DIR")


set( VALIDATOR_SRC

	BasePrimitive.h BasePrimitive.cpp
	
	BaseElementValidatorInterface.h 
	
	Id.h  Id.cpp 
	
	IdInterface.h
	
	IdValidator.h IdValidator.cpp
	
	IdValidatorInterface.h 
	
	IdValidatableInterface.h 	

	)

set(LIB_TYPE SHARED)

add_library(src_elements ${LIB_TYPE} ${VALIDATOR_SRC} )



target_include_directories(src_elements PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/")

