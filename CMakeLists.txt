cmake_minimum_required(VERSION 3.10.2)

project(visitor C CXX)


set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# this is enabling testing 
enable_testing()

MESSAGE( "CMAKE CMAKE_GENERATOR is set to          : " ${CMAKE_GENERATOR} )
MESSAGE( "CMAKE CMAKE_INSTALL_PREFIX is set to     : " ${CMAKE_INSTALL_PREFIX} )
MESSAGE( "CMAKE CMAKE_SOURCE_DIR is set to         : " ${CMAKE_SOURCE_DIR} )
MESSAGE( "CMAKE CMAKE_CURRENT_SOURCE_DIR is set to : " ${CMAKE_CURRENT_SOURCE_DIR} )

MESSAGE( "CMAKE CMAKE_BINARY_DIR is set to         : " ${CMAKE_BINARY_DIR} )
MESSAGE( "CMAKE CMAKE_CURRENT_BINARY_DIR is set to : " ${CMAKE_CURRENT_BINARY_DIR} )

MESSAGE( " " )
set( MAIN_SRC_DIR  ${CMAKE_CURRENT_SOURCE_DIR}/src )
set( SYNC_DIR  ${MAIN_SRC_DIR}/sync )
set( TLV_DIR  ${SYNC_DIR}/tlv )
set( TYPES_DIR  ${SYNC_DIR}/types )


set(CMAKE_VERBOSE_MAKEFILE true)
set (CMAKE_CXX_STANDARD 17)
add_definitions(-std=c++17 )


if(UNIX)
	add_definitions(" -pedantic -pedantic-errors -W ")
	add_definitions(" -Wall -Wextra  -Werror -Wshadow -Wnon-virtual-dtor ")
	# this is making all compilation very verbose
	add_definitions(" -v ")

#	add_definitions(" -Wall -Werror -Wextra -Wshadow -Wnon-virtual-dtor -Worl-style-cast -Wcast-align ")
#	add_definitions(" -Wunused -Woverloaded-virtual ")
 #    add_definitions(" -g  ")
endif(UNIX)


#set ( BOTAN_LINK_DIR /home/tito/Projects/botan/ )
#set ( BOTAN_INCLUDE_DIR /home/tito/Projects/botan/build/include/ )
##set ( BOTAN_INCLUDE_DIRECT_DIR /home/tito/Projects/botan/build/include/botan )
#
#
#set( SHARED_INCLUDE_DIR  ${TLV_DIR}/shared )
#set( TLV_BASE_INCLUDE_DIR  ${TLV_DIR}/base )
#set( TLV_DEFAULTS_INCLUDE_DIR  ${TLV_DIR}/defaults )
#
#
#set( TYPES_PRIMITIVE  ${TYPES_DIR}/primitive )



MESSAGE( "SYNC_SHARED_INCLUDE_DIR is                               : " ${SHARED_INCLUDE_DIR} )
MESSAGE( "SYNC_TLV_DEFAULTS_INCLUDE_DIR is                         : " ${TLV_BASE_INCLUDE_DIR} )
MESSAGE( "SYNC_TLV_BASE_INCLUDE_DIR is                             : " ${TLV_DEFAULTS_INCLUDE_DIR} )

MESSAGE( "SYNC_TLV_BASE_INCLUDE_DIR is                             : " ${TYPES_PRIMITIVE} )



					
#######################################################################################################



add_subdirectory(src)

