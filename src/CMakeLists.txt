MESSAGE( STATUS "ADDING MAIN_DIR")


set( MAIN_SRC

	BasePrimitive.h BasePrimitive.cpp
	
	Id.h  Id.cpp 
	
	IdInterface.h
	
	)

set(LIB_TYPE SHARED)

add_library(src_elements ${LIB_TYPE} ${MAIN_SRC} )

target_link_libraries(src_elements src_validator)



target_include_directories(src_elements PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/")

