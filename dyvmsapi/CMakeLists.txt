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

set(dyvmsapi_public_header 
	include/alibabacloud/dyvmsapi/DyvmsapiClient.h
	include/alibabacloud/dyvmsapi/DyvmsapiExport.h )

set(dyvmsapi_public_header_model 
	include/alibabacloud/dyvmsapi/model/AddRtcAccountRequest.h
	include/alibabacloud/dyvmsapi/model/AddRtcAccountResult.h
	include/alibabacloud/dyvmsapi/model/AddVirtualNumberRelationRequest.h
	include/alibabacloud/dyvmsapi/model/AddVirtualNumberRelationResult.h
	include/alibabacloud/dyvmsapi/model/BatchRobotSmartCallRequest.h
	include/alibabacloud/dyvmsapi/model/BatchRobotSmartCallResult.h
	include/alibabacloud/dyvmsapi/model/BindNumberAndVoipIdRequest.h
	include/alibabacloud/dyvmsapi/model/BindNumberAndVoipIdResult.h
	include/alibabacloud/dyvmsapi/model/CancelCallRequest.h
	include/alibabacloud/dyvmsapi/model/CancelCallResult.h
	include/alibabacloud/dyvmsapi/model/CancelOrderRobotTaskRequest.h
	include/alibabacloud/dyvmsapi/model/CancelOrderRobotTaskResult.h
	include/alibabacloud/dyvmsapi/model/CancelRobotTaskRequest.h
	include/alibabacloud/dyvmsapi/model/CancelRobotTaskResult.h
	include/alibabacloud/dyvmsapi/model/ClickToDialRequest.h
	include/alibabacloud/dyvmsapi/model/ClickToDialResult.h
	include/alibabacloud/dyvmsapi/model/CloseSipAccountRequest.h
	include/alibabacloud/dyvmsapi/model/CloseSipAccountResult.h
	include/alibabacloud/dyvmsapi/model/CreateCallTaskRequest.h
	include/alibabacloud/dyvmsapi/model/CreateCallTaskResult.h
	include/alibabacloud/dyvmsapi/model/CreateRobotTaskRequest.h
	include/alibabacloud/dyvmsapi/model/CreateRobotTaskResult.h
	include/alibabacloud/dyvmsapi/model/CreateSipAccountRequest.h
	include/alibabacloud/dyvmsapi/model/CreateSipAccountResult.h
	include/alibabacloud/dyvmsapi/model/DeleteRobotTaskRequest.h
	include/alibabacloud/dyvmsapi/model/DeleteRobotTaskResult.h
	include/alibabacloud/dyvmsapi/model/DescribeRecordDataRequest.h
	include/alibabacloud/dyvmsapi/model/DescribeRecordDataResult.h
	include/alibabacloud/dyvmsapi/model/DoRtcNumberAuthRequest.h
	include/alibabacloud/dyvmsapi/model/DoRtcNumberAuthResult.h
	include/alibabacloud/dyvmsapi/model/DoubleCallSeatRequest.h
	include/alibabacloud/dyvmsapi/model/DoubleCallSeatResult.h
	include/alibabacloud/dyvmsapi/model/ExecuteCallTaskRequest.h
	include/alibabacloud/dyvmsapi/model/ExecuteCallTaskResult.h
	include/alibabacloud/dyvmsapi/model/GetCallInfoRequest.h
	include/alibabacloud/dyvmsapi/model/GetCallInfoResult.h
	include/alibabacloud/dyvmsapi/model/GetHotlineQualificationByOrderRequest.h
	include/alibabacloud/dyvmsapi/model/GetHotlineQualificationByOrderResult.h
	include/alibabacloud/dyvmsapi/model/GetRtcTokenRequest.h
	include/alibabacloud/dyvmsapi/model/GetRtcTokenResult.h
	include/alibabacloud/dyvmsapi/model/GetTokenRequest.h
	include/alibabacloud/dyvmsapi/model/GetTokenResult.h
	include/alibabacloud/dyvmsapi/model/IvrCallRequest.h
	include/alibabacloud/dyvmsapi/model/IvrCallResult.h
	include/alibabacloud/dyvmsapi/model/ListCallTaskRequest.h
	include/alibabacloud/dyvmsapi/model/ListCallTaskResult.h
	include/alibabacloud/dyvmsapi/model/ListCallTaskDetailRequest.h
	include/alibabacloud/dyvmsapi/model/ListCallTaskDetailResult.h
	include/alibabacloud/dyvmsapi/model/ListHotlineTransferNumberRequest.h
	include/alibabacloud/dyvmsapi/model/ListHotlineTransferNumberResult.h
	include/alibabacloud/dyvmsapi/model/ListHotlineTransferRegisterFileRequest.h
	include/alibabacloud/dyvmsapi/model/ListHotlineTransferRegisterFileResult.h
	include/alibabacloud/dyvmsapi/model/ListOrderedNumbersRequest.h
	include/alibabacloud/dyvmsapi/model/ListOrderedNumbersResult.h
	include/alibabacloud/dyvmsapi/model/ListOutboundStrategiesRequest.h
	include/alibabacloud/dyvmsapi/model/ListOutboundStrategiesResult.h
	include/alibabacloud/dyvmsapi/model/ListRobotTaskCallsRequest.h
	include/alibabacloud/dyvmsapi/model/ListRobotTaskCallsResult.h
	include/alibabacloud/dyvmsapi/model/QueryCallDetailByCallIdRequest.h
	include/alibabacloud/dyvmsapi/model/QueryCallDetailByCallIdResult.h
	include/alibabacloud/dyvmsapi/model/QueryCallDetailByTaskIdRequest.h
	include/alibabacloud/dyvmsapi/model/QueryCallDetailByTaskIdResult.h
	include/alibabacloud/dyvmsapi/model/QueryCallInPoolTransferConfigRequest.h
	include/alibabacloud/dyvmsapi/model/QueryCallInPoolTransferConfigResult.h
	include/alibabacloud/dyvmsapi/model/QueryCallInTransferRecordRequest.h
	include/alibabacloud/dyvmsapi/model/QueryCallInTransferRecordResult.h
	include/alibabacloud/dyvmsapi/model/QueryRobotInfoListRequest.h
	include/alibabacloud/dyvmsapi/model/QueryRobotInfoListResult.h
	include/alibabacloud/dyvmsapi/model/QueryRobotTaskCallDetailRequest.h
	include/alibabacloud/dyvmsapi/model/QueryRobotTaskCallDetailResult.h
	include/alibabacloud/dyvmsapi/model/QueryRobotTaskCallListRequest.h
	include/alibabacloud/dyvmsapi/model/QueryRobotTaskCallListResult.h
	include/alibabacloud/dyvmsapi/model/QueryRobotTaskDetailRequest.h
	include/alibabacloud/dyvmsapi/model/QueryRobotTaskDetailResult.h
	include/alibabacloud/dyvmsapi/model/QueryRobotTaskListRequest.h
	include/alibabacloud/dyvmsapi/model/QueryRobotTaskListResult.h
	include/alibabacloud/dyvmsapi/model/QueryRobotv2AllListRequest.h
	include/alibabacloud/dyvmsapi/model/QueryRobotv2AllListResult.h
	include/alibabacloud/dyvmsapi/model/QueryRtcNumberAuthStatusRequest.h
	include/alibabacloud/dyvmsapi/model/QueryRtcNumberAuthStatusResult.h
	include/alibabacloud/dyvmsapi/model/QueryVirtualNumberRequest.h
	include/alibabacloud/dyvmsapi/model/QueryVirtualNumberResult.h
	include/alibabacloud/dyvmsapi/model/QueryVirtualNumberRelationRequest.h
	include/alibabacloud/dyvmsapi/model/QueryVirtualNumberRelationResult.h
	include/alibabacloud/dyvmsapi/model/QueryVoipNumberBindInfosRequest.h
	include/alibabacloud/dyvmsapi/model/QueryVoipNumberBindInfosResult.h
	include/alibabacloud/dyvmsapi/model/ReportVoipProblemsRequest.h
	include/alibabacloud/dyvmsapi/model/ReportVoipProblemsResult.h
	include/alibabacloud/dyvmsapi/model/SendVerificationRequest.h
	include/alibabacloud/dyvmsapi/model/SendVerificationResult.h
	include/alibabacloud/dyvmsapi/model/SetTransferCalleePoolConfigRequest.h
	include/alibabacloud/dyvmsapi/model/SetTransferCalleePoolConfigResult.h
	include/alibabacloud/dyvmsapi/model/SingleCallByTtsRequest.h
	include/alibabacloud/dyvmsapi/model/SingleCallByTtsResult.h
	include/alibabacloud/dyvmsapi/model/SingleCallByVoiceRequest.h
	include/alibabacloud/dyvmsapi/model/SingleCallByVoiceResult.h
	include/alibabacloud/dyvmsapi/model/SmartCallRequest.h
	include/alibabacloud/dyvmsapi/model/SmartCallResult.h
	include/alibabacloud/dyvmsapi/model/SmartCallOperateRequest.h
	include/alibabacloud/dyvmsapi/model/SmartCallOperateResult.h
	include/alibabacloud/dyvmsapi/model/StartMicroOutboundRequest.h
	include/alibabacloud/dyvmsapi/model/StartMicroOutboundResult.h
	include/alibabacloud/dyvmsapi/model/StartRobotTaskRequest.h
	include/alibabacloud/dyvmsapi/model/StartRobotTaskResult.h
	include/alibabacloud/dyvmsapi/model/StopRobotTaskRequest.h
	include/alibabacloud/dyvmsapi/model/StopRobotTaskResult.h
	include/alibabacloud/dyvmsapi/model/SubmitHotlineTransferRegisterRequest.h
	include/alibabacloud/dyvmsapi/model/SubmitHotlineTransferRegisterResult.h
	include/alibabacloud/dyvmsapi/model/UnbindNumberAndVoipIdRequest.h
	include/alibabacloud/dyvmsapi/model/UnbindNumberAndVoipIdResult.h
	include/alibabacloud/dyvmsapi/model/UndoRtcNumberAuthRequest.h
	include/alibabacloud/dyvmsapi/model/UndoRtcNumberAuthResult.h
	include/alibabacloud/dyvmsapi/model/UploadRobotTaskCalledFileRequest.h
	include/alibabacloud/dyvmsapi/model/UploadRobotTaskCalledFileResult.h
	include/alibabacloud/dyvmsapi/model/VoipAddAccountRequest.h
	include/alibabacloud/dyvmsapi/model/VoipAddAccountResult.h
	include/alibabacloud/dyvmsapi/model/VoipGetTokenRequest.h
	include/alibabacloud/dyvmsapi/model/VoipGetTokenResult.h )

set(dyvmsapi_src 
	src/DyvmsapiClient.cc
	src/model/AddRtcAccountRequest.cc
	src/model/AddRtcAccountResult.cc
	src/model/AddVirtualNumberRelationRequest.cc
	src/model/AddVirtualNumberRelationResult.cc
	src/model/BatchRobotSmartCallRequest.cc
	src/model/BatchRobotSmartCallResult.cc
	src/model/BindNumberAndVoipIdRequest.cc
	src/model/BindNumberAndVoipIdResult.cc
	src/model/CancelCallRequest.cc
	src/model/CancelCallResult.cc
	src/model/CancelOrderRobotTaskRequest.cc
	src/model/CancelOrderRobotTaskResult.cc
	src/model/CancelRobotTaskRequest.cc
	src/model/CancelRobotTaskResult.cc
	src/model/ClickToDialRequest.cc
	src/model/ClickToDialResult.cc
	src/model/CloseSipAccountRequest.cc
	src/model/CloseSipAccountResult.cc
	src/model/CreateCallTaskRequest.cc
	src/model/CreateCallTaskResult.cc
	src/model/CreateRobotTaskRequest.cc
	src/model/CreateRobotTaskResult.cc
	src/model/CreateSipAccountRequest.cc
	src/model/CreateSipAccountResult.cc
	src/model/DeleteRobotTaskRequest.cc
	src/model/DeleteRobotTaskResult.cc
	src/model/DescribeRecordDataRequest.cc
	src/model/DescribeRecordDataResult.cc
	src/model/DoRtcNumberAuthRequest.cc
	src/model/DoRtcNumberAuthResult.cc
	src/model/DoubleCallSeatRequest.cc
	src/model/DoubleCallSeatResult.cc
	src/model/ExecuteCallTaskRequest.cc
	src/model/ExecuteCallTaskResult.cc
	src/model/GetCallInfoRequest.cc
	src/model/GetCallInfoResult.cc
	src/model/GetHotlineQualificationByOrderRequest.cc
	src/model/GetHotlineQualificationByOrderResult.cc
	src/model/GetRtcTokenRequest.cc
	src/model/GetRtcTokenResult.cc
	src/model/GetTokenRequest.cc
	src/model/GetTokenResult.cc
	src/model/IvrCallRequest.cc
	src/model/IvrCallResult.cc
	src/model/ListCallTaskRequest.cc
	src/model/ListCallTaskResult.cc
	src/model/ListCallTaskDetailRequest.cc
	src/model/ListCallTaskDetailResult.cc
	src/model/ListHotlineTransferNumberRequest.cc
	src/model/ListHotlineTransferNumberResult.cc
	src/model/ListHotlineTransferRegisterFileRequest.cc
	src/model/ListHotlineTransferRegisterFileResult.cc
	src/model/ListOrderedNumbersRequest.cc
	src/model/ListOrderedNumbersResult.cc
	src/model/ListOutboundStrategiesRequest.cc
	src/model/ListOutboundStrategiesResult.cc
	src/model/ListRobotTaskCallsRequest.cc
	src/model/ListRobotTaskCallsResult.cc
	src/model/QueryCallDetailByCallIdRequest.cc
	src/model/QueryCallDetailByCallIdResult.cc
	src/model/QueryCallDetailByTaskIdRequest.cc
	src/model/QueryCallDetailByTaskIdResult.cc
	src/model/QueryCallInPoolTransferConfigRequest.cc
	src/model/QueryCallInPoolTransferConfigResult.cc
	src/model/QueryCallInTransferRecordRequest.cc
	src/model/QueryCallInTransferRecordResult.cc
	src/model/QueryRobotInfoListRequest.cc
	src/model/QueryRobotInfoListResult.cc
	src/model/QueryRobotTaskCallDetailRequest.cc
	src/model/QueryRobotTaskCallDetailResult.cc
	src/model/QueryRobotTaskCallListRequest.cc
	src/model/QueryRobotTaskCallListResult.cc
	src/model/QueryRobotTaskDetailRequest.cc
	src/model/QueryRobotTaskDetailResult.cc
	src/model/QueryRobotTaskListRequest.cc
	src/model/QueryRobotTaskListResult.cc
	src/model/QueryRobotv2AllListRequest.cc
	src/model/QueryRobotv2AllListResult.cc
	src/model/QueryRtcNumberAuthStatusRequest.cc
	src/model/QueryRtcNumberAuthStatusResult.cc
	src/model/QueryVirtualNumberRequest.cc
	src/model/QueryVirtualNumberResult.cc
	src/model/QueryVirtualNumberRelationRequest.cc
	src/model/QueryVirtualNumberRelationResult.cc
	src/model/QueryVoipNumberBindInfosRequest.cc
	src/model/QueryVoipNumberBindInfosResult.cc
	src/model/ReportVoipProblemsRequest.cc
	src/model/ReportVoipProblemsResult.cc
	src/model/SendVerificationRequest.cc
	src/model/SendVerificationResult.cc
	src/model/SetTransferCalleePoolConfigRequest.cc
	src/model/SetTransferCalleePoolConfigResult.cc
	src/model/SingleCallByTtsRequest.cc
	src/model/SingleCallByTtsResult.cc
	src/model/SingleCallByVoiceRequest.cc
	src/model/SingleCallByVoiceResult.cc
	src/model/SmartCallRequest.cc
	src/model/SmartCallResult.cc
	src/model/SmartCallOperateRequest.cc
	src/model/SmartCallOperateResult.cc
	src/model/StartMicroOutboundRequest.cc
	src/model/StartMicroOutboundResult.cc
	src/model/StartRobotTaskRequest.cc
	src/model/StartRobotTaskResult.cc
	src/model/StopRobotTaskRequest.cc
	src/model/StopRobotTaskResult.cc
	src/model/SubmitHotlineTransferRegisterRequest.cc
	src/model/SubmitHotlineTransferRegisterResult.cc
	src/model/UnbindNumberAndVoipIdRequest.cc
	src/model/UnbindNumberAndVoipIdResult.cc
	src/model/UndoRtcNumberAuthRequest.cc
	src/model/UndoRtcNumberAuthResult.cc
	src/model/UploadRobotTaskCalledFileRequest.cc
	src/model/UploadRobotTaskCalledFileResult.cc
	src/model/VoipAddAccountRequest.cc
	src/model/VoipAddAccountResult.cc
	src/model/VoipGetTokenRequest.cc
	src/model/VoipGetTokenResult.cc )

add_library(dyvmsapi ${LIB_TYPE}
	${dyvmsapi_public_header}
	${dyvmsapi_public_header_model}
	${dyvmsapi_src})

set_target_properties(dyvmsapi
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dyvmsapi
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(dyvmsapi
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DYVMSAPI_LIBRARY)
endif()

target_include_directories(dyvmsapi
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(dyvmsapi
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(dyvmsapi
		jsoncpp)
	target_include_directories(dyvmsapi
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(dyvmsapi
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(dyvmsapi
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(dyvmsapi
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(dyvmsapi
		jsoncpp)
endif()

install(FILES ${dyvmsapi_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dyvmsapi)
install(FILES ${dyvmsapi_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/dyvmsapi/model)
install(TARGETS dyvmsapi
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)