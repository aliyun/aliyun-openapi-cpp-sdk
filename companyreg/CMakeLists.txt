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

set(companyreg_public_header 
	include/alibabacloud/companyreg/CompanyregClient.h
	include/alibabacloud/companyreg/CompanyregExport.h )

set(companyreg_public_header_model 
	include/alibabacloud/companyreg/model/GenerateCompanyRegUploadPolicyRequest.h
	include/alibabacloud/companyreg/model/GenerateCompanyRegUploadPolicyResult.h
	include/alibabacloud/companyreg/model/GetCompanyRegOrderRequest.h
	include/alibabacloud/companyreg/model/GetCompanyRegOrderResult.h
	include/alibabacloud/companyreg/model/ListCompanyRegConsultationsRequest.h
	include/alibabacloud/companyreg/model/ListCompanyRegConsultationsResult.h
	include/alibabacloud/companyreg/model/ListCompanyRegOrdersRequest.h
	include/alibabacloud/companyreg/model/ListCompanyRegOrdersResult.h
	include/alibabacloud/companyreg/model/ProcessCompanyRegOrderRequest.h
	include/alibabacloud/companyreg/model/ProcessCompanyRegOrderResult.h
	include/alibabacloud/companyreg/model/SendVcodeRequest.h
	include/alibabacloud/companyreg/model/SendVcodeResult.h
	include/alibabacloud/companyreg/model/SubmitCommunicationNoteRequest.h
	include/alibabacloud/companyreg/model/SubmitCommunicationNoteResult.h
	include/alibabacloud/companyreg/model/SubmitConsultationRequest.h
	include/alibabacloud/companyreg/model/SubmitConsultationResult.h )

set(companyreg_src 
	src/CompanyregClient.cc
	src/model/GenerateCompanyRegUploadPolicyRequest.cc
	src/model/GenerateCompanyRegUploadPolicyResult.cc
	src/model/GetCompanyRegOrderRequest.cc
	src/model/GetCompanyRegOrderResult.cc
	src/model/ListCompanyRegConsultationsRequest.cc
	src/model/ListCompanyRegConsultationsResult.cc
	src/model/ListCompanyRegOrdersRequest.cc
	src/model/ListCompanyRegOrdersResult.cc
	src/model/ProcessCompanyRegOrderRequest.cc
	src/model/ProcessCompanyRegOrderResult.cc
	src/model/SendVcodeRequest.cc
	src/model/SendVcodeResult.cc
	src/model/SubmitCommunicationNoteRequest.cc
	src/model/SubmitCommunicationNoteResult.cc
	src/model/SubmitConsultationRequest.cc
	src/model/SubmitConsultationResult.cc )

add_library(companyreg ${LIB_TYPE}
	${companyreg_public_header}
	${companyreg_public_header_model}
	${companyreg_src})

set_target_properties(companyreg
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}companyreg
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(companyreg
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_COMPANYREG_LIBRARY)
endif()

target_include_directories(companyreg
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(companyreg
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(companyreg
		jsoncpp)
	target_include_directories(companyreg
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(companyreg
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(companyreg
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(companyreg
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(companyreg
		jsoncpp)
endif()

install(FILES ${companyreg_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/companyreg)
install(FILES ${companyreg_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/companyreg/model)
install(TARGETS companyreg
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)