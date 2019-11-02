MESSAGE( STATUS "ADDING VALIDATOR_DIR")


set( VALIDATOR_SRC

	
	BaseElementValidatorInterface.h 
	
	IdValidator.h IdValidator.cpp
	
	IdValidatorInterface.h 
	
	IdValidatableInterface.h 	

	)

set(LIB_TYPE SHARED)

add_library(src_validator ${LIB_TYPE} ${VALIDATOR_SRC} )



target_include_directories(src_validator PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/")

