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

set(crm_public_header 
	include/alibabacloud/crm/CrmClient.h
	include/alibabacloud/crm/CrmExport.h )

set(crm_public_header_model 
	include/alibabacloud/crm/model/AddIdentityCertifiedForBidUserRequest.h
	include/alibabacloud/crm/model/AddIdentityCertifiedForBidUserResult.h
	include/alibabacloud/crm/model/AddLabelRequest.h
	include/alibabacloud/crm/model/AddLabelResult.h
	include/alibabacloud/crm/model/AddLabelForBidRequest.h
	include/alibabacloud/crm/model/AddLabelForBidResult.h
	include/alibabacloud/crm/model/BatchGetAliyunIdByAliyunPkRequest.h
	include/alibabacloud/crm/model/BatchGetAliyunIdByAliyunPkResult.h
	include/alibabacloud/crm/model/CheckLabelRequest.h
	include/alibabacloud/crm/model/CheckLabelResult.h
	include/alibabacloud/crm/model/CheckLabelForBidRequest.h
	include/alibabacloud/crm/model/CheckLabelForBidResult.h
	include/alibabacloud/crm/model/DeleteLabelRequest.h
	include/alibabacloud/crm/model/DeleteLabelResult.h
	include/alibabacloud/crm/model/DeleteLabelForBidRequest.h
	include/alibabacloud/crm/model/DeleteLabelForBidResult.h
	include/alibabacloud/crm/model/GetAliyunPkByAliyunIdRequest.h
	include/alibabacloud/crm/model/GetAliyunPkByAliyunIdResult.h
	include/alibabacloud/crm/model/QueryBidUserCertifiedInfoRequest.h
	include/alibabacloud/crm/model/QueryBidUserCertifiedInfoResult.h
	include/alibabacloud/crm/model/QueryCustomerLabelRequest.h
	include/alibabacloud/crm/model/QueryCustomerLabelResult.h
	include/alibabacloud/crm/model/RemoveIdentityCertifiedForBidUserRequest.h
	include/alibabacloud/crm/model/RemoveIdentityCertifiedForBidUserResult.h )

set(crm_src 
	src/CrmClient.cc
	src/model/AddIdentityCertifiedForBidUserRequest.cc
	src/model/AddIdentityCertifiedForBidUserResult.cc
	src/model/AddLabelRequest.cc
	src/model/AddLabelResult.cc
	src/model/AddLabelForBidRequest.cc
	src/model/AddLabelForBidResult.cc
	src/model/BatchGetAliyunIdByAliyunPkRequest.cc
	src/model/BatchGetAliyunIdByAliyunPkResult.cc
	src/model/CheckLabelRequest.cc
	src/model/CheckLabelResult.cc
	src/model/CheckLabelForBidRequest.cc
	src/model/CheckLabelForBidResult.cc
	src/model/DeleteLabelRequest.cc
	src/model/DeleteLabelResult.cc
	src/model/DeleteLabelForBidRequest.cc
	src/model/DeleteLabelForBidResult.cc
	src/model/GetAliyunPkByAliyunIdRequest.cc
	src/model/GetAliyunPkByAliyunIdResult.cc
	src/model/QueryBidUserCertifiedInfoRequest.cc
	src/model/QueryBidUserCertifiedInfoResult.cc
	src/model/QueryCustomerLabelRequest.cc
	src/model/QueryCustomerLabelResult.cc
	src/model/RemoveIdentityCertifiedForBidUserRequest.cc
	src/model/RemoveIdentityCertifiedForBidUserResult.cc )

add_library(crm ${LIB_TYPE}
	${crm_public_header}
	${crm_public_header_model}
	${crm_src})

set_target_properties(crm
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}crm
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(crm
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CRM_LIBRARY)
endif()

target_include_directories(crm
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(crm
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(crm
		jsoncpp)
	target_include_directories(crm
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(crm
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(crm
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(crm
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(crm
		jsoncpp)
endif()

install(FILES ${crm_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/crm)
install(FILES ${crm_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/crm/model)
install(TARGETS crm
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)