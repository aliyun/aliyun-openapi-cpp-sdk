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

#include <alibabacloud/ccc/model/ListRecordingOfDualTrackRequest.h>

using AlibabaCloud::CCC::Model::ListRecordingOfDualTrackRequest;

ListRecordingOfDualTrackRequest::ListRecordingOfDualTrackRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListRecordingOfDualTrack")
{}

ListRecordingOfDualTrackRequest::~ListRecordingOfDualTrackRequest()
{}

std::string ListRecordingOfDualTrackRequest::getAgentId()const
{
	return agentId_;
}

void ListRecordingOfDualTrackRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

long ListRecordingOfDualTrackRequest::getStartTime()const
{
	return startTime_;
}

void ListRecordingOfDualTrackRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long ListRecordingOfDualTrackRequest::getStopTime()const
{
	return stopTime_;
}

void ListRecordingOfDualTrackRequest::setStopTime(long stopTime)
{
	stopTime_ = stopTime;
	setCoreParameter("StopTime", std::to_string(stopTime));
}

int ListRecordingOfDualTrackRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListRecordingOfDualTrackRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListRecordingOfDualTrackRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRecordingOfDualTrackRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListRecordingOfDualTrackRequest::getCallingNumber()const
{
	return callingNumber_;
}

void ListRecordingOfDualTrackRequest::setCallingNumber(const std::string& callingNumber)
{
	callingNumber_ = callingNumber;
	setCoreParameter("CallingNumber", callingNumber);
}

std::string ListRecordingOfDualTrackRequest::getInstanceId()const
{
	return instanceId_;
}

void ListRecordingOfDualTrackRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ListRecordingOfDualTrackRequest::getCalledNumber()const
{
	return calledNumber_;
}

void ListRecordingOfDualTrackRequest::setCalledNumber(const std::string& calledNumber)
{
	calledNumber_ = calledNumber;
	setCoreParameter("CalledNumber", calledNumber);
}

int ListRecordingOfDualTrackRequest::getPageSize()const
{
	return pageSize_;
}

void ListRecordingOfDualTrackRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string ListRecordingOfDualTrackRequest::getConnectId()const
{
	return connectId_;
}

void ListRecordingOfDualTrackRequest::setConnectId(const std::string& connectId)
{
	connectId_ = connectId;
	setCoreParameter("ConnectId", connectId);
}

