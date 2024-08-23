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

set(governance_public_header 
	include/alibabacloud/governance/GovernanceClient.h
	include/alibabacloud/governance/GovernanceExport.h )

set(governance_public_header_model 
	include/alibabacloud/governance/model/BatchEnrollAccountsRequest.h
	include/alibabacloud/governance/model/BatchEnrollAccountsResult.h
	include/alibabacloud/governance/model/CreateAccountFactoryBaselineRequest.h
	include/alibabacloud/governance/model/CreateAccountFactoryBaselineResult.h
	include/alibabacloud/governance/model/DeleteAccountFactoryBaselineRequest.h
	include/alibabacloud/governance/model/DeleteAccountFactoryBaselineResult.h
	include/alibabacloud/governance/model/EnrollAccountRequest.h
	include/alibabacloud/governance/model/EnrollAccountResult.h
	include/alibabacloud/governance/model/GetAccountFactoryBaselineRequest.h
	include/alibabacloud/governance/model/GetAccountFactoryBaselineResult.h
	include/alibabacloud/governance/model/GetEnrolledAccountRequest.h
	include/alibabacloud/governance/model/GetEnrolledAccountResult.h
	include/alibabacloud/governance/model/ListAccountFactoryBaselineItemsRequest.h
	include/alibabacloud/governance/model/ListAccountFactoryBaselineItemsResult.h
	include/alibabacloud/governance/model/ListAccountFactoryBaselinesRequest.h
	include/alibabacloud/governance/model/ListAccountFactoryBaselinesResult.h
	include/alibabacloud/governance/model/ListEnrolledAccountsRequest.h
	include/alibabacloud/governance/model/ListEnrolledAccountsResult.h
	include/alibabacloud/governance/model/ListEvaluationMetadataRequest.h
	include/alibabacloud/governance/model/ListEvaluationMetadataResult.h
	include/alibabacloud/governance/model/ListEvaluationMetricDetailsRequest.h
	include/alibabacloud/governance/model/ListEvaluationMetricDetailsResult.h
	include/alibabacloud/governance/model/ListEvaluationResultsRequest.h
	include/alibabacloud/governance/model/ListEvaluationResultsResult.h
	include/alibabacloud/governance/model/ListEvaluationScoreHistoryRequest.h
	include/alibabacloud/governance/model/ListEvaluationScoreHistoryResult.h
	include/alibabacloud/governance/model/RunEvaluationRequest.h
	include/alibabacloud/governance/model/RunEvaluationResult.h
	include/alibabacloud/governance/model/UpdateAccountFactoryBaselineRequest.h
	include/alibabacloud/governance/model/UpdateAccountFactoryBaselineResult.h )

set(governance_src 
	src/GovernanceClient.cc
	src/model/BatchEnrollAccountsRequest.cc
	src/model/BatchEnrollAccountsResult.cc
	src/model/CreateAccountFactoryBaselineRequest.cc
	src/model/CreateAccountFactoryBaselineResult.cc
	src/model/DeleteAccountFactoryBaselineRequest.cc
	src/model/DeleteAccountFactoryBaselineResult.cc
	src/model/EnrollAccountRequest.cc
	src/model/EnrollAccountResult.cc
	src/model/GetAccountFactoryBaselineRequest.cc
	src/model/GetAccountFactoryBaselineResult.cc
	src/model/GetEnrolledAccountRequest.cc
	src/model/GetEnrolledAccountResult.cc
	src/model/ListAccountFactoryBaselineItemsRequest.cc
	src/model/ListAccountFactoryBaselineItemsResult.cc
	src/model/ListAccountFactoryBaselinesRequest.cc
	src/model/ListAccountFactoryBaselinesResult.cc
	src/model/ListEnrolledAccountsRequest.cc
	src/model/ListEnrolledAccountsResult.cc
	src/model/ListEvaluationMetadataRequest.cc
	src/model/ListEvaluationMetadataResult.cc
	src/model/ListEvaluationMetricDetailsRequest.cc
	src/model/ListEvaluationMetricDetailsResult.cc
	src/model/ListEvaluationResultsRequest.cc
	src/model/ListEvaluationResultsResult.cc
	src/model/ListEvaluationScoreHistoryRequest.cc
	src/model/ListEvaluationScoreHistoryResult.cc
	src/model/RunEvaluationRequest.cc
	src/model/RunEvaluationResult.cc
	src/model/UpdateAccountFactoryBaselineRequest.cc
	src/model/UpdateAccountFactoryBaselineResult.cc )

add_library(governance ${LIB_TYPE}
	${governance_public_header}
	${governance_public_header_model}
	${governance_src})

set_target_properties(governance
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}governance
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(governance
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_GOVERNANCE_LIBRARY)
endif()

target_include_directories(governance
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(governance
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(governance
		jsoncpp)
	target_include_directories(governance
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(governance
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(governance
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(governance
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(governance
		jsoncpp)
endif()

install(FILES ${governance_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/governance)
install(FILES ${governance_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/governance/model)
install(TARGETS governance
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)