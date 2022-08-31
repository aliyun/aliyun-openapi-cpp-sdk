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

set(voicenavigator_public_header 
	include/alibabacloud/voicenavigator/VoiceNavigatorClient.h
	include/alibabacloud/voicenavigator/VoiceNavigatorExport.h )

set(voicenavigator_public_header_model 
	include/alibabacloud/voicenavigator/model/AssociateChatbotInstanceRequest.h
	include/alibabacloud/voicenavigator/model/AssociateChatbotInstanceResult.h
	include/alibabacloud/voicenavigator/model/AuditTTSVoiceRequest.h
	include/alibabacloud/voicenavigator/model/AuditTTSVoiceResult.h
	include/alibabacloud/voicenavigator/model/BeginDialogueRequest.h
	include/alibabacloud/voicenavigator/model/BeginDialogueResult.h
	include/alibabacloud/voicenavigator/model/CollectedNumberRequest.h
	include/alibabacloud/voicenavigator/model/CollectedNumberResult.h
	include/alibabacloud/voicenavigator/model/CreateDownloadUrlRequest.h
	include/alibabacloud/voicenavigator/model/CreateDownloadUrlResult.h
	include/alibabacloud/voicenavigator/model/CreateInstanceRequest.h
	include/alibabacloud/voicenavigator/model/CreateInstanceResult.h
	include/alibabacloud/voicenavigator/model/DebugBeginDialogueRequest.h
	include/alibabacloud/voicenavigator/model/DebugBeginDialogueResult.h
	include/alibabacloud/voicenavigator/model/DebugCollectedNumberRequest.h
	include/alibabacloud/voicenavigator/model/DebugCollectedNumberResult.h
	include/alibabacloud/voicenavigator/model/DebugDialogueRequest.h
	include/alibabacloud/voicenavigator/model/DebugDialogueResult.h
	include/alibabacloud/voicenavigator/model/DeleteInstanceRequest.h
	include/alibabacloud/voicenavigator/model/DeleteInstanceResult.h
	include/alibabacloud/voicenavigator/model/DescribeConversationRequest.h
	include/alibabacloud/voicenavigator/model/DescribeConversationResult.h
	include/alibabacloud/voicenavigator/model/DescribeConversationContextRequest.h
	include/alibabacloud/voicenavigator/model/DescribeConversationContextResult.h
	include/alibabacloud/voicenavigator/model/DescribeExportProgressRequest.h
	include/alibabacloud/voicenavigator/model/DescribeExportProgressResult.h
	include/alibabacloud/voicenavigator/model/DescribeInstanceRequest.h
	include/alibabacloud/voicenavigator/model/DescribeInstanceResult.h
	include/alibabacloud/voicenavigator/model/DescribeNavigationConfigRequest.h
	include/alibabacloud/voicenavigator/model/DescribeNavigationConfigResult.h
	include/alibabacloud/voicenavigator/model/DescribeRecordingRequest.h
	include/alibabacloud/voicenavigator/model/DescribeRecordingResult.h
	include/alibabacloud/voicenavigator/model/DescribeStatisticalDataRequest.h
	include/alibabacloud/voicenavigator/model/DescribeStatisticalDataResult.h
	include/alibabacloud/voicenavigator/model/DescribeTTSConfigRequest.h
	include/alibabacloud/voicenavigator/model/DescribeTTSConfigResult.h
	include/alibabacloud/voicenavigator/model/DialogueRequest.h
	include/alibabacloud/voicenavigator/model/DialogueResult.h
	include/alibabacloud/voicenavigator/model/DisableInstanceRequest.h
	include/alibabacloud/voicenavigator/model/DisableInstanceResult.h
	include/alibabacloud/voicenavigator/model/EnableInstanceRequest.h
	include/alibabacloud/voicenavigator/model/EnableInstanceResult.h
	include/alibabacloud/voicenavigator/model/EndDialogueRequest.h
	include/alibabacloud/voicenavigator/model/EndDialogueResult.h
	include/alibabacloud/voicenavigator/model/ExportConversationDetailsRequest.h
	include/alibabacloud/voicenavigator/model/ExportConversationDetailsResult.h
	include/alibabacloud/voicenavigator/model/ExportStatisticalDataRequest.h
	include/alibabacloud/voicenavigator/model/ExportStatisticalDataResult.h
	include/alibabacloud/voicenavigator/model/GenerateUploadUrlRequest.h
	include/alibabacloud/voicenavigator/model/GenerateUploadUrlResult.h
	include/alibabacloud/voicenavigator/model/GetAsrConfigRequest.h
	include/alibabacloud/voicenavigator/model/GetAsrConfigResult.h
	include/alibabacloud/voicenavigator/model/GetRealTimeConcurrencyRequest.h
	include/alibabacloud/voicenavigator/model/GetRealTimeConcurrencyResult.h
	include/alibabacloud/voicenavigator/model/ListChatbotInstancesRequest.h
	include/alibabacloud/voicenavigator/model/ListChatbotInstancesResult.h
	include/alibabacloud/voicenavigator/model/ListConversationDetailsRequest.h
	include/alibabacloud/voicenavigator/model/ListConversationDetailsResult.h
	include/alibabacloud/voicenavigator/model/ListConversationsRequest.h
	include/alibabacloud/voicenavigator/model/ListConversationsResult.h
	include/alibabacloud/voicenavigator/model/ListDownloadTasksRequest.h
	include/alibabacloud/voicenavigator/model/ListDownloadTasksResult.h
	include/alibabacloud/voicenavigator/model/ListInstancesRequest.h
	include/alibabacloud/voicenavigator/model/ListInstancesResult.h
	include/alibabacloud/voicenavigator/model/ModifyAsrConfigRequest.h
	include/alibabacloud/voicenavigator/model/ModifyAsrConfigResult.h
	include/alibabacloud/voicenavigator/model/ModifyGreetingConfigRequest.h
	include/alibabacloud/voicenavigator/model/ModifyGreetingConfigResult.h
	include/alibabacloud/voicenavigator/model/ModifyInstanceRequest.h
	include/alibabacloud/voicenavigator/model/ModifyInstanceResult.h
	include/alibabacloud/voicenavigator/model/ModifySilenceTimeoutConfigRequest.h
	include/alibabacloud/voicenavigator/model/ModifySilenceTimeoutConfigResult.h
	include/alibabacloud/voicenavigator/model/ModifyTTSConfigRequest.h
	include/alibabacloud/voicenavigator/model/ModifyTTSConfigResult.h
	include/alibabacloud/voicenavigator/model/ModifyUnrecognizingConfigRequest.h
	include/alibabacloud/voicenavigator/model/ModifyUnrecognizingConfigResult.h
	include/alibabacloud/voicenavigator/model/QueryConversationsRequest.h
	include/alibabacloud/voicenavigator/model/QueryConversationsResult.h
	include/alibabacloud/voicenavigator/model/SaveRecordingRequest.h
	include/alibabacloud/voicenavigator/model/SaveRecordingResult.h
	include/alibabacloud/voicenavigator/model/SilenceTimeoutRequest.h
	include/alibabacloud/voicenavigator/model/SilenceTimeoutResult.h )

set(voicenavigator_src 
	src/VoiceNavigatorClient.cc
	src/model/AssociateChatbotInstanceRequest.cc
	src/model/AssociateChatbotInstanceResult.cc
	src/model/AuditTTSVoiceRequest.cc
	src/model/AuditTTSVoiceResult.cc
	src/model/BeginDialogueRequest.cc
	src/model/BeginDialogueResult.cc
	src/model/CollectedNumberRequest.cc
	src/model/CollectedNumberResult.cc
	src/model/CreateDownloadUrlRequest.cc
	src/model/CreateDownloadUrlResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/DebugBeginDialogueRequest.cc
	src/model/DebugBeginDialogueResult.cc
	src/model/DebugCollectedNumberRequest.cc
	src/model/DebugCollectedNumberResult.cc
	src/model/DebugDialogueRequest.cc
	src/model/DebugDialogueResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DescribeConversationRequest.cc
	src/model/DescribeConversationResult.cc
	src/model/DescribeConversationContextRequest.cc
	src/model/DescribeConversationContextResult.cc
	src/model/DescribeExportProgressRequest.cc
	src/model/DescribeExportProgressResult.cc
	src/model/DescribeInstanceRequest.cc
	src/model/DescribeInstanceResult.cc
	src/model/DescribeNavigationConfigRequest.cc
	src/model/DescribeNavigationConfigResult.cc
	src/model/DescribeRecordingRequest.cc
	src/model/DescribeRecordingResult.cc
	src/model/DescribeStatisticalDataRequest.cc
	src/model/DescribeStatisticalDataResult.cc
	src/model/DescribeTTSConfigRequest.cc
	src/model/DescribeTTSConfigResult.cc
	src/model/DialogueRequest.cc
	src/model/DialogueResult.cc
	src/model/DisableInstanceRequest.cc
	src/model/DisableInstanceResult.cc
	src/model/EnableInstanceRequest.cc
	src/model/EnableInstanceResult.cc
	src/model/EndDialogueRequest.cc
	src/model/EndDialogueResult.cc
	src/model/ExportConversationDetailsRequest.cc
	src/model/ExportConversationDetailsResult.cc
	src/model/ExportStatisticalDataRequest.cc
	src/model/ExportStatisticalDataResult.cc
	src/model/GenerateUploadUrlRequest.cc
	src/model/GenerateUploadUrlResult.cc
	src/model/GetAsrConfigRequest.cc
	src/model/GetAsrConfigResult.cc
	src/model/GetRealTimeConcurrencyRequest.cc
	src/model/GetRealTimeConcurrencyResult.cc
	src/model/ListChatbotInstancesRequest.cc
	src/model/ListChatbotInstancesResult.cc
	src/model/ListConversationDetailsRequest.cc
	src/model/ListConversationDetailsResult.cc
	src/model/ListConversationsRequest.cc
	src/model/ListConversationsResult.cc
	src/model/ListDownloadTasksRequest.cc
	src/model/ListDownloadTasksResult.cc
	src/model/ListInstancesRequest.cc
	src/model/ListInstancesResult.cc
	src/model/ModifyAsrConfigRequest.cc
	src/model/ModifyAsrConfigResult.cc
	src/model/ModifyGreetingConfigRequest.cc
	src/model/ModifyGreetingConfigResult.cc
	src/model/ModifyInstanceRequest.cc
	src/model/ModifyInstanceResult.cc
	src/model/ModifySilenceTimeoutConfigRequest.cc
	src/model/ModifySilenceTimeoutConfigResult.cc
	src/model/ModifyTTSConfigRequest.cc
	src/model/ModifyTTSConfigResult.cc
	src/model/ModifyUnrecognizingConfigRequest.cc
	src/model/ModifyUnrecognizingConfigResult.cc
	src/model/QueryConversationsRequest.cc
	src/model/QueryConversationsResult.cc
	src/model/SaveRecordingRequest.cc
	src/model/SaveRecordingResult.cc
	src/model/SilenceTimeoutRequest.cc
	src/model/SilenceTimeoutResult.cc )

add_library(voicenavigator ${LIB_TYPE}
	${voicenavigator_public_header}
	${voicenavigator_public_header_model}
	${voicenavigator_src})

set_target_properties(voicenavigator
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}voicenavigator
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(voicenavigator
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_VOICENAVIGATOR_LIBRARY)
endif()

target_include_directories(voicenavigator
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(voicenavigator
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(voicenavigator
		jsoncpp)
	target_include_directories(voicenavigator
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(voicenavigator
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(voicenavigator
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(voicenavigator
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(voicenavigator
		jsoncpp)
endif()

install(FILES ${voicenavigator_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/voicenavigator)
install(FILES ${voicenavigator_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/voicenavigator/model)
install(TARGETS voicenavigator
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)