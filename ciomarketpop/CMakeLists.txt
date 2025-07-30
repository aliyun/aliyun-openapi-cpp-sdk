#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(ciomarketpop_public_header 
	include/alibabacloud/ciomarketpop/CioMarketPopClient.h
	include/alibabacloud/ciomarketpop/CioMarketPopExport.h )

set(ciomarketpop_public_header_model 
	include/alibabacloud/ciomarketpop/model/GetEveryOneSellsFormListRequest.h
	include/alibabacloud/ciomarketpop/model/GetEveryOneSellsFormListResult.h )

set(ciomarketpop_src 
	src/CioMarketPopClient.cc
	src/model/GetEveryOneSellsFormListRequest.cc
	src/model/GetEveryOneSellsFormListResult.cc )

add_library(ciomarketpop ${LIB_TYPE}
	${ciomarketpop_public_header}
	${ciomarketpop_public_header_model}
	${ciomarketpop_src})

set_target_properties(ciomarketpop
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ciomarketpop
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ciomarketpop
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CIOMARKETPOP_LIBRARY)
endif()

target_include_directories(ciomarketpop
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ciomarketpop
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ciomarketpop
		jsoncpp)
	target_include_directories(ciomarketpop
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ciomarketpop
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ciomarketpop
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ciomarketpop
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ciomarketpop
		jsoncpp)
endif()

install(FILES ${ciomarketpop_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ciomarketpop)
install(FILES ${ciomarketpop_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ciomarketpop/model)
install(TARGETS ciomarketpop
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)