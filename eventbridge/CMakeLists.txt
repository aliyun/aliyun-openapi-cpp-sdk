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

set(eventbridge_public_header 
	include/alibabacloud/eventbridge/EventbridgeClient.h
	include/alibabacloud/eventbridge/EventbridgeExport.h )

set(eventbridge_public_header_model 
	include/alibabacloud/eventbridge/model/CreateApiDestinationRequest.h
	include/alibabacloud/eventbridge/model/CreateApiDestinationResult.h
	include/alibabacloud/eventbridge/model/CreateConnectionRequest.h
	include/alibabacloud/eventbridge/model/CreateConnectionResult.h
	include/alibabacloud/eventbridge/model/CreateEventBusRequest.h
	include/alibabacloud/eventbridge/model/CreateEventBusResult.h
	include/alibabacloud/eventbridge/model/CreateEventSourceRequest.h
	include/alibabacloud/eventbridge/model/CreateEventSourceResult.h
	include/alibabacloud/eventbridge/model/CreateEventStreamingRequest.h
	include/alibabacloud/eventbridge/model/CreateEventStreamingResult.h
	include/alibabacloud/eventbridge/model/CreateRuleRequest.h
	include/alibabacloud/eventbridge/model/CreateRuleResult.h
	include/alibabacloud/eventbridge/model/CreateServiceLinkedRoleForProductRequest.h
	include/alibabacloud/eventbridge/model/CreateServiceLinkedRoleForProductResult.h
	include/alibabacloud/eventbridge/model/DeleteApiDestinationRequest.h
	include/alibabacloud/eventbridge/model/DeleteApiDestinationResult.h
	include/alibabacloud/eventbridge/model/DeleteConnectionRequest.h
	include/alibabacloud/eventbridge/model/DeleteConnectionResult.h
	include/alibabacloud/eventbridge/model/DeleteEventBusRequest.h
	include/alibabacloud/eventbridge/model/DeleteEventBusResult.h
	include/alibabacloud/eventbridge/model/DeleteEventSourceRequest.h
	include/alibabacloud/eventbridge/model/DeleteEventSourceResult.h
	include/alibabacloud/eventbridge/model/DeleteEventStreamingRequest.h
	include/alibabacloud/eventbridge/model/DeleteEventStreamingResult.h
	include/alibabacloud/eventbridge/model/DeleteRuleRequest.h
	include/alibabacloud/eventbridge/model/DeleteRuleResult.h
	include/alibabacloud/eventbridge/model/DeleteTargetsRequest.h
	include/alibabacloud/eventbridge/model/DeleteTargetsResult.h
	include/alibabacloud/eventbridge/model/DisableRuleRequest.h
	include/alibabacloud/eventbridge/model/DisableRuleResult.h
	include/alibabacloud/eventbridge/model/EnableRuleRequest.h
	include/alibabacloud/eventbridge/model/EnableRuleResult.h
	include/alibabacloud/eventbridge/model/GetApiDestinationRequest.h
	include/alibabacloud/eventbridge/model/GetApiDestinationResult.h
	include/alibabacloud/eventbridge/model/GetConnectionRequest.h
	include/alibabacloud/eventbridge/model/GetConnectionResult.h
	include/alibabacloud/eventbridge/model/GetEventBusRequest.h
	include/alibabacloud/eventbridge/model/GetEventBusResult.h
	include/alibabacloud/eventbridge/model/GetEventStreamingRequest.h
	include/alibabacloud/eventbridge/model/GetEventStreamingResult.h
	include/alibabacloud/eventbridge/model/GetRuleRequest.h
	include/alibabacloud/eventbridge/model/GetRuleResult.h
	include/alibabacloud/eventbridge/model/ListAliyunOfficialEventSourcesRequest.h
	include/alibabacloud/eventbridge/model/ListAliyunOfficialEventSourcesResult.h
	include/alibabacloud/eventbridge/model/ListApiDestinationsRequest.h
	include/alibabacloud/eventbridge/model/ListApiDestinationsResult.h
	include/alibabacloud/eventbridge/model/ListConnectionsRequest.h
	include/alibabacloud/eventbridge/model/ListConnectionsResult.h
	include/alibabacloud/eventbridge/model/ListEventBusesRequest.h
	include/alibabacloud/eventbridge/model/ListEventBusesResult.h
	include/alibabacloud/eventbridge/model/ListEventStreamingsRequest.h
	include/alibabacloud/eventbridge/model/ListEventStreamingsResult.h
	include/alibabacloud/eventbridge/model/ListRulesRequest.h
	include/alibabacloud/eventbridge/model/ListRulesResult.h
	include/alibabacloud/eventbridge/model/ListTargetsRequest.h
	include/alibabacloud/eventbridge/model/ListTargetsResult.h
	include/alibabacloud/eventbridge/model/ListUserDefinedEventSourcesRequest.h
	include/alibabacloud/eventbridge/model/ListUserDefinedEventSourcesResult.h
	include/alibabacloud/eventbridge/model/PauseEventStreamingRequest.h
	include/alibabacloud/eventbridge/model/PauseEventStreamingResult.h
	include/alibabacloud/eventbridge/model/PutTargetsRequest.h
	include/alibabacloud/eventbridge/model/PutTargetsResult.h
	include/alibabacloud/eventbridge/model/QueryEventRequest.h
	include/alibabacloud/eventbridge/model/QueryEventResult.h
	include/alibabacloud/eventbridge/model/QueryEventTracesRequest.h
	include/alibabacloud/eventbridge/model/QueryEventTracesResult.h
	include/alibabacloud/eventbridge/model/QueryTracedEventByEventIdRequest.h
	include/alibabacloud/eventbridge/model/QueryTracedEventByEventIdResult.h
	include/alibabacloud/eventbridge/model/QueryTracedEventsRequest.h
	include/alibabacloud/eventbridge/model/QueryTracedEventsResult.h
	include/alibabacloud/eventbridge/model/StartEventStreamingRequest.h
	include/alibabacloud/eventbridge/model/StartEventStreamingResult.h
	include/alibabacloud/eventbridge/model/TestEventPatternRequest.h
	include/alibabacloud/eventbridge/model/TestEventPatternResult.h
	include/alibabacloud/eventbridge/model/UpdateApiDestinationRequest.h
	include/alibabacloud/eventbridge/model/UpdateApiDestinationResult.h
	include/alibabacloud/eventbridge/model/UpdateConnectionRequest.h
	include/alibabacloud/eventbridge/model/UpdateConnectionResult.h
	include/alibabacloud/eventbridge/model/UpdateEventBusRequest.h
	include/alibabacloud/eventbridge/model/UpdateEventBusResult.h
	include/alibabacloud/eventbridge/model/UpdateEventSourceRequest.h
	include/alibabacloud/eventbridge/model/UpdateEventSourceResult.h
	include/alibabacloud/eventbridge/model/UpdateEventStreamingRequest.h
	include/alibabacloud/eventbridge/model/UpdateEventStreamingResult.h
	include/alibabacloud/eventbridge/model/UpdateRuleRequest.h
	include/alibabacloud/eventbridge/model/UpdateRuleResult.h )

set(eventbridge_src 
	src/EventbridgeClient.cc
	src/model/CreateApiDestinationRequest.cc
	src/model/CreateApiDestinationResult.cc
	src/model/CreateConnectionRequest.cc
	src/model/CreateConnectionResult.cc
	src/model/CreateEventBusRequest.cc
	src/model/CreateEventBusResult.cc
	src/model/CreateEventSourceRequest.cc
	src/model/CreateEventSourceResult.cc
	src/model/CreateEventStreamingRequest.cc
	src/model/CreateEventStreamingResult.cc
	src/model/CreateRuleRequest.cc
	src/model/CreateRuleResult.cc
	src/model/CreateServiceLinkedRoleForProductRequest.cc
	src/model/CreateServiceLinkedRoleForProductResult.cc
	src/model/DeleteApiDestinationRequest.cc
	src/model/DeleteApiDestinationResult.cc
	src/model/DeleteConnectionRequest.cc
	src/model/DeleteConnectionResult.cc
	src/model/DeleteEventBusRequest.cc
	src/model/DeleteEventBusResult.cc
	src/model/DeleteEventSourceRequest.cc
	src/model/DeleteEventSourceResult.cc
	src/model/DeleteEventStreamingRequest.cc
	src/model/DeleteEventStreamingResult.cc
	src/model/DeleteRuleRequest.cc
	src/model/DeleteRuleResult.cc
	src/model/DeleteTargetsRequest.cc
	src/model/DeleteTargetsResult.cc
	src/model/DisableRuleRequest.cc
	src/model/DisableRuleResult.cc
	src/model/EnableRuleRequest.cc
	src/model/EnableRuleResult.cc
	src/model/GetApiDestinationRequest.cc
	src/model/GetApiDestinationResult.cc
	src/model/GetConnectionRequest.cc
	src/model/GetConnectionResult.cc
	src/model/GetEventBusRequest.cc
	src/model/GetEventBusResult.cc
	src/model/GetEventStreamingRequest.cc
	src/model/GetEventStreamingResult.cc
	src/model/GetRuleRequest.cc
	src/model/GetRuleResult.cc
	src/model/ListAliyunOfficialEventSourcesRequest.cc
	src/model/ListAliyunOfficialEventSourcesResult.cc
	src/model/ListApiDestinationsRequest.cc
	src/model/ListApiDestinationsResult.cc
	src/model/ListConnectionsRequest.cc
	src/model/ListConnectionsResult.cc
	src/model/ListEventBusesRequest.cc
	src/model/ListEventBusesResult.cc
	src/model/ListEventStreamingsRequest.cc
	src/model/ListEventStreamingsResult.cc
	src/model/ListRulesRequest.cc
	src/model/ListRulesResult.cc
	src/model/ListTargetsRequest.cc
	src/model/ListTargetsResult.cc
	src/model/ListUserDefinedEventSourcesRequest.cc
	src/model/ListUserDefinedEventSourcesResult.cc
	src/model/PauseEventStreamingRequest.cc
	src/model/PauseEventStreamingResult.cc
	src/model/PutTargetsRequest.cc
	src/model/PutTargetsResult.cc
	src/model/QueryEventRequest.cc
	src/model/QueryEventResult.cc
	src/model/QueryEventTracesRequest.cc
	src/model/QueryEventTracesResult.cc
	src/model/QueryTracedEventByEventIdRequest.cc
	src/model/QueryTracedEventByEventIdResult.cc
	src/model/QueryTracedEventsRequest.cc
	src/model/QueryTracedEventsResult.cc
	src/model/StartEventStreamingRequest.cc
	src/model/StartEventStreamingResult.cc
	src/model/TestEventPatternRequest.cc
	src/model/TestEventPatternResult.cc
	src/model/UpdateApiDestinationRequest.cc
	src/model/UpdateApiDestinationResult.cc
	src/model/UpdateConnectionRequest.cc
	src/model/UpdateConnectionResult.cc
	src/model/UpdateEventBusRequest.cc
	src/model/UpdateEventBusResult.cc
	src/model/UpdateEventSourceRequest.cc
	src/model/UpdateEventSourceResult.cc
	src/model/UpdateEventStreamingRequest.cc
	src/model/UpdateEventStreamingResult.cc
	src/model/UpdateRuleRequest.cc
	src/model/UpdateRuleResult.cc )

add_library(eventbridge ${LIB_TYPE}
	${eventbridge_public_header}
	${eventbridge_public_header_model}
	${eventbridge_src})

set_target_properties(eventbridge
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}eventbridge
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(eventbridge
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_EVENTBRIDGE_LIBRARY)
endif()

target_include_directories(eventbridge
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(eventbridge
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(eventbridge
		jsoncpp)
	target_include_directories(eventbridge
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(eventbridge
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(eventbridge
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(eventbridge
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(eventbridge
		jsoncpp)
endif()

install(FILES ${eventbridge_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eventbridge)
install(FILES ${eventbridge_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/eventbridge/model)
install(TARGETS eventbridge
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)