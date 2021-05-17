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
{
	setMethod(HttpRequest::Method::Post);
}

ListAgentEventsRequest::~ListAgentEventsRequest()
{}

long ListAgentEventsRequest::getStartTime()const
{
	return startTime_;
}

void ListAgentEventsRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

long ListAgentEventsRequest::getStopTime()const
{
	return stopTime_;
}

void ListAgentEventsRequest::setStopTime(long stopTime)
{
	stopTime_ = stopTime;
	setParameter("StopTime", std::to_string(stopTime));
}

std::vector<std::string> ListAgentEventsRequest::getRamId()const
{
	return ramId_;
}

void ListAgentEventsRequest::setRamId(const std::vector<std::string>& ramId)
{
	ramId_ = ramId;
	for(int dep1 = 0; dep1!= ramId.size(); dep1++) {
		setParameter("RamId."+ std::to_string(dep1), ramId.at(dep1));
	}
}

std::string ListAgentEventsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentEventsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListAgentEventsRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentEventsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> ListAgentEventsRequest::getEvent()const
{
	return event_;
}

void ListAgentEventsRequest::setEvent(const std::vector<std::string>& event)
{
	event_ = event;
	for(int dep1 = 0; dep1!= event.size(); dep1++) {
		setParameter("Event."+ std::to_string(dep1), event.at(dep1));
	}
}

