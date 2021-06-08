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

set(workorder_public_header 
	include/alibabacloud/workorder/WorkorderClient.h
	include/alibabacloud/workorder/WorkorderExport.h )

set(workorder_public_header_model 
	include/alibabacloud/workorder/model/CloseTicketRequest.h
	include/alibabacloud/workorder/model/CloseTicketResult.h
	include/alibabacloud/workorder/model/CreateTicketRequest.h
	include/alibabacloud/workorder/model/CreateTicketResult.h
	include/alibabacloud/workorder/model/GetMqConsumerTagRequest.h
	include/alibabacloud/workorder/model/GetMqConsumerTagResult.h
	include/alibabacloud/workorder/model/ListCategoriesRequest.h
	include/alibabacloud/workorder/model/ListCategoriesResult.h
	include/alibabacloud/workorder/model/ListProductsRequest.h
	include/alibabacloud/workorder/model/ListProductsResult.h
	include/alibabacloud/workorder/model/ListTicketNotesRequest.h
	include/alibabacloud/workorder/model/ListTicketNotesResult.h
	include/alibabacloud/workorder/model/ListTicketsRequest.h
	include/alibabacloud/workorder/model/ListTicketsResult.h
	include/alibabacloud/workorder/model/ReplyTicketRequest.h
	include/alibabacloud/workorder/model/ReplyTicketResult.h )

set(workorder_src 
	src/WorkorderClient.cc
	src/model/CloseTicketRequest.cc
	src/model/CloseTicketResult.cc
	src/model/CreateTicketRequest.cc
	src/model/CreateTicketResult.cc
	src/model/GetMqConsumerTagRequest.cc
	src/model/GetMqConsumerTagResult.cc
	src/model/ListCategoriesRequest.cc
	src/model/ListCategoriesResult.cc
	src/model/ListProductsRequest.cc
	src/model/ListProductsResult.cc
	src/model/ListTicketNotesRequest.cc
	src/model/ListTicketNotesResult.cc
	src/model/ListTicketsRequest.cc
	src/model/ListTicketsResult.cc
	src/model/ReplyTicketRequest.cc
	src/model/ReplyTicketResult.cc )

add_library(workorder ${LIB_TYPE}
	${workorder_public_header}
	${workorder_public_header_model}
	${workorder_src})

set_target_properties(workorder
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}workorder
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(workorder
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_WORKORDER_LIBRARY)
endif()

target_include_directories(workorder
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(workorder
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(workorder
		jsoncpp)
	target_include_directories(workorder
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(workorder
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(workorder
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(workorder
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(workorder
		jsoncpp)
endif()

install(FILES ${workorder_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/workorder)
install(FILES ${workorder_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/workorder/model)
install(TARGETS workorder
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)