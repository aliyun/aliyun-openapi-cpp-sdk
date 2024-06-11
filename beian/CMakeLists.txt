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

set(beian_public_header 
	include/alibabacloud/beian/BeianClient.h
	include/alibabacloud/beian/BeianExport.h )

set(beian_public_header_model 
	include/alibabacloud/beian/model/DeleteUnbeianIpCheckTypeRequest.h
	include/alibabacloud/beian/model/DeleteUnbeianIpCheckTypeResult.h
	include/alibabacloud/beian/model/GetMainDomainRequest.h
	include/alibabacloud/beian/model/GetMainDomainResult.h
	include/alibabacloud/beian/model/InsertUnbeianIpCheckTypeRequest.h
	include/alibabacloud/beian/model/InsertUnbeianIpCheckTypeResult.h
	include/alibabacloud/beian/model/ListUnbeianIpCheckTypeRequest.h
	include/alibabacloud/beian/model/ListUnbeianIpCheckTypeResult.h
	include/alibabacloud/beian/model/ManageAccessorDomainRequest.h
	include/alibabacloud/beian/model/ManageAccessorDomainResult.h
	include/alibabacloud/beian/model/ManageAccessorDomainWhiteListRequest.h
	include/alibabacloud/beian/model/ManageAccessorDomainWhiteListResult.h
	include/alibabacloud/beian/model/ManageAccessorIpRequest.h
	include/alibabacloud/beian/model/ManageAccessorIpResult.h
	include/alibabacloud/beian/model/QueryAccessorDomainRequest.h
	include/alibabacloud/beian/model/QueryAccessorDomainResult.h
	include/alibabacloud/beian/model/QueryAccessorDomainListRequest.h
	include/alibabacloud/beian/model/QueryAccessorDomainListResult.h
	include/alibabacloud/beian/model/QueryAccessorDomainStatusRequest.h
	include/alibabacloud/beian/model/QueryAccessorDomainStatusResult.h
	include/alibabacloud/beian/model/QueryAccessorDomainWhiteListRequest.h
	include/alibabacloud/beian/model/QueryAccessorDomainWhiteListResult.h
	include/alibabacloud/beian/model/QueryAccessorDomainsStatusRequest.h
	include/alibabacloud/beian/model/QueryAccessorDomainsStatusResult.h
	include/alibabacloud/beian/model/QueryAccessorIpRequest.h
	include/alibabacloud/beian/model/QueryAccessorIpResult.h
	include/alibabacloud/beian/model/SubmitAccessorFullDomainsOssListRequest.h
	include/alibabacloud/beian/model/SubmitAccessorFullDomainsOssListResult.h )

set(beian_src 
	src/BeianClient.cc
	src/model/DeleteUnbeianIpCheckTypeRequest.cc
	src/model/DeleteUnbeianIpCheckTypeResult.cc
	src/model/GetMainDomainRequest.cc
	src/model/GetMainDomainResult.cc
	src/model/InsertUnbeianIpCheckTypeRequest.cc
	src/model/InsertUnbeianIpCheckTypeResult.cc
	src/model/ListUnbeianIpCheckTypeRequest.cc
	src/model/ListUnbeianIpCheckTypeResult.cc
	src/model/ManageAccessorDomainRequest.cc
	src/model/ManageAccessorDomainResult.cc
	src/model/ManageAccessorDomainWhiteListRequest.cc
	src/model/ManageAccessorDomainWhiteListResult.cc
	src/model/ManageAccessorIpRequest.cc
	src/model/ManageAccessorIpResult.cc
	src/model/QueryAccessorDomainRequest.cc
	src/model/QueryAccessorDomainResult.cc
	src/model/QueryAccessorDomainListRequest.cc
	src/model/QueryAccessorDomainListResult.cc
	src/model/QueryAccessorDomainStatusRequest.cc
	src/model/QueryAccessorDomainStatusResult.cc
	src/model/QueryAccessorDomainWhiteListRequest.cc
	src/model/QueryAccessorDomainWhiteListResult.cc
	src/model/QueryAccessorDomainsStatusRequest.cc
	src/model/QueryAccessorDomainsStatusResult.cc
	src/model/QueryAccessorIpRequest.cc
	src/model/QueryAccessorIpResult.cc
	src/model/SubmitAccessorFullDomainsOssListRequest.cc
	src/model/SubmitAccessorFullDomainsOssListResult.cc )

add_library(beian ${LIB_TYPE}
	${beian_public_header}
	${beian_public_header_model}
	${beian_src})

set_target_properties(beian
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}beian
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(beian
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_BEIAN_LIBRARY)
endif()

target_include_directories(beian
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(beian
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(beian
		jsoncpp)
	target_include_directories(beian
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(beian
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(beian
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(beian
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(beian
		jsoncpp)
endif()

install(FILES ${beian_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/beian)
install(FILES ${beian_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/beian/model)
install(TARGETS beian
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)