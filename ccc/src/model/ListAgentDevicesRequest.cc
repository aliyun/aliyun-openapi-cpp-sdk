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

#include <alibabacloud/ccc/model/ListAgentDevicesRequest.h>

using AlibabaCloud::CCC::Model::ListAgentDevicesRequest;

ListAgentDevicesRequest::ListAgentDevicesRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ListAgentDevices")
{
	setMethod(HttpRequest::Method::Post);
}

ListAgentDevicesRequest::~ListAgentDevicesRequest()
{}

std::string ListAgentDevicesRequest::getRamIds()const
{
	return ramIds_;
}

void ListAgentDevicesRequest::setRamIds(const std::string& ramIds)
{
	ramIds_ = ramIds;
	setCoreParameter("RamIds", ramIds);
}

long ListAgentDevicesRequest::getStartTime()const
{
	return startTime_;
}

void ListAgentDevicesRequest::setStartTime(long startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long ListAgentDevicesRequest::getStopTime()const
{
	return stopTime_;
}

void ListAgentDevicesRequest::setStopTime(long stopTime)
{
	stopTime_ = stopTime;
	setCoreParameter("StopTime", std::to_string(stopTime));
}

std::string ListAgentDevicesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListAgentDevicesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ListAgentDevicesRequest::getInstanceId()const
{
	return instanceId_;
}

void ListAgentDevicesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

