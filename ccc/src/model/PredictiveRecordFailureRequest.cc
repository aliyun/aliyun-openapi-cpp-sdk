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

#include <alibabacloud/ccc/model/PredictiveRecordFailureRequest.h>

using AlibabaCloud::CCC::Model::PredictiveRecordFailureRequest;

PredictiveRecordFailureRequest::PredictiveRecordFailureRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "PredictiveRecordFailure")
{}

PredictiveRecordFailureRequest::~PredictiveRecordFailureRequest()
{}

std::string PredictiveRecordFailureRequest::getCallId()const
{
	return callId_;
}

void PredictiveRecordFailureRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setCoreParameter("CallId", callId);
}

long PredictiveRecordFailureRequest::getActualTime()const
{
	return actualTime_;
}

void PredictiveRecordFailureRequest::setActualTime(long actualTime)
{
	actualTime_ = actualTime;
	setCoreParameter("ActualTime", std::to_string(actualTime));
}

std::string PredictiveRecordFailureRequest::getCallingNumber()const
{
	return callingNumber_;
}

void PredictiveRecordFailureRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setCoreParameter("CallingNumber", callingNumber);
}

std::string PredictiveRecordFailureRequest::getInstanceId()const
{
	return instanceId_;
}

void PredictiveRecordFailureRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string PredictiveRecordFailureRequest::getDispositionCode()const
{
	return dispositionCode_;
}

void PredictiveRecordFailureRequest::setDispositionCode(const std::string& dispositionCode)
{
	dispositionCode_ = dispositionCode;
	setCoreParameter("DispositionCode", dispositionCode);
}

std::string PredictiveRecordFailureRequest::getCalledNumber()const
{
	return calledNumber_;
}

void PredictiveRecordFailureRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setCoreParameter("CalledNumber", calledNumber);
}

std::string PredictiveRecordFailureRequest::getTaskId()const
{
	return taskId_;
}

void PredictiveRecordFailureRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string PredictiveRecordFailureRequest::getCabInstanceId()const
{
	return cabInstanceId_;
}

void PredictiveRecordFailureRequest::setCabInstanceId(const std::string& cabInstanceId)
{
	cabInstanceId_ = cabInstanceId;
	setCoreParameter("CabInstanceId", cabInstanceId);
}

long PredictiveRecordFailureRequest::getCabInstanceOwnerId()const
{
	return cabInstanceOwnerId_;
}

void PredictiveRecordFailureRequest::setCabInstanceOwnerId(long cabInstanceOwnerId)
{
	cabInstanceOwnerId_ = cabInstanceOwnerId;
	setCoreParameter("CabInstanceOwnerId", std::to_string(cabInstanceOwnerId));
}

