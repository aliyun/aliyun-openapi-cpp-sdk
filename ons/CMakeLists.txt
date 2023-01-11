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

set(ons_public_header 
	include/alibabacloud/ons/OnsClient.h
	include/alibabacloud/ons/OnsExport.h )

set(ons_public_header_model 
	include/alibabacloud/ons/model/ListTagResourcesRequest.h
	include/alibabacloud/ons/model/ListTagResourcesResult.h
	include/alibabacloud/ons/model/OnsConsumerAccumulateRequest.h
	include/alibabacloud/ons/model/OnsConsumerAccumulateResult.h
	include/alibabacloud/ons/model/OnsConsumerGetConnectionRequest.h
	include/alibabacloud/ons/model/OnsConsumerGetConnectionResult.h
	include/alibabacloud/ons/model/OnsConsumerResetOffsetRequest.h
	include/alibabacloud/ons/model/OnsConsumerResetOffsetResult.h
	include/alibabacloud/ons/model/OnsConsumerStatusRequest.h
	include/alibabacloud/ons/model/OnsConsumerStatusResult.h
	include/alibabacloud/ons/model/OnsConsumerTimeSpanRequest.h
	include/alibabacloud/ons/model/OnsConsumerTimeSpanResult.h
	include/alibabacloud/ons/model/OnsDLQMessageGetByIdRequest.h
	include/alibabacloud/ons/model/OnsDLQMessageGetByIdResult.h
	include/alibabacloud/ons/model/OnsDLQMessagePageQueryByGroupIdRequest.h
	include/alibabacloud/ons/model/OnsDLQMessagePageQueryByGroupIdResult.h
	include/alibabacloud/ons/model/OnsDLQMessageResendByIdRequest.h
	include/alibabacloud/ons/model/OnsDLQMessageResendByIdResult.h
	include/alibabacloud/ons/model/OnsGroupConsumerUpdateRequest.h
	include/alibabacloud/ons/model/OnsGroupConsumerUpdateResult.h
	include/alibabacloud/ons/model/OnsGroupCreateRequest.h
	include/alibabacloud/ons/model/OnsGroupCreateResult.h
	include/alibabacloud/ons/model/OnsGroupDeleteRequest.h
	include/alibabacloud/ons/model/OnsGroupDeleteResult.h
	include/alibabacloud/ons/model/OnsGroupListRequest.h
	include/alibabacloud/ons/model/OnsGroupListResult.h
	include/alibabacloud/ons/model/OnsGroupSubDetailRequest.h
	include/alibabacloud/ons/model/OnsGroupSubDetailResult.h
	include/alibabacloud/ons/model/OnsInstanceBaseInfoRequest.h
	include/alibabacloud/ons/model/OnsInstanceBaseInfoResult.h
	include/alibabacloud/ons/model/OnsInstanceCreateRequest.h
	include/alibabacloud/ons/model/OnsInstanceCreateResult.h
	include/alibabacloud/ons/model/OnsInstanceDeleteRequest.h
	include/alibabacloud/ons/model/OnsInstanceDeleteResult.h
	include/alibabacloud/ons/model/OnsInstanceInServiceListRequest.h
	include/alibabacloud/ons/model/OnsInstanceInServiceListResult.h
	include/alibabacloud/ons/model/OnsInstanceUpdateRequest.h
	include/alibabacloud/ons/model/OnsInstanceUpdateResult.h
	include/alibabacloud/ons/model/OnsMessageDetailRequest.h
	include/alibabacloud/ons/model/OnsMessageDetailResult.h
	include/alibabacloud/ons/model/OnsMessageGetByKeyRequest.h
	include/alibabacloud/ons/model/OnsMessageGetByKeyResult.h
	include/alibabacloud/ons/model/OnsMessageGetByMsgIdRequest.h
	include/alibabacloud/ons/model/OnsMessageGetByMsgIdResult.h
	include/alibabacloud/ons/model/OnsMessagePageQueryByTopicRequest.h
	include/alibabacloud/ons/model/OnsMessagePageQueryByTopicResult.h
	include/alibabacloud/ons/model/OnsMessagePushRequest.h
	include/alibabacloud/ons/model/OnsMessagePushResult.h
	include/alibabacloud/ons/model/OnsMessageTraceRequest.h
	include/alibabacloud/ons/model/OnsMessageTraceResult.h
	include/alibabacloud/ons/model/OnsRegionListRequest.h
	include/alibabacloud/ons/model/OnsRegionListResult.h
	include/alibabacloud/ons/model/OnsTopicCreateRequest.h
	include/alibabacloud/ons/model/OnsTopicCreateResult.h
	include/alibabacloud/ons/model/OnsTopicDeleteRequest.h
	include/alibabacloud/ons/model/OnsTopicDeleteResult.h
	include/alibabacloud/ons/model/OnsTopicListRequest.h
	include/alibabacloud/ons/model/OnsTopicListResult.h
	include/alibabacloud/ons/model/OnsTopicStatusRequest.h
	include/alibabacloud/ons/model/OnsTopicStatusResult.h
	include/alibabacloud/ons/model/OnsTopicSubDetailRequest.h
	include/alibabacloud/ons/model/OnsTopicSubDetailResult.h
	include/alibabacloud/ons/model/OnsTopicUpdateRequest.h
	include/alibabacloud/ons/model/OnsTopicUpdateResult.h
	include/alibabacloud/ons/model/OnsTraceGetResultRequest.h
	include/alibabacloud/ons/model/OnsTraceGetResultResult.h
	include/alibabacloud/ons/model/OnsTraceQueryByMsgIdRequest.h
	include/alibabacloud/ons/model/OnsTraceQueryByMsgIdResult.h
	include/alibabacloud/ons/model/OnsTraceQueryByMsgKeyRequest.h
	include/alibabacloud/ons/model/OnsTraceQueryByMsgKeyResult.h
	include/alibabacloud/ons/model/OnsTrendGroupOutputTpsRequest.h
	include/alibabacloud/ons/model/OnsTrendGroupOutputTpsResult.h
	include/alibabacloud/ons/model/OnsTrendTopicInputTpsRequest.h
	include/alibabacloud/ons/model/OnsTrendTopicInputTpsResult.h
	include/alibabacloud/ons/model/OpenOnsServiceRequest.h
	include/alibabacloud/ons/model/OpenOnsServiceResult.h
	include/alibabacloud/ons/model/TagResourcesRequest.h
	include/alibabacloud/ons/model/TagResourcesResult.h
	include/alibabacloud/ons/model/UntagResourcesRequest.h
	include/alibabacloud/ons/model/UntagResourcesResult.h )

set(ons_src 
	src/OnsClient.cc
	src/model/ListTagResourcesRequest.cc
	src/model/ListTagResourcesResult.cc
	src/model/OnsConsumerAccumulateRequest.cc
	src/model/OnsConsumerAccumulateResult.cc
	src/model/OnsConsumerGetConnectionRequest.cc
	src/model/OnsConsumerGetConnectionResult.cc
	src/model/OnsConsumerResetOffsetRequest.cc
	src/model/OnsConsumerResetOffsetResult.cc
	src/model/OnsConsumerStatusRequest.cc
	src/model/OnsConsumerStatusResult.cc
	src/model/OnsConsumerTimeSpanRequest.cc
	src/model/OnsConsumerTimeSpanResult.cc
	src/model/OnsDLQMessageGetByIdRequest.cc
	src/model/OnsDLQMessageGetByIdResult.cc
	src/model/OnsDLQMessagePageQueryByGroupIdRequest.cc
	src/model/OnsDLQMessagePageQueryByGroupIdResult.cc
	src/model/OnsDLQMessageResendByIdRequest.cc
	src/model/OnsDLQMessageResendByIdResult.cc
	src/model/OnsGroupConsumerUpdateRequest.cc
	src/model/OnsGroupConsumerUpdateResult.cc
	src/model/OnsGroupCreateRequest.cc
	src/model/OnsGroupCreateResult.cc
	src/model/OnsGroupDeleteRequest.cc
	src/model/OnsGroupDeleteResult.cc
	src/model/OnsGroupListRequest.cc
	src/model/OnsGroupListResult.cc
	src/model/OnsGroupSubDetailRequest.cc
	src/model/OnsGroupSubDetailResult.cc
	src/model/OnsInstanceBaseInfoRequest.cc
	src/model/OnsInstanceBaseInfoResult.cc
	src/model/OnsInstanceCreateRequest.cc
	src/model/OnsInstanceCreateResult.cc
	src/model/OnsInstanceDeleteRequest.cc
	src/model/OnsInstanceDeleteResult.cc
	src/model/OnsInstanceInServiceListRequest.cc
	src/model/OnsInstanceInServiceListResult.cc
	src/model/OnsInstanceUpdateRequest.cc
	src/model/OnsInstanceUpdateResult.cc
	src/model/OnsMessageDetailRequest.cc
	src/model/OnsMessageDetailResult.cc
	src/model/OnsMessageGetByKeyRequest.cc
	src/model/OnsMessageGetByKeyResult.cc
	src/model/OnsMessageGetByMsgIdRequest.cc
	src/model/OnsMessageGetByMsgIdResult.cc
	src/model/OnsMessagePageQueryByTopicRequest.cc
	src/model/OnsMessagePageQueryByTopicResult.cc
	src/model/OnsMessagePushRequest.cc
	src/model/OnsMessagePushResult.cc
	src/model/OnsMessageTraceRequest.cc
	src/model/OnsMessageTraceResult.cc
	src/model/OnsRegionListRequest.cc
	src/model/OnsRegionListResult.cc
	src/model/OnsTopicCreateRequest.cc
	src/model/OnsTopicCreateResult.cc
	src/model/OnsTopicDeleteRequest.cc
	src/model/OnsTopicDeleteResult.cc
	src/model/OnsTopicListRequest.cc
	src/model/OnsTopicListResult.cc
	src/model/OnsTopicStatusRequest.cc
	src/model/OnsTopicStatusResult.cc
	src/model/OnsTopicSubDetailRequest.cc
	src/model/OnsTopicSubDetailResult.cc
	src/model/OnsTopicUpdateRequest.cc
	src/model/OnsTopicUpdateResult.cc
	src/model/OnsTraceGetResultRequest.cc
	src/model/OnsTraceGetResultResult.cc
	src/model/OnsTraceQueryByMsgIdRequest.cc
	src/model/OnsTraceQueryByMsgIdResult.cc
	src/model/OnsTraceQueryByMsgKeyRequest.cc
	src/model/OnsTraceQueryByMsgKeyResult.cc
	src/model/OnsTrendGroupOutputTpsRequest.cc
	src/model/OnsTrendGroupOutputTpsResult.cc
	src/model/OnsTrendTopicInputTpsRequest.cc
	src/model/OnsTrendTopicInputTpsResult.cc
	src/model/OpenOnsServiceRequest.cc
	src/model/OpenOnsServiceResult.cc
	src/model/TagResourcesRequest.cc
	src/model/TagResourcesResult.cc
	src/model/UntagResourcesRequest.cc
	src/model/UntagResourcesResult.cc )

add_library(ons ${LIB_TYPE}
	${ons_public_header}
	${ons_public_header_model}
	${ons_src})

set_target_properties(ons
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ons
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(ons
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_ONS_LIBRARY)
endif()

target_include_directories(ons
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(ons
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(ons
		jsoncpp)
	target_include_directories(ons
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(ons
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(ons
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(ons
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(ons
		jsoncpp)
endif()

install(FILES ${ons_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ons)
install(FILES ${ons_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/ons/model)
install(TARGETS ons
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)