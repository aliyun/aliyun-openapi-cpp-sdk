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

set(outboundbot_public_header 
	include/alibabacloud/outboundbot/OutboundBotClient.h
	include/alibabacloud/outboundbot/OutboundBotExport.h )

set(outboundbot_public_header_model 
	include/alibabacloud/outboundbot/model/AssignJobsRequest.h
	include/alibabacloud/outboundbot/model/AssignJobsResult.h
	include/alibabacloud/outboundbot/model/CancelJobsRequest.h
	include/alibabacloud/outboundbot/model/CancelJobsResult.h
	include/alibabacloud/outboundbot/model/CreateBatchJobsRequest.h
	include/alibabacloud/outboundbot/model/CreateBatchJobsResult.h
	include/alibabacloud/outboundbot/model/CreateDialogueFlowRequest.h
	include/alibabacloud/outboundbot/model/CreateDialogueFlowResult.h
	include/alibabacloud/outboundbot/model/CreateGlobalQuestionRequest.h
	include/alibabacloud/outboundbot/model/CreateGlobalQuestionResult.h
	include/alibabacloud/outboundbot/model/CreateInstanceRequest.h
	include/alibabacloud/outboundbot/model/CreateInstanceResult.h
	include/alibabacloud/outboundbot/model/CreateIntentRequest.h
	include/alibabacloud/outboundbot/model/CreateIntentResult.h
	include/alibabacloud/outboundbot/model/CreateJobGroupRequest.h
	include/alibabacloud/outboundbot/model/CreateJobGroupResult.h
	include/alibabacloud/outboundbot/model/CreateOutboundCallNumberRequest.h
	include/alibabacloud/outboundbot/model/CreateOutboundCallNumberResult.h
	include/alibabacloud/outboundbot/model/CreateScriptRequest.h
	include/alibabacloud/outboundbot/model/CreateScriptResult.h
	include/alibabacloud/outboundbot/model/CreateScriptWaveformRequest.h
	include/alibabacloud/outboundbot/model/CreateScriptWaveformResult.h
	include/alibabacloud/outboundbot/model/CreateTagRequest.h
	include/alibabacloud/outboundbot/model/CreateTagResult.h
	include/alibabacloud/outboundbot/model/DeleteDialogueFlowRequest.h
	include/alibabacloud/outboundbot/model/DeleteDialogueFlowResult.h
	include/alibabacloud/outboundbot/model/DeleteGlobalQuestionRequest.h
	include/alibabacloud/outboundbot/model/DeleteGlobalQuestionResult.h
	include/alibabacloud/outboundbot/model/DeleteInstanceRequest.h
	include/alibabacloud/outboundbot/model/DeleteInstanceResult.h
	include/alibabacloud/outboundbot/model/DeleteIntentRequest.h
	include/alibabacloud/outboundbot/model/DeleteIntentResult.h
	include/alibabacloud/outboundbot/model/DeleteJobGroupRequest.h
	include/alibabacloud/outboundbot/model/DeleteJobGroupResult.h
	include/alibabacloud/outboundbot/model/DeleteOutboundCallNumberRequest.h
	include/alibabacloud/outboundbot/model/DeleteOutboundCallNumberResult.h
	include/alibabacloud/outboundbot/model/DeleteScriptRequest.h
	include/alibabacloud/outboundbot/model/DeleteScriptResult.h
	include/alibabacloud/outboundbot/model/DeleteScriptWaveformRequest.h
	include/alibabacloud/outboundbot/model/DeleteScriptWaveformResult.h
	include/alibabacloud/outboundbot/model/DescribeGlobalQuestionRequest.h
	include/alibabacloud/outboundbot/model/DescribeGlobalQuestionResult.h
	include/alibabacloud/outboundbot/model/DescribeInstanceRequest.h
	include/alibabacloud/outboundbot/model/DescribeInstanceResult.h
	include/alibabacloud/outboundbot/model/DescribeIntentRequest.h
	include/alibabacloud/outboundbot/model/DescribeIntentResult.h
	include/alibabacloud/outboundbot/model/DescribeJobRequest.h
	include/alibabacloud/outboundbot/model/DescribeJobResult.h
	include/alibabacloud/outboundbot/model/DescribeJobGroupRequest.h
	include/alibabacloud/outboundbot/model/DescribeJobGroupResult.h
	include/alibabacloud/outboundbot/model/DescribeScriptRequest.h
	include/alibabacloud/outboundbot/model/DescribeScriptResult.h
	include/alibabacloud/outboundbot/model/DescribeScriptVoiceConfigRequest.h
	include/alibabacloud/outboundbot/model/DescribeScriptVoiceConfigResult.h
	include/alibabacloud/outboundbot/model/DescribeTTSConfigRequest.h
	include/alibabacloud/outboundbot/model/DescribeTTSConfigResult.h
	include/alibabacloud/outboundbot/model/DescribeTTSDemoRequest.h
	include/alibabacloud/outboundbot/model/DescribeTTSDemoResult.h
	include/alibabacloud/outboundbot/model/DescribeTagHitsSummaryRequest.h
	include/alibabacloud/outboundbot/model/DescribeTagHitsSummaryResult.h
	include/alibabacloud/outboundbot/model/DialogueRequest.h
	include/alibabacloud/outboundbot/model/DialogueResult.h
	include/alibabacloud/outboundbot/model/DownloadRecordingRequest.h
	include/alibabacloud/outboundbot/model/DownloadRecordingResult.h
	include/alibabacloud/outboundbot/model/DuplicateScriptRequest.h
	include/alibabacloud/outboundbot/model/DuplicateScriptResult.h
	include/alibabacloud/outboundbot/model/ExportScriptRequest.h
	include/alibabacloud/outboundbot/model/ExportScriptResult.h
	include/alibabacloud/outboundbot/model/ImportScriptRequest.h
	include/alibabacloud/outboundbot/model/ImportScriptResult.h
	include/alibabacloud/outboundbot/model/ListDialogueFlowsRequest.h
	include/alibabacloud/outboundbot/model/ListDialogueFlowsResult.h
	include/alibabacloud/outboundbot/model/ListGlobalQuestionsRequest.h
	include/alibabacloud/outboundbot/model/ListGlobalQuestionsResult.h
	include/alibabacloud/outboundbot/model/ListInstancesRequest.h
	include/alibabacloud/outboundbot/model/ListInstancesResult.h
	include/alibabacloud/outboundbot/model/ListIntentsRequest.h
	include/alibabacloud/outboundbot/model/ListIntentsResult.h
	include/alibabacloud/outboundbot/model/ListJobGroupsRequest.h
	include/alibabacloud/outboundbot/model/ListJobGroupsResult.h
	include/alibabacloud/outboundbot/model/ListJobsRequest.h
	include/alibabacloud/outboundbot/model/ListJobsResult.h
	include/alibabacloud/outboundbot/model/ListJobsByGroupRequest.h
	include/alibabacloud/outboundbot/model/ListJobsByGroupResult.h
	include/alibabacloud/outboundbot/model/ListMediaRequest.h
	include/alibabacloud/outboundbot/model/ListMediaResult.h
	include/alibabacloud/outboundbot/model/ListOutboundCallNumbersRequest.h
	include/alibabacloud/outboundbot/model/ListOutboundCallNumbersResult.h
	include/alibabacloud/outboundbot/model/ListScriptPublishHistoriesRequest.h
	include/alibabacloud/outboundbot/model/ListScriptPublishHistoriesResult.h
	include/alibabacloud/outboundbot/model/ListScriptVoiceConfigsRequest.h
	include/alibabacloud/outboundbot/model/ListScriptVoiceConfigsResult.h
	include/alibabacloud/outboundbot/model/ListScriptsRequest.h
	include/alibabacloud/outboundbot/model/ListScriptsResult.h
	include/alibabacloud/outboundbot/model/ListTagsRequest.h
	include/alibabacloud/outboundbot/model/ListTagsResult.h
	include/alibabacloud/outboundbot/model/ModifyBatchJobsRequest.h
	include/alibabacloud/outboundbot/model/ModifyBatchJobsResult.h
	include/alibabacloud/outboundbot/model/ModifyDialogueFlowRequest.h
	include/alibabacloud/outboundbot/model/ModifyDialogueFlowResult.h
	include/alibabacloud/outboundbot/model/ModifyGlobalQuestionRequest.h
	include/alibabacloud/outboundbot/model/ModifyGlobalQuestionResult.h
	include/alibabacloud/outboundbot/model/ModifyInstanceRequest.h
	include/alibabacloud/outboundbot/model/ModifyInstanceResult.h
	include/alibabacloud/outboundbot/model/ModifyIntentRequest.h
	include/alibabacloud/outboundbot/model/ModifyIntentResult.h
	include/alibabacloud/outboundbot/model/ModifyJobGroupRequest.h
	include/alibabacloud/outboundbot/model/ModifyJobGroupResult.h
	include/alibabacloud/outboundbot/model/ModifyOutboundCallNumberRequest.h
	include/alibabacloud/outboundbot/model/ModifyOutboundCallNumberResult.h
	include/alibabacloud/outboundbot/model/ModifyScriptRequest.h
	include/alibabacloud/outboundbot/model/ModifyScriptResult.h
	include/alibabacloud/outboundbot/model/ModifyScriptVoiceConfigRequest.h
	include/alibabacloud/outboundbot/model/ModifyScriptVoiceConfigResult.h
	include/alibabacloud/outboundbot/model/ModifyTTSConfigRequest.h
	include/alibabacloud/outboundbot/model/ModifyTTSConfigResult.h
	include/alibabacloud/outboundbot/model/ModifyTagGroupsRequest.h
	include/alibabacloud/outboundbot/model/ModifyTagGroupsResult.h
	include/alibabacloud/outboundbot/model/PublishScriptRequest.h
	include/alibabacloud/outboundbot/model/PublishScriptResult.h
	include/alibabacloud/outboundbot/model/PublishScriptForDebugRequest.h
	include/alibabacloud/outboundbot/model/PublishScriptForDebugResult.h
	include/alibabacloud/outboundbot/model/QueryJobsRequest.h
	include/alibabacloud/outboundbot/model/QueryJobsResult.h
	include/alibabacloud/outboundbot/model/QueryScriptWaveformsRequest.h
	include/alibabacloud/outboundbot/model/QueryScriptWaveformsResult.h
	include/alibabacloud/outboundbot/model/QueryScriptsByStatusRequest.h
	include/alibabacloud/outboundbot/model/QueryScriptsByStatusResult.h
	include/alibabacloud/outboundbot/model/RecordFailureRequest.h
	include/alibabacloud/outboundbot/model/RecordFailureResult.h
	include/alibabacloud/outboundbot/model/ResumeJobsRequest.h
	include/alibabacloud/outboundbot/model/ResumeJobsResult.h
	include/alibabacloud/outboundbot/model/RollbackScriptRequest.h
	include/alibabacloud/outboundbot/model/RollbackScriptResult.h
	include/alibabacloud/outboundbot/model/StartJobRequest.h
	include/alibabacloud/outboundbot/model/StartJobResult.h
	include/alibabacloud/outboundbot/model/SubmitBatchJobsRequest.h
	include/alibabacloud/outboundbot/model/SubmitBatchJobsResult.h
	include/alibabacloud/outboundbot/model/SubmitRecordingRequest.h
	include/alibabacloud/outboundbot/model/SubmitRecordingResult.h
	include/alibabacloud/outboundbot/model/SubmitScriptReviewRequest.h
	include/alibabacloud/outboundbot/model/SubmitScriptReviewResult.h
	include/alibabacloud/outboundbot/model/SuspendJobsRequest.h
	include/alibabacloud/outboundbot/model/SuspendJobsResult.h
	include/alibabacloud/outboundbot/model/WithdrawScriptReviewRequest.h
	include/alibabacloud/outboundbot/model/WithdrawScriptReviewResult.h )

set(outboundbot_src 
	src/OutboundBotClient.cc
	src/model/AssignJobsRequest.cc
	src/model/AssignJobsResult.cc
	src/model/CancelJobsRequest.cc
	src/model/CancelJobsResult.cc
	src/model/CreateBatchJobsRequest.cc
	src/model/CreateBatchJobsResult.cc
	src/model/CreateDialogueFlowRequest.cc
	src/model/CreateDialogueFlowResult.cc
	src/model/CreateGlobalQuestionRequest.cc
	src/model/CreateGlobalQuestionResult.cc
	src/model/CreateInstanceRequest.cc
	src/model/CreateInstanceResult.cc
	src/model/CreateIntentRequest.cc
	src/model/CreateIntentResult.cc
	src/model/CreateJobGroupRequest.cc
	src/model/CreateJobGroupResult.cc
	src/model/CreateOutboundCallNumberRequest.cc
	src/model/CreateOutboundCallNumberResult.cc
	src/model/CreateScriptRequest.cc
	src/model/CreateScriptResult.cc
	src/model/CreateScriptWaveformRequest.cc
	src/model/CreateScriptWaveformResult.cc
	src/model/CreateTagRequest.cc
	src/model/CreateTagResult.cc
	src/model/DeleteDialogueFlowRequest.cc
	src/model/DeleteDialogueFlowResult.cc
	src/model/DeleteGlobalQuestionRequest.cc
	src/model/DeleteGlobalQuestionResult.cc
	src/model/DeleteInstanceRequest.cc
	src/model/DeleteInstanceResult.cc
	src/model/DeleteIntentRequest.cc
	src/model/DeleteIntentResult.cc
	src/model/DeleteJobGroupRequest.cc
	src/model/DeleteJobGroupResult.cc
	src/model/DeleteOutboundCallNumberRequest.cc
	src/model/DeleteOutboundCallNumberResult.cc
	src/model/DeleteScriptRequest.cc
	src/model/DeleteScriptResult.cc
	src/model/DeleteScriptWaveformRequest.cc
	src/model/DeleteScriptWaveformResult.cc
	src/model/DescribeGlobalQuestionRequest.cc
	src/model/DescribeGlobalQuestionResult.cc
	src/model/DescribeInstanceRequest.cc
	src/model/DescribeInstanceResult.cc
	src/model/DescribeIntentRequest.cc
	src/model/DescribeIntentResult.cc
	src/model/DescribeJobRequest.cc
	src/model/DescribeJobResult.cc
	src/model/DescribeJobGroupRequest.cc
	src/model/DescribeJobGroupResult.cc
	src/model/DescribeScriptRequest.cc
	src/model/DescribeScriptResult.cc
	src/model/DescribeScriptVoiceConfigRequest.cc
	src/model/DescribeScriptVoiceConfigResult.cc
	src/model/DescribeTTSConfigRequest.cc
	src/model/DescribeTTSConfigResult.cc
	src/model/DescribeTTSDemoRequest.cc
	src/model/DescribeTTSDemoResult.cc
	src/model/DescribeTagHitsSummaryRequest.cc
	src/model/DescribeTagHitsSummaryResult.cc
	src/model/DialogueRequest.cc
	src/model/DialogueResult.cc
	src/model/DownloadRecordingRequest.cc
	src/model/DownloadRecordingResult.cc
	src/model/DuplicateScriptRequest.cc
	src/model/DuplicateScriptResult.cc
	src/model/ExportScriptRequest.cc
	src/model/ExportScriptResult.cc
	src/model/ImportScriptRequest.cc
	src/model/ImportScriptResult.cc
	src/model/ListDialogueFlowsRequest.cc
	src/model/ListDialogueFlowsResult.cc
	src/model/ListGlobalQuestionsRequest.cc
	src/model/ListGlobalQuestionsResult.cc
	src/model/ListInstancesRequest.cc
	src/model/ListInstancesResult.cc
	src/model/ListIntentsRequest.cc
	src/model/ListIntentsResult.cc
	src/model/ListJobGroupsRequest.cc
	src/model/ListJobGroupsResult.cc
	src/model/ListJobsRequest.cc
	src/model/ListJobsResult.cc
	src/model/ListJobsByGroupRequest.cc
	src/model/ListJobsByGroupResult.cc
	src/model/ListMediaRequest.cc
	src/model/ListMediaResult.cc
	src/model/ListOutboundCallNumbersRequest.cc
	src/model/ListOutboundCallNumbersResult.cc
	src/model/ListScriptPublishHistoriesRequest.cc
	src/model/ListScriptPublishHistoriesResult.cc
	src/model/ListScriptVoiceConfigsRequest.cc
	src/model/ListScriptVoiceConfigsResult.cc
	src/model/ListScriptsRequest.cc
	src/model/ListScriptsResult.cc
	src/model/ListTagsRequest.cc
	src/model/ListTagsResult.cc
	src/model/ModifyBatchJobsRequest.cc
	src/model/ModifyBatchJobsResult.cc
	src/model/ModifyDialogueFlowRequest.cc
	src/model/ModifyDialogueFlowResult.cc
	src/model/ModifyGlobalQuestionRequest.cc
	src/model/ModifyGlobalQuestionResult.cc
	src/model/ModifyInstanceRequest.cc
	src/model/ModifyInstanceResult.cc
	src/model/ModifyIntentRequest.cc
	src/model/ModifyIntentResult.cc
	src/model/ModifyJobGroupRequest.cc
	src/model/ModifyJobGroupResult.cc
	src/model/ModifyOutboundCallNumberRequest.cc
	src/model/ModifyOutboundCallNumberResult.cc
	src/model/ModifyScriptRequest.cc
	src/model/ModifyScriptResult.cc
	src/model/ModifyScriptVoiceConfigRequest.cc
	src/model/ModifyScriptVoiceConfigResult.cc
	src/model/ModifyTTSConfigRequest.cc
	src/model/ModifyTTSConfigResult.cc
	src/model/ModifyTagGroupsRequest.cc
	src/model/ModifyTagGroupsResult.cc
	src/model/PublishScriptRequest.cc
	src/model/PublishScriptResult.cc
	src/model/PublishScriptForDebugRequest.cc
	src/model/PublishScriptForDebugResult.cc
	src/model/QueryJobsRequest.cc
	src/model/QueryJobsResult.cc
	src/model/QueryScriptWaveformsRequest.cc
	src/model/QueryScriptWaveformsResult.cc
	src/model/QueryScriptsByStatusRequest.cc
	src/model/QueryScriptsByStatusResult.cc
	src/model/RecordFailureRequest.cc
	src/model/RecordFailureResult.cc
	src/model/ResumeJobsRequest.cc
	src/model/ResumeJobsResult.cc
	src/model/RollbackScriptRequest.cc
	src/model/RollbackScriptResult.cc
	src/model/StartJobRequest.cc
	src/model/StartJobResult.cc
	src/model/SubmitBatchJobsRequest.cc
	src/model/SubmitBatchJobsResult.cc
	src/model/SubmitRecordingRequest.cc
	src/model/SubmitRecordingResult.cc
	src/model/SubmitScriptReviewRequest.cc
	src/model/SubmitScriptReviewResult.cc
	src/model/SuspendJobsRequest.cc
	src/model/SuspendJobsResult.cc
	src/model/WithdrawScriptReviewRequest.cc
	src/model/WithdrawScriptReviewResult.cc )

add_library(outboundbot ${LIB_TYPE}
	${outboundbot_public_header}
	${outboundbot_public_header_model}
	${outboundbot_src})

set_target_properties(outboundbot
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}outboundbot
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(outboundbot
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_OUTBOUNDBOT_LIBRARY)
endif()

target_include_directories(outboundbot
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(outboundbot
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(outboundbot
		jsoncpp)
	target_include_directories(outboundbot
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(outboundbot
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(outboundbot
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(outboundbot
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(outboundbot
		jsoncpp)
endif()

install(FILES ${outboundbot_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/outboundbot)
install(FILES ${outboundbot_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/outboundbot/model)
install(TARGETS outboundbot
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)