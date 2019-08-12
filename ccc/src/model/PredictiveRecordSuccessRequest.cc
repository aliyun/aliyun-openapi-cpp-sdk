/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/ccc/model/PredictiveRecordSuccessRequest.h>

using AlibabaCloud::CCC::Model::PredictiveRecordSuccessRequest;

PredictiveRecordSuccessRequest::PredictiveRecordSuccessRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "PredictiveRecordSuccess")
{}

PredictiveRecordSuccessRequest::~PredictiveRecordSuccessRequest()
{}

std::string PredictiveRecordSuccessRequest::getCallId()const
{
	return callId_;
}

void PredictiveRecordSuccessRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setCoreParameter("CallId", callId);
}

std::string PredictiveRecordSuccessRequest::getCallingNumber()const
{
	return callingNumber_;
}

void PredictiveRecordSuccessRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setCoreParameter("CallingNumber", callingNumber);
}

std::string PredictiveRecordSuccessRequest::getInstanceId()const
{
	return instanceId_;
}

void PredictiveRecordSuccessRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string PredictiveRecordSuccessRequest::getCalledNumber()const
{
	return calledNumber_;
}

void PredictiveRecordSuccessRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setCoreParameter("CalledNumber", calledNumber);
}

std::string PredictiveRecordSuccessRequest::getCallType()const
{
	return callType_;
}

void PredictiveRecordSuccessRequest::setCallType(const std::string& callType)
{
	callType_ = callType;
	setCoreParameter("CallType", callType);
}

std::string PredictiveRecordSuccessRequest::getScenarioId()const
{
	return scenarioId_;
}

void PredictiveRecordSuccessRequest::setScenarioId(const std::string& scenarioId)
{
	scenarioId_ = scenarioId;
	setCoreParameter("ScenarioId", scenarioId);
}

std::string PredictiveRecordSuccessRequest::getTaskId()const
{
	return taskId_;
}

void PredictiveRecordSuccessRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string PredictiveRecordSuccessRequest::getCabInstanceId()const
{
	return cabInstanceId_;
}

void PredictiveRecordSuccessRequest::setCabInstanceId(const std::string& cabInstanceId)
{
	cabInstanceId_ = cabInstanceId;
	setCoreParameter("CabInstanceId", cabInstanceId);
}

long PredictiveRecordSuccessRequest::getCabInstanceOwnerId()const
{
	return cabInstanceOwnerId_;
}

void PredictiveRecordSuccessRequest::setCabInstanceOwnerId(long cabInstanceOwnerId)
{
	cabInstanceOwnerId_ = cabInstanceOwnerId;
	setCoreParameter("CabInstanceOwnerId", cabInstanceOwnerId);
}

