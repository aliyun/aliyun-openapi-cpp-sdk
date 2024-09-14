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

set(accountlabel_public_header 
	include/alibabacloud/accountlabel/AccountLabelClient.h
	include/alibabacloud/accountlabel/AccountLabelExport.h )

set(accountlabel_public_header_model 
	include/alibabacloud/accountlabel/model/AddCustomerLabelRequest.h
	include/alibabacloud/accountlabel/model/AddCustomerLabelResult.h
	include/alibabacloud/accountlabel/model/BatchFetchAccountLabelRequest.h
	include/alibabacloud/accountlabel/model/BatchFetchAccountLabelResult.h
	include/alibabacloud/accountlabel/model/DeleteCustomerLabelRequest.h
	include/alibabacloud/accountlabel/model/DeleteCustomerLabelResult.h
	include/alibabacloud/accountlabel/model/QueryCustomerLabelRequest.h
	include/alibabacloud/accountlabel/model/QueryCustomerLabelResult.h
	include/alibabacloud/accountlabel/model/QueryCustomerLabelByConfigGroupRequest.h
	include/alibabacloud/accountlabel/model/QueryCustomerLabelByConfigGroupResult.h )

set(accountlabel_src 
	src/AccountLabelClient.cc
	src/model/AddCustomerLabelRequest.cc
	src/model/AddCustomerLabelResult.cc
	src/model/BatchFetchAccountLabelRequest.cc
	src/model/BatchFetchAccountLabelResult.cc
	src/model/DeleteCustomerLabelRequest.cc
	src/model/DeleteCustomerLabelResult.cc
	src/model/QueryCustomerLabelRequest.cc
	src/model/QueryCustomerLabelResult.cc
	src/model/QueryCustomerLabelByConfigGroupRequest.cc
	src/model/QueryCustomerLabelByConfigGroupResult.cc )

add_library(accountlabel ${LIB_TYPE}
	${accountlabel_public_header}
	${accountlabel_public_header_model}
	${accountlabel_src})

set_target_properties(accountlabel
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}accountlabel
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(accountlabel
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ACCOUNTLABEL_LIBRARY)
endif()

target_include_directories(accountlabel
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(accountlabel
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(accountlabel
		jsoncpp)
	target_include_directories(accountlabel
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(accountlabel
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(accountlabel
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(accountlabel
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(accountlabel
		jsoncpp)
endif()

install(FILES ${accountlabel_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/accountlabel)
install(FILES ${accountlabel_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/accountlabel/model)
install(TARGETS accountlabel
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)