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

set(quotas_public_header 
	include/alibabacloud/quotas/QuotasClient.h
	include/alibabacloud/quotas/QuotasExport.h )

set(quotas_public_header_model 
	include/alibabacloud/quotas/model/CreateQuotaAlarmRequest.h
	include/alibabacloud/quotas/model/CreateQuotaAlarmResult.h
	include/alibabacloud/quotas/model/CreateQuotaApplicationRequest.h
	include/alibabacloud/quotas/model/CreateQuotaApplicationResult.h
	include/alibabacloud/quotas/model/CreateQuotaApplicationsForTemplateRequest.h
	include/alibabacloud/quotas/model/CreateQuotaApplicationsForTemplateResult.h
	include/alibabacloud/quotas/model/CreateTemplateQuotaItemRequest.h
	include/alibabacloud/quotas/model/CreateTemplateQuotaItemResult.h
	include/alibabacloud/quotas/model/DeleteQuotaAlarmRequest.h
	include/alibabacloud/quotas/model/DeleteQuotaAlarmResult.h
	include/alibabacloud/quotas/model/DeleteTemplateQuotaItemRequest.h
	include/alibabacloud/quotas/model/DeleteTemplateQuotaItemResult.h
	include/alibabacloud/quotas/model/GetProductQuotaRequest.h
	include/alibabacloud/quotas/model/GetProductQuotaResult.h
	include/alibabacloud/quotas/model/GetProductQuotaDimensionRequest.h
	include/alibabacloud/quotas/model/GetProductQuotaDimensionResult.h
	include/alibabacloud/quotas/model/GetQuotaAlarmRequest.h
	include/alibabacloud/quotas/model/GetQuotaAlarmResult.h
	include/alibabacloud/quotas/model/GetQuotaApplicationRequest.h
	include/alibabacloud/quotas/model/GetQuotaApplicationResult.h
	include/alibabacloud/quotas/model/GetQuotaApplicationApprovalRequest.h
	include/alibabacloud/quotas/model/GetQuotaApplicationApprovalResult.h
	include/alibabacloud/quotas/model/GetQuotaTemplateServiceStatusRequest.h
	include/alibabacloud/quotas/model/GetQuotaTemplateServiceStatusResult.h
	include/alibabacloud/quotas/model/ListAlarmHistoriesRequest.h
	include/alibabacloud/quotas/model/ListAlarmHistoriesResult.h
	include/alibabacloud/quotas/model/ListDependentQuotasRequest.h
	include/alibabacloud/quotas/model/ListDependentQuotasResult.h
	include/alibabacloud/quotas/model/ListProductDimensionGroupsRequest.h
	include/alibabacloud/quotas/model/ListProductDimensionGroupsResult.h
	include/alibabacloud/quotas/model/ListProductQuotaDimensionsRequest.h
	include/alibabacloud/quotas/model/ListProductQuotaDimensionsResult.h
	include/alibabacloud/quotas/model/ListProductQuotasRequest.h
	include/alibabacloud/quotas/model/ListProductQuotasResult.h
	include/alibabacloud/quotas/model/ListProductsRequest.h
	include/alibabacloud/quotas/model/ListProductsResult.h
	include/alibabacloud/quotas/model/ListQuotaAlarmsRequest.h
	include/alibabacloud/quotas/model/ListQuotaAlarmsResult.h
	include/alibabacloud/quotas/model/ListQuotaApplicationTemplatesRequest.h
	include/alibabacloud/quotas/model/ListQuotaApplicationTemplatesResult.h
	include/alibabacloud/quotas/model/ListQuotaApplicationsRequest.h
	include/alibabacloud/quotas/model/ListQuotaApplicationsResult.h
	include/alibabacloud/quotas/model/ListQuotaApplicationsDetailForTemplateRequest.h
	include/alibabacloud/quotas/model/ListQuotaApplicationsDetailForTemplateResult.h
	include/alibabacloud/quotas/model/ListQuotaApplicationsForTemplateRequest.h
	include/alibabacloud/quotas/model/ListQuotaApplicationsForTemplateResult.h
	include/alibabacloud/quotas/model/ModifyQuotaTemplateServiceStatusRequest.h
	include/alibabacloud/quotas/model/ModifyQuotaTemplateServiceStatusResult.h
	include/alibabacloud/quotas/model/ModifyTemplateQuotaItemRequest.h
	include/alibabacloud/quotas/model/ModifyTemplateQuotaItemResult.h
	include/alibabacloud/quotas/model/RemindQuotaApplicationApprovalRequest.h
	include/alibabacloud/quotas/model/RemindQuotaApplicationApprovalResult.h
	include/alibabacloud/quotas/model/UpdateQuotaAlarmRequest.h
	include/alibabacloud/quotas/model/UpdateQuotaAlarmResult.h )

set(quotas_src 
	src/QuotasClient.cc
	src/model/CreateQuotaAlarmRequest.cc
	src/model/CreateQuotaAlarmResult.cc
	src/model/CreateQuotaApplicationRequest.cc
	src/model/CreateQuotaApplicationResult.cc
	src/model/CreateQuotaApplicationsForTemplateRequest.cc
	src/model/CreateQuotaApplicationsForTemplateResult.cc
	src/model/CreateTemplateQuotaItemRequest.cc
	src/model/CreateTemplateQuotaItemResult.cc
	src/model/DeleteQuotaAlarmRequest.cc
	src/model/DeleteQuotaAlarmResult.cc
	src/model/DeleteTemplateQuotaItemRequest.cc
	src/model/DeleteTemplateQuotaItemResult.cc
	src/model/GetProductQuotaRequest.cc
	src/model/GetProductQuotaResult.cc
	src/model/GetProductQuotaDimensionRequest.cc
	src/model/GetProductQuotaDimensionResult.cc
	src/model/GetQuotaAlarmRequest.cc
	src/model/GetQuotaAlarmResult.cc
	src/model/GetQuotaApplicationRequest.cc
	src/model/GetQuotaApplicationResult.cc
	src/model/GetQuotaApplicationApprovalRequest.cc
	src/model/GetQuotaApplicationApprovalResult.cc
	src/model/GetQuotaTemplateServiceStatusRequest.cc
	src/model/GetQuotaTemplateServiceStatusResult.cc
	src/model/ListAlarmHistoriesRequest.cc
	src/model/ListAlarmHistoriesResult.cc
	src/model/ListDependentQuotasRequest.cc
	src/model/ListDependentQuotasResult.cc
	src/model/ListProductDimensionGroupsRequest.cc
	src/model/ListProductDimensionGroupsResult.cc
	src/model/ListProductQuotaDimensionsRequest.cc
	src/model/ListProductQuotaDimensionsResult.cc
	src/model/ListProductQuotasRequest.cc
	src/model/ListProductQuotasResult.cc
	src/model/ListProductsRequest.cc
	src/model/ListProductsResult.cc
	src/model/ListQuotaAlarmsRequest.cc
	src/model/ListQuotaAlarmsResult.cc
	src/model/ListQuotaApplicationTemplatesRequest.cc
	src/model/ListQuotaApplicationTemplatesResult.cc
	src/model/ListQuotaApplicationsRequest.cc
	src/model/ListQuotaApplicationsResult.cc
	src/model/ListQuotaApplicationsDetailForTemplateRequest.cc
	src/model/ListQuotaApplicationsDetailForTemplateResult.cc
	src/model/ListQuotaApplicationsForTemplateRequest.cc
	src/model/ListQuotaApplicationsForTemplateResult.cc
	src/model/ModifyQuotaTemplateServiceStatusRequest.cc
	src/model/ModifyQuotaTemplateServiceStatusResult.cc
	src/model/ModifyTemplateQuotaItemRequest.cc
	src/model/ModifyTemplateQuotaItemResult.cc
	src/model/RemindQuotaApplicationApprovalRequest.cc
	src/model/RemindQuotaApplicationApprovalResult.cc
	src/model/UpdateQuotaAlarmRequest.cc
	src/model/UpdateQuotaAlarmResult.cc )

add_library(quotas ${LIB_TYPE}
	${quotas_public_header}
	${quotas_public_header_model}
	${quotas_src})

set_target_properties(quotas
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}quotas
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(quotas
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_QUOTAS_LIBRARY)
endif()

target_include_directories(quotas
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(quotas
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(quotas
		jsoncpp)
	target_include_directories(quotas
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(quotas
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(quotas
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(quotas
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(quotas
		jsoncpp)
endif()

install(FILES ${quotas_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/quotas)
install(FILES ${quotas_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/quotas/model)
install(TARGETS quotas
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)