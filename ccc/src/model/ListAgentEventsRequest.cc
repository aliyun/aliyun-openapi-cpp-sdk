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

#include <alibabacloud/ccc/model/ListAgentEventsRequest.h>

using AlibabaCloud::CCC::Model::ListAgentEventsRequest;

ListAgentEventsRequest::ListAgentEventsRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListAgentEvents")
{}

ListAgentEventsRequest::~ListAgentEventsRequest()
{}

std::string ListAgentEventsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentEventsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

long ListAgentEventsRequest::getStartTime()const
{
	return startTime_;
}

void ListAgentEventsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long ListAgentEventsRequest::getStopTime()const
{
	return stopTime_;
}

void ListAgentEventsRequest::setStopTime(long stopTime)
{
	stopTime_ = stopTime;
	setCoreParameter("StopTime", stopTime);
}

std::vector<std::string> ListAgentEventsRequest::getEvent()const
{
	return event_;
}

void ListAgentEventsRequest::setEvent(const std::vector<std::string>& event)
{
	event_ = event;
	for(int i = 0; i!= event.size(); i++)
		setCoreParameter("Event."+ std::to_string(i), std::to_string(event.at(i)));
}

std::vector<std::string> ListAgentEventsRequest::getRamId()const
{
	return ramId_;
}

void ListAgentEventsRequest::setRamId(const std::vector<std::string>& ramId)
{
	ramId_ = ramId;
	for(int i = 0; i!= ramId.size(); i++)
		setCoreParameter("RamId."+ std::to_string(i), std::to_string(ramId.at(i)));
}

std::string ListAgentEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

