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

set(iot_public_header 
	include/alibabacloud/iot/IotClient.h
	include/alibabacloud/iot/IotExport.h )

set(iot_public_header_model 
	include/alibabacloud/iot/model/QueryAppDeviceListRequest.h
	include/alibabacloud/iot/model/QueryAppDeviceListResult.h
	include/alibabacloud/iot/model/DeleteTopicRouteTableRequest.h
	include/alibabacloud/iot/model/DeleteTopicRouteTableResult.h
	include/alibabacloud/iot/model/QueryDeviceGroupListRequest.h
	include/alibabacloud/iot/model/QueryDeviceGroupListResult.h
	include/alibabacloud/iot/model/QueryDeviceEventDataRequest.h
	include/alibabacloud/iot/model/QueryDeviceEventDataResult.h
	include/alibabacloud/iot/model/GetDeviceStatusRequest.h
	include/alibabacloud/iot/model/GetDeviceStatusResult.h
	include/alibabacloud/iot/model/DeleteDeviceRequest.h
	include/alibabacloud/iot/model/DeleteDeviceResult.h
	include/alibabacloud/iot/model/CreateDeviceGroupRequest.h
	include/alibabacloud/iot/model/CreateDeviceGroupResult.h
	include/alibabacloud/iot/model/EnableThingRequest.h
	include/alibabacloud/iot/model/EnableThingResult.h
	include/alibabacloud/iot/model/RRpcRequest.h
	include/alibabacloud/iot/model/RRpcResult.h
	include/alibabacloud/iot/model/DeleteRuleRequest.h
	include/alibabacloud/iot/model/DeleteRuleResult.h
	include/alibabacloud/iot/model/QueryProductTopicRequest.h
	include/alibabacloud/iot/model/QueryProductTopicResult.h
	include/alibabacloud/iot/model/GetThingTopoRequest.h
	include/alibabacloud/iot/model/GetThingTopoResult.h
	include/alibabacloud/iot/model/QueryPageByApplyIdRequest.h
	include/alibabacloud/iot/model/QueryPageByApplyIdResult.h
	include/alibabacloud/iot/model/CreateTopicRouteTableRequest.h
	include/alibabacloud/iot/model/CreateTopicRouteTableResult.h
	include/alibabacloud/iot/model/CreateProductRequest.h
	include/alibabacloud/iot/model/CreateProductResult.h
	include/alibabacloud/iot/model/UpdateRuleRequest.h
	include/alibabacloud/iot/model/UpdateRuleResult.h
	include/alibabacloud/iot/model/QueryDevicePropertyDataRequest.h
	include/alibabacloud/iot/model/QueryDevicePropertyDataResult.h
	include/alibabacloud/iot/model/UpdateDeviceGroupRequest.h
	include/alibabacloud/iot/model/UpdateDeviceGroupResult.h
	include/alibabacloud/iot/model/DeleteDeviceGroupRequest.h
	include/alibabacloud/iot/model/DeleteDeviceGroupResult.h
	include/alibabacloud/iot/model/QueryDevicePropRequest.h
	include/alibabacloud/iot/model/QueryDevicePropResult.h
	include/alibabacloud/iot/model/DeleteDevicePropRequest.h
	include/alibabacloud/iot/model/DeleteDevicePropResult.h
	include/alibabacloud/iot/model/StopRuleRequest.h
	include/alibabacloud/iot/model/StopRuleResult.h
	include/alibabacloud/iot/model/QueryDeviceGroupByDeviceRequest.h
	include/alibabacloud/iot/model/QueryDeviceGroupByDeviceResult.h
	include/alibabacloud/iot/model/QueryDeviceDetailRequest.h
	include/alibabacloud/iot/model/QueryDeviceDetailResult.h
	include/alibabacloud/iot/model/NotifyAddThingTopoRequest.h
	include/alibabacloud/iot/model/NotifyAddThingTopoResult.h
	include/alibabacloud/iot/model/InvokeThingServiceRequest.h
	include/alibabacloud/iot/model/InvokeThingServiceResult.h
	include/alibabacloud/iot/model/ListRuleActionsRequest.h
	include/alibabacloud/iot/model/ListRuleActionsResult.h
	include/alibabacloud/iot/model/BatchCheckDeviceNamesRequest.h
	include/alibabacloud/iot/model/BatchCheckDeviceNamesResult.h
	include/alibabacloud/iot/model/UpdateProductTopicRequest.h
	include/alibabacloud/iot/model/UpdateProductTopicResult.h
	include/alibabacloud/iot/model/UpdateRuleActionRequest.h
	include/alibabacloud/iot/model/UpdateRuleActionResult.h
	include/alibabacloud/iot/model/UpdateProductRequest.h
	include/alibabacloud/iot/model/UpdateProductResult.h
	include/alibabacloud/iot/model/QueryProductRequest.h
	include/alibabacloud/iot/model/QueryProductResult.h
	include/alibabacloud/iot/model/UpdateDeviceShadowRequest.h
	include/alibabacloud/iot/model/UpdateDeviceShadowResult.h
	include/alibabacloud/iot/model/QueryBatchRegisterDeviceStatusRequest.h
	include/alibabacloud/iot/model/QueryBatchRegisterDeviceStatusResult.h
	include/alibabacloud/iot/model/SetDevicePropertyRequest.h
	include/alibabacloud/iot/model/SetDevicePropertyResult.h
	include/alibabacloud/iot/model/RegisterDeviceRequest.h
	include/alibabacloud/iot/model/RegisterDeviceResult.h
	include/alibabacloud/iot/model/QueryDeviceRequest.h
	include/alibabacloud/iot/model/QueryDeviceResult.h
	include/alibabacloud/iot/model/BatchDeleteDeviceGroupRelationsRequest.h
	include/alibabacloud/iot/model/BatchDeleteDeviceGroupRelationsResult.h
	include/alibabacloud/iot/model/QueryDeviceGroupTagListRequest.h
	include/alibabacloud/iot/model/QueryDeviceGroupTagListResult.h
	include/alibabacloud/iot/model/ListRuleRequest.h
	include/alibabacloud/iot/model/ListRuleResult.h
	include/alibabacloud/iot/model/QueryTopicRouteTableRequest.h
	include/alibabacloud/iot/model/QueryTopicRouteTableResult.h
	include/alibabacloud/iot/model/CreateRuleRequest.h
	include/alibabacloud/iot/model/CreateRuleResult.h
	include/alibabacloud/iot/model/StartRuleRequest.h
	include/alibabacloud/iot/model/StartRuleResult.h
	include/alibabacloud/iot/model/QueryProductListRequest.h
	include/alibabacloud/iot/model/QueryProductListResult.h
	include/alibabacloud/iot/model/QueryDevicePropertyStatusRequest.h
	include/alibabacloud/iot/model/QueryDevicePropertyStatusResult.h
	include/alibabacloud/iot/model/QueryDeviceStatisticsRequest.h
	include/alibabacloud/iot/model/QueryDeviceStatisticsResult.h
	include/alibabacloud/iot/model/PubRequest.h
	include/alibabacloud/iot/model/PubResult.h
	include/alibabacloud/iot/model/DeleteProductRequest.h
	include/alibabacloud/iot/model/DeleteProductResult.h
	include/alibabacloud/iot/model/SaveDevicePropRequest.h
	include/alibabacloud/iot/model/SaveDevicePropResult.h
	include/alibabacloud/iot/model/DeleteProductTopicRequest.h
	include/alibabacloud/iot/model/DeleteProductTopicResult.h
	include/alibabacloud/iot/model/QueryDeviceServiceDataRequest.h
	include/alibabacloud/iot/model/QueryDeviceServiceDataResult.h
	include/alibabacloud/iot/model/BatchRegisterDeviceWithApplyIdRequest.h
	include/alibabacloud/iot/model/BatchRegisterDeviceWithApplyIdResult.h
	include/alibabacloud/iot/model/DisableThingRequest.h
	include/alibabacloud/iot/model/DisableThingResult.h
	include/alibabacloud/iot/model/CreateProductTopicRequest.h
	include/alibabacloud/iot/model/CreateProductTopicResult.h
	include/alibabacloud/iot/model/RemoveThingTopoRequest.h
	include/alibabacloud/iot/model/RemoveThingTopoResult.h
	include/alibabacloud/iot/model/QueryTopicReverseRouteTableRequest.h
	include/alibabacloud/iot/model/QueryTopicReverseRouteTableResult.h
	include/alibabacloud/iot/model/BatchGetDeviceStateRequest.h
	include/alibabacloud/iot/model/BatchGetDeviceStateResult.h
	include/alibabacloud/iot/model/GetRuleActionRequest.h
	include/alibabacloud/iot/model/GetRuleActionResult.h
	include/alibabacloud/iot/model/BatchAddDeviceGroupRelationsRequest.h
	include/alibabacloud/iot/model/BatchAddDeviceGroupRelationsResult.h
	include/alibabacloud/iot/model/GetRuleRequest.h
	include/alibabacloud/iot/model/GetRuleResult.h
	include/alibabacloud/iot/model/GetDeviceShadowRequest.h
	include/alibabacloud/iot/model/GetDeviceShadowResult.h
	include/alibabacloud/iot/model/GetGatewayBySubDeviceRequest.h
	include/alibabacloud/iot/model/GetGatewayBySubDeviceResult.h
	include/alibabacloud/iot/model/CreateRuleActionRequest.h
	include/alibabacloud/iot/model/CreateRuleActionResult.h
	include/alibabacloud/iot/model/QueryDeviceGroupInfoRequest.h
	include/alibabacloud/iot/model/QueryDeviceGroupInfoResult.h
	include/alibabacloud/iot/model/BatchRegisterDeviceRequest.h
	include/alibabacloud/iot/model/BatchRegisterDeviceResult.h
	include/alibabacloud/iot/model/DeleteRuleActionRequest.h
	include/alibabacloud/iot/model/DeleteRuleActionResult.h
	include/alibabacloud/iot/model/PubBroadcastRequest.h
	include/alibabacloud/iot/model/PubBroadcastResult.h )

set(iot_src 
	src/IotClient.cc
	src/model/QueryAppDeviceListRequest.cc
	src/model/QueryAppDeviceListResult.cc
	src/model/DeleteTopicRouteTableRequest.cc
	src/model/DeleteTopicRouteTableResult.cc
	src/model/QueryDeviceGroupListRequest.cc
	src/model/QueryDeviceGroupListResult.cc
	src/model/QueryDeviceEventDataRequest.cc
	src/model/QueryDeviceEventDataResult.cc
	src/model/GetDeviceStatusRequest.cc
	src/model/GetDeviceStatusResult.cc
	src/model/DeleteDeviceRequest.cc
	src/model/DeleteDeviceResult.cc
	src/model/CreateDeviceGroupRequest.cc
	src/model/CreateDeviceGroupResult.cc
	src/model/EnableThingRequest.cc
	src/model/EnableThingResult.cc
	src/model/RRpcRequest.cc
	src/model/RRpcResult.cc
	src/model/DeleteRuleRequest.cc
	src/model/DeleteRuleResult.cc
	src/model/QueryProductTopicRequest.cc
	src/model/QueryProductTopicResult.cc
	src/model/GetThingTopoRequest.cc
	src/model/GetThingTopoResult.cc
	src/model/QueryPageByApplyIdRequest.cc
	src/model/QueryPageByApplyIdResult.cc
	src/model/CreateTopicRouteTableRequest.cc
	src/model/CreateTopicRouteTableResult.cc
	src/model/CreateProductRequest.cc
	src/model/CreateProductResult.cc
	src/model/UpdateRuleRequest.cc
	src/model/UpdateRuleResult.cc
	src/model/QueryDevicePropertyDataRequest.cc
	src/model/QueryDevicePropertyDataResult.cc
	src/model/UpdateDeviceGroupRequest.cc
	src/model/UpdateDeviceGroupResult.cc
	src/model/DeleteDeviceGroupRequest.cc
	src/model/DeleteDeviceGroupResult.cc
	src/model/QueryDevicePropRequest.cc
	src/model/QueryDevicePropResult.cc
	src/model/DeleteDevicePropRequest.cc
	src/model/DeleteDevicePropResult.cc
	src/model/StopRuleRequest.cc
	src/model/StopRuleResult.cc
	src/model/QueryDeviceGroupByDeviceRequest.cc
	src/model/QueryDeviceGroupByDeviceResult.cc
	src/model/QueryDeviceDetailRequest.cc
	src/model/QueryDeviceDetailResult.cc
	src/model/NotifyAddThingTopoRequest.cc
	src/model/NotifyAddThingTopoResult.cc
	src/model/InvokeThingServiceRequest.cc
	src/model/InvokeThingServiceResult.cc
	src/model/ListRuleActionsRequest.cc
	src/model/ListRuleActionsResult.cc
	src/model/BatchCheckDeviceNamesRequest.cc
	src/model/BatchCheckDeviceNamesResult.cc
	src/model/UpdateProductTopicRequest.cc
	src/model/UpdateProductTopicResult.cc
	src/model/UpdateRuleActionRequest.cc
	src/model/UpdateRuleActionResult.cc
	src/model/UpdateProductRequest.cc
	src/model/UpdateProductResult.cc
	src/model/QueryProductRequest.cc
	src/model/QueryProductResult.cc
	src/model/UpdateDeviceShadowRequest.cc
	src/model/UpdateDeviceShadowResult.cc
	src/model/QueryBatchRegisterDeviceStatusRequest.cc
	src/model/QueryBatchRegisterDeviceStatusResult.cc
	src/model/SetDevicePropertyRequest.cc
	src/model/SetDevicePropertyResult.cc
	src/model/RegisterDeviceRequest.cc
	src/model/RegisterDeviceResult.cc
	src/model/QueryDeviceRequest.cc
	src/model/QueryDeviceResult.cc
	src/model/BatchDeleteDeviceGroupRelationsRequest.cc
	src/model/BatchDeleteDeviceGroupRelationsResult.cc
	src/model/QueryDeviceGroupTagListRequest.cc
	src/model/QueryDeviceGroupTagListResult.cc
	src/model/ListRuleRequest.cc
	src/model/ListRuleResult.cc
	src/model/QueryTopicRouteTableRequest.cc
	src/model/QueryTopicRouteTableResult.cc
	src/model/CreateRuleRequest.cc
	src/model/CreateRuleResult.cc
	src/model/StartRuleRequest.cc
	src/model/StartRuleResult.cc
	src/model/QueryProductListRequest.cc
	src/model/QueryProductListResult.cc
	src/model/QueryDevicePropertyStatusRequest.cc
	src/model/QueryDevicePropertyStatusResult.cc
	src/model/QueryDeviceStatisticsRequest.cc
	src/model/QueryDeviceStatisticsResult.cc
	src/model/PubRequest.cc
	src/model/PubResult.cc
	src/model/DeleteProductRequest.cc
	src/model/DeleteProductResult.cc
	src/model/SaveDevicePropRequest.cc
	src/model/SaveDevicePropResult.cc
	src/model/DeleteProductTopicRequest.cc
	src/model/DeleteProductTopicResult.cc
	src/model/QueryDeviceServiceDataRequest.cc
	src/model/QueryDeviceServiceDataResult.cc
	src/model/BatchRegisterDeviceWithApplyIdRequest.cc
	src/model/BatchRegisterDeviceWithApplyIdResult.cc
	src/model/DisableThingRequest.cc
	src/model/DisableThingResult.cc
	src/model/CreateProductTopicRequest.cc
	src/model/CreateProductTopicResult.cc
	src/model/RemoveThingTopoRequest.cc
	src/model/RemoveThingTopoResult.cc
	src/model/QueryTopicReverseRouteTableRequest.cc
	src/model/QueryTopicReverseRouteTableResult.cc
	src/model/BatchGetDeviceStateRequest.cc
	src/model/BatchGetDeviceStateResult.cc
	src/model/GetRuleActionRequest.cc
	src/model/GetRuleActionResult.cc
	src/model/BatchAddDeviceGroupRelationsRequest.cc
	src/model/BatchAddDeviceGroupRelationsResult.cc
	src/model/GetRuleRequest.cc
	src/model/GetRuleResult.cc
	src/model/GetDeviceShadowRequest.cc
	src/model/GetDeviceShadowResult.cc
	src/model/GetGatewayBySubDeviceRequest.cc
	src/model/GetGatewayBySubDeviceResult.cc
	src/model/CreateRuleActionRequest.cc
	src/model/CreateRuleActionResult.cc
	src/model/QueryDeviceGroupInfoRequest.cc
	src/model/QueryDeviceGroupInfoResult.cc
	src/model/BatchRegisterDeviceRequest.cc
	src/model/BatchRegisterDeviceResult.cc
	src/model/DeleteRuleActionRequest.cc
	src/model/DeleteRuleActionResult.cc
	src/model/PubBroadcastRequest.cc
	src/model/PubBroadcastResult.cc )

add_library(iot ${LIB_TYPE}
	${iot_public_header}
	${iot_public_header_model}
	${iot_src})

set_target_properties(iot
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}iot
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(iot
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_IOT_LIBRARY)
endif()

target_include_directories(iot
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(iot
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(iot
		jsoncpp)
	target_include_directories(iot
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(iot
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(iot
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(iot
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(iot
		jsoncpp)
endif()

install(FILES ${iot_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/iot)
install(FILES ${iot_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/iot/model)
install(TARGETS iot
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)