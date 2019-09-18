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

set(ccs_public_header 
	include/alibabacloud/ccs/CcsClient.h
	include/alibabacloud/ccs/CcsExport.h )

set(ccs_public_header_model 
	include/alibabacloud/ccs/model/CreateTicketRequest.h
	include/alibabacloud/ccs/model/CreateTicketResult.h
	include/alibabacloud/ccs/model/GetHotlineRecordRequest.h
	include/alibabacloud/ccs/model/GetHotlineRecordResult.h
	include/alibabacloud/ccs/model/ProceedTicketRequest.h
	include/alibabacloud/ccs/model/ProceedTicketResult.h
	include/alibabacloud/ccs/model/QueryHotlineRecordRequest.h
	include/alibabacloud/ccs/model/QueryHotlineRecordResult.h
	include/alibabacloud/ccs/model/QueryTicketRequest.h
	include/alibabacloud/ccs/model/QueryTicketResult.h )

set(ccs_src 
	src/CcsClient.cc
	src/model/CreateTicketRequest.cc
	src/model/CreateTicketResult.cc
	src/model/GetHotlineRecordRequest.cc
	src/model/GetHotlineRecordResult.cc
	src/model/ProceedTicketRequest.cc
	src/model/ProceedTicketResult.cc
	src/model/QueryHotlineRecordRequest.cc
	src/model/QueryHotlineRecordResult.cc
	src/model/QueryTicketRequest.cc
	src/model/QueryTicketResult.cc )

add_library(ccs ${LIB_TYPE}
	${ccs_public_header}
	${ccs_public_header_model}
	${ccs_src})

set_target_properties(ccs
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ccs
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ccs
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CCS_LIBRARY)
endif()

target_include_directories(ccs
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ccs
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ccs
		jsoncpp)
	target_include_directories(ccs
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ccs
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ccs
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ccs
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ccs
		jsoncpp)
endif()

install(FILES ${ccs_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ccs)
install(FILES ${ccs_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ccs/model)
install(TARGETS ccs
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)