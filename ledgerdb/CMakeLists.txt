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

set(ledgerdb_public_header 
	include/alibabacloud/ledgerdb/LedgerdbClient.h
	include/alibabacloud/ledgerdb/LedgerdbExport.h )

set(ledgerdb_public_header_model 
	include/alibabacloud/ledgerdb/model/AcceptMemberRequest.h
	include/alibabacloud/ledgerdb/model/AcceptMemberResult.h
	include/alibabacloud/ledgerdb/model/CreateVpcEndpointRequest.h
	include/alibabacloud/ledgerdb/model/CreateVpcEndpointResult.h
	include/alibabacloud/ledgerdb/model/DeleteLedgerRequest.h
	include/alibabacloud/ledgerdb/model/DeleteLedgerResult.h
	include/alibabacloud/ledgerdb/model/DeleteMemberRequest.h
	include/alibabacloud/ledgerdb/model/DeleteMemberResult.h
	include/alibabacloud/ledgerdb/model/DeleteVpcEndpointRequest.h
	include/alibabacloud/ledgerdb/model/DeleteVpcEndpointResult.h
	include/alibabacloud/ledgerdb/model/DescribeLedgerRequest.h
	include/alibabacloud/ledgerdb/model/DescribeLedgerResult.h
	include/alibabacloud/ledgerdb/model/DescribeLedgersRequest.h
	include/alibabacloud/ledgerdb/model/DescribeLedgersResult.h
	include/alibabacloud/ledgerdb/model/DescribeRegionsRequest.h
	include/alibabacloud/ledgerdb/model/DescribeRegionsResult.h
	include/alibabacloud/ledgerdb/model/DisableMemberRequest.h
	include/alibabacloud/ledgerdb/model/DisableMemberResult.h
	include/alibabacloud/ledgerdb/model/EnableMemberRequest.h
	include/alibabacloud/ledgerdb/model/EnableMemberResult.h
	include/alibabacloud/ledgerdb/model/GetJournalRequest.h
	include/alibabacloud/ledgerdb/model/GetJournalResult.h
	include/alibabacloud/ledgerdb/model/GetMemberRequest.h
	include/alibabacloud/ledgerdb/model/GetMemberResult.h
	include/alibabacloud/ledgerdb/model/InviteMembersRequest.h
	include/alibabacloud/ledgerdb/model/InviteMembersResult.h
	include/alibabacloud/ledgerdb/model/ListJournalsRequest.h
	include/alibabacloud/ledgerdb/model/ListJournalsResult.h
	include/alibabacloud/ledgerdb/model/ListMembersRequest.h
	include/alibabacloud/ledgerdb/model/ListMembersResult.h
	include/alibabacloud/ledgerdb/model/ListTimeAnchorsRequest.h
	include/alibabacloud/ledgerdb/model/ListTimeAnchorsResult.h
	include/alibabacloud/ledgerdb/model/ListVpcEndpointsRequest.h
	include/alibabacloud/ledgerdb/model/ListVpcEndpointsResult.h
	include/alibabacloud/ledgerdb/model/ModifyLedgerAttributeRequest.h
	include/alibabacloud/ledgerdb/model/ModifyLedgerAttributeResult.h
	include/alibabacloud/ledgerdb/model/ModifyMemberACLsRequest.h
	include/alibabacloud/ledgerdb/model/ModifyMemberACLsResult.h
	include/alibabacloud/ledgerdb/model/ModifyMemberKeyRequest.h
	include/alibabacloud/ledgerdb/model/ModifyMemberKeyResult.h )

set(ledgerdb_src 
	src/LedgerdbClient.cc
	src/model/AcceptMemberRequest.cc
	src/model/AcceptMemberResult.cc
	src/model/CreateVpcEndpointRequest.cc
	src/model/CreateVpcEndpointResult.cc
	src/model/DeleteLedgerRequest.cc
	src/model/DeleteLedgerResult.cc
	src/model/DeleteMemberRequest.cc
	src/model/DeleteMemberResult.cc
	src/model/DeleteVpcEndpointRequest.cc
	src/model/DeleteVpcEndpointResult.cc
	src/model/DescribeLedgerRequest.cc
	src/model/DescribeLedgerResult.cc
	src/model/DescribeLedgersRequest.cc
	src/model/DescribeLedgersResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/DisableMemberRequest.cc
	src/model/DisableMemberResult.cc
	src/model/EnableMemberRequest.cc
	src/model/EnableMemberResult.cc
	src/model/GetJournalRequest.cc
	src/model/GetJournalResult.cc
	src/model/GetMemberRequest.cc
	src/model/GetMemberResult.cc
	src/model/InviteMembersRequest.cc
	src/model/InviteMembersResult.cc
	src/model/ListJournalsRequest.cc
	src/model/ListJournalsResult.cc
	src/model/ListMembersRequest.cc
	src/model/ListMembersResult.cc
	src/model/ListTimeAnchorsRequest.cc
	src/model/ListTimeAnchorsResult.cc
	src/model/ListVpcEndpointsRequest.cc
	src/model/ListVpcEndpointsResult.cc
	src/model/ModifyLedgerAttributeRequest.cc
	src/model/ModifyLedgerAttributeResult.cc
	src/model/ModifyMemberACLsRequest.cc
	src/model/ModifyMemberACLsResult.cc
	src/model/ModifyMemberKeyRequest.cc
	src/model/ModifyMemberKeyResult.cc )

add_library(ledgerdb ${LIB_TYPE}
	${ledgerdb_public_header}
	${ledgerdb_public_header_model}
	${ledgerdb_src})

set_target_properties(ledgerdb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ledgerdb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ledgerdb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_LEDGERDB_LIBRARY)
endif()

target_include_directories(ledgerdb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ledgerdb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ledgerdb
		jsoncpp)
	target_include_directories(ledgerdb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ledgerdb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ledgerdb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ledgerdb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ledgerdb
		jsoncpp)
endif()

install(FILES ${ledgerdb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ledgerdb)
install(FILES ${ledgerdb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ledgerdb/model)
install(TARGETS ledgerdb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)