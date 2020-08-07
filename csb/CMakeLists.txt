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

set(csb_public_header 
	include/alibabacloud/csb/CSBClient.h
	include/alibabacloud/csb/CSBExport.h )

set(csb_public_header_model 
	include/alibabacloud/csb/model/ApproveOrderListRequest.h
	include/alibabacloud/csb/model/ApproveOrderListResult.h
	include/alibabacloud/csb/model/CheckSLRDeleteRequest.h
	include/alibabacloud/csb/model/CheckSLRDeleteResult.h
	include/alibabacloud/csb/model/CheckServiceExistRequest.h
	include/alibabacloud/csb/model/CheckServiceExistResult.h
	include/alibabacloud/csb/model/CommitSuccessedServicesRequest.h
	include/alibabacloud/csb/model/CommitSuccessedServicesResult.h
	include/alibabacloud/csb/model/CreateCredentialsRequest.h
	include/alibabacloud/csb/model/CreateCredentialsResult.h
	include/alibabacloud/csb/model/CreateOrderRequest.h
	include/alibabacloud/csb/model/CreateOrderResult.h
	include/alibabacloud/csb/model/CreateProjectRequest.h
	include/alibabacloud/csb/model/CreateProjectResult.h
	include/alibabacloud/csb/model/CreateServiceRequest.h
	include/alibabacloud/csb/model/CreateServiceResult.h
	include/alibabacloud/csb/model/DeleteCasServiceRequest.h
	include/alibabacloud/csb/model/DeleteCasServiceResult.h
	include/alibabacloud/csb/model/DeleteCredentialsListRequest.h
	include/alibabacloud/csb/model/DeleteCredentialsListResult.h
	include/alibabacloud/csb/model/DeleteOrderListRequest.h
	include/alibabacloud/csb/model/DeleteOrderListResult.h
	include/alibabacloud/csb/model/DeleteProjectRequest.h
	include/alibabacloud/csb/model/DeleteProjectResult.h
	include/alibabacloud/csb/model/DeleteProjectListRequest.h
	include/alibabacloud/csb/model/DeleteProjectListResult.h
	include/alibabacloud/csb/model/DeleteServiceRequest.h
	include/alibabacloud/csb/model/DeleteServiceResult.h
	include/alibabacloud/csb/model/DeleteServiceListRequest.h
	include/alibabacloud/csb/model/DeleteServiceListResult.h
	include/alibabacloud/csb/model/DeleteUnionCasServiceRequest.h
	include/alibabacloud/csb/model/DeleteUnionCasServiceResult.h
	include/alibabacloud/csb/model/DescribeRegionsRequest.h
	include/alibabacloud/csb/model/DescribeRegionsResult.h
	include/alibabacloud/csb/model/FindAllLinkRuleRequest.h
	include/alibabacloud/csb/model/FindAllLinkRuleResult.h
	include/alibabacloud/csb/model/FindApprovalOrderListRequest.h
	include/alibabacloud/csb/model/FindApprovalOrderListResult.h
	include/alibabacloud/csb/model/FindApproveServiceListRequest.h
	include/alibabacloud/csb/model/FindApproveServiceListResult.h
	include/alibabacloud/csb/model/FindBrokerSLOHisListRequest.h
	include/alibabacloud/csb/model/FindBrokerSLOHisListResult.h
	include/alibabacloud/csb/model/FindBrokerSLOListRequest.h
	include/alibabacloud/csb/model/FindBrokerSLOListResult.h
	include/alibabacloud/csb/model/FindCredentialStatisticalDataRequest.h
	include/alibabacloud/csb/model/FindCredentialStatisticalDataResult.h
	include/alibabacloud/csb/model/FindCredentialsListRequest.h
	include/alibabacloud/csb/model/FindCredentialsListResult.h
	include/alibabacloud/csb/model/FindInstanceListRequest.h
	include/alibabacloud/csb/model/FindInstanceListResult.h
	include/alibabacloud/csb/model/FindInstanceNodeListRequest.h
	include/alibabacloud/csb/model/FindInstanceNodeListResult.h
	include/alibabacloud/csb/model/FindOrderableListRequest.h
	include/alibabacloud/csb/model/FindOrderableListResult.h
	include/alibabacloud/csb/model/FindOrderedListRequest.h
	include/alibabacloud/csb/model/FindOrderedListResult.h
	include/alibabacloud/csb/model/FindOrderedServiceListRequest.h
	include/alibabacloud/csb/model/FindOrderedServiceListResult.h
	include/alibabacloud/csb/model/FindOtherInstanceListRequest.h
	include/alibabacloud/csb/model/FindOtherInstanceListResult.h
	include/alibabacloud/csb/model/FindProjectListRequest.h
	include/alibabacloud/csb/model/FindProjectListResult.h
	include/alibabacloud/csb/model/FindProjectStatisticalDataRequest.h
	include/alibabacloud/csb/model/FindProjectStatisticalDataResult.h
	include/alibabacloud/csb/model/FindProjectsNameListRequest.h
	include/alibabacloud/csb/model/FindProjectsNameListResult.h
	include/alibabacloud/csb/model/FindServiceCredentialStatisticalDataRequest.h
	include/alibabacloud/csb/model/FindServiceCredentialStatisticalDataResult.h
	include/alibabacloud/csb/model/FindServiceListRequest.h
	include/alibabacloud/csb/model/FindServiceListResult.h
	include/alibabacloud/csb/model/FindServiceStatisticalDataRequest.h
	include/alibabacloud/csb/model/FindServiceStatisticalDataResult.h
	include/alibabacloud/csb/model/GetConsoleSLORequest.h
	include/alibabacloud/csb/model/GetConsoleSLOResult.h
	include/alibabacloud/csb/model/GetInstanceRequest.h
	include/alibabacloud/csb/model/GetInstanceResult.h
	include/alibabacloud/csb/model/GetMetaServerSLORequest.h
	include/alibabacloud/csb/model/GetMetaServerSLOResult.h
	include/alibabacloud/csb/model/GetOrderRequest.h
	include/alibabacloud/csb/model/GetOrderResult.h
	include/alibabacloud/csb/model/GetProjectRequest.h
	include/alibabacloud/csb/model/GetProjectResult.h
	include/alibabacloud/csb/model/GetServiceRequest.h
	include/alibabacloud/csb/model/GetServiceResult.h
	include/alibabacloud/csb/model/ImportCredentialsRequest.h
	include/alibabacloud/csb/model/ImportCredentialsResult.h
	include/alibabacloud/csb/model/PublishCasServiceRequest.h
	include/alibabacloud/csb/model/PublishCasServiceResult.h
	include/alibabacloud/csb/model/PublishUnionCasServiceRequest.h
	include/alibabacloud/csb/model/PublishUnionCasServiceResult.h
	include/alibabacloud/csb/model/RenewCredentialsRequest.h
	include/alibabacloud/csb/model/RenewCredentialsResult.h
	include/alibabacloud/csb/model/ReplaceCredentialRequest.h
	include/alibabacloud/csb/model/ReplaceCredentialResult.h
	include/alibabacloud/csb/model/UpdateOrderRequest.h
	include/alibabacloud/csb/model/UpdateOrderResult.h
	include/alibabacloud/csb/model/UpdateOrderListRequest.h
	include/alibabacloud/csb/model/UpdateOrderListResult.h
	include/alibabacloud/csb/model/UpdateProjectRequest.h
	include/alibabacloud/csb/model/UpdateProjectResult.h
	include/alibabacloud/csb/model/UpdateProjectListStatusRequest.h
	include/alibabacloud/csb/model/UpdateProjectListStatusResult.h
	include/alibabacloud/csb/model/UpdateServiceRequest.h
	include/alibabacloud/csb/model/UpdateServiceResult.h
	include/alibabacloud/csb/model/UpdateServiceListStatusRequest.h
	include/alibabacloud/csb/model/UpdateServiceListStatusResult.h
	include/alibabacloud/csb/model/UpdateServiceQPSRequest.h
	include/alibabacloud/csb/model/UpdateServiceQPSResult.h )

set(csb_src 
	src/CSBClient.cc
	src/model/ApproveOrderListRequest.cc
	src/model/ApproveOrderListResult.cc
	src/model/CheckSLRDeleteRequest.cc
	src/model/CheckSLRDeleteResult.cc
	src/model/CheckServiceExistRequest.cc
	src/model/CheckServiceExistResult.cc
	src/model/CommitSuccessedServicesRequest.cc
	src/model/CommitSuccessedServicesResult.cc
	src/model/CreateCredentialsRequest.cc
	src/model/CreateCredentialsResult.cc
	src/model/CreateOrderRequest.cc
	src/model/CreateOrderResult.cc
	src/model/CreateProjectRequest.cc
	src/model/CreateProjectResult.cc
	src/model/CreateServiceRequest.cc
	src/model/CreateServiceResult.cc
	src/model/DeleteCasServiceRequest.cc
	src/model/DeleteCasServiceResult.cc
	src/model/DeleteCredentialsListRequest.cc
	src/model/DeleteCredentialsListResult.cc
	src/model/DeleteOrderListRequest.cc
	src/model/DeleteOrderListResult.cc
	src/model/DeleteProjectRequest.cc
	src/model/DeleteProjectResult.cc
	src/model/DeleteProjectListRequest.cc
	src/model/DeleteProjectListResult.cc
	src/model/DeleteServiceRequest.cc
	src/model/DeleteServiceResult.cc
	src/model/DeleteServiceListRequest.cc
	src/model/DeleteServiceListResult.cc
	src/model/DeleteUnionCasServiceRequest.cc
	src/model/DeleteUnionCasServiceResult.cc
	src/model/DescribeRegionsRequest.cc
	src/model/DescribeRegionsResult.cc
	src/model/FindAllLinkRuleRequest.cc
	src/model/FindAllLinkRuleResult.cc
	src/model/FindApprovalOrderListRequest.cc
	src/model/FindApprovalOrderListResult.cc
	src/model/FindApproveServiceListRequest.cc
	src/model/FindApproveServiceListResult.cc
	src/model/FindBrokerSLOHisListRequest.cc
	src/model/FindBrokerSLOHisListResult.cc
	src/model/FindBrokerSLOListRequest.cc
	src/model/FindBrokerSLOListResult.cc
	src/model/FindCredentialStatisticalDataRequest.cc
	src/model/FindCredentialStatisticalDataResult.cc
	src/model/FindCredentialsListRequest.cc
	src/model/FindCredentialsListResult.cc
	src/model/FindInstanceListRequest.cc
	src/model/FindInstanceListResult.cc
	src/model/FindInstanceNodeListRequest.cc
	src/model/FindInstanceNodeListResult.cc
	src/model/FindOrderableListRequest.cc
	src/model/FindOrderableListResult.cc
	src/model/FindOrderedListRequest.cc
	src/model/FindOrderedListResult.cc
	src/model/FindOrderedServiceListRequest.cc
	src/model/FindOrderedServiceListResult.cc
	src/model/FindOtherInstanceListRequest.cc
	src/model/FindOtherInstanceListResult.cc
	src/model/FindProjectListRequest.cc
	src/model/FindProjectListResult.cc
	src/model/FindProjectStatisticalDataRequest.cc
	src/model/FindProjectStatisticalDataResult.cc
	src/model/FindProjectsNameListRequest.cc
	src/model/FindProjectsNameListResult.cc
	src/model/FindServiceCredentialStatisticalDataRequest.cc
	src/model/FindServiceCredentialStatisticalDataResult.cc
	src/model/FindServiceListRequest.cc
	src/model/FindServiceListResult.cc
	src/model/FindServiceStatisticalDataRequest.cc
	src/model/FindServiceStatisticalDataResult.cc
	src/model/GetConsoleSLORequest.cc
	src/model/GetConsoleSLOResult.cc
	src/model/GetInstanceRequest.cc
	src/model/GetInstanceResult.cc
	src/model/GetMetaServerSLORequest.cc
	src/model/GetMetaServerSLOResult.cc
	src/model/GetOrderRequest.cc
	src/model/GetOrderResult.cc
	src/model/GetProjectRequest.cc
	src/model/GetProjectResult.cc
	src/model/GetServiceRequest.cc
	src/model/GetServiceResult.cc
	src/model/ImportCredentialsRequest.cc
	src/model/ImportCredentialsResult.cc
	src/model/PublishCasServiceRequest.cc
	src/model/PublishCasServiceResult.cc
	src/model/PublishUnionCasServiceRequest.cc
	src/model/PublishUnionCasServiceResult.cc
	src/model/RenewCredentialsRequest.cc
	src/model/RenewCredentialsResult.cc
	src/model/ReplaceCredentialRequest.cc
	src/model/ReplaceCredentialResult.cc
	src/model/UpdateOrderRequest.cc
	src/model/UpdateOrderResult.cc
	src/model/UpdateOrderListRequest.cc
	src/model/UpdateOrderListResult.cc
	src/model/UpdateProjectRequest.cc
	src/model/UpdateProjectResult.cc
	src/model/UpdateProjectListStatusRequest.cc
	src/model/UpdateProjectListStatusResult.cc
	src/model/UpdateServiceRequest.cc
	src/model/UpdateServiceResult.cc
	src/model/UpdateServiceListStatusRequest.cc
	src/model/UpdateServiceListStatusResult.cc
	src/model/UpdateServiceQPSRequest.cc
	src/model/UpdateServiceQPSResult.cc )

add_library(csb ${LIB_TYPE}
	${csb_public_header}
	${csb_public_header_model}
	${csb_src})

set_target_properties(csb
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}csb
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(csb
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_CSB_LIBRARY)
endif()

target_include_directories(csb
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(csb
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(csb
		jsoncpp)
	target_include_directories(csb
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(csb
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(csb
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(csb
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(csb
		jsoncpp)
endif()

install(FILES ${csb_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/csb)
install(FILES ${csb_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/csb/model)
install(TARGETS csb
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)