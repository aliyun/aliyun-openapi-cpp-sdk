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

#include <alibabacloud/ons/model/OnsMqttGroupIdCreateRequest.h>

using AlibabaCloud::Ons::Model::OnsMqttGroupIdCreateRequest;

OnsMqttGroupIdCreateRequest::OnsMqttGroupIdCreateRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsMqttGroupIdCreate")
{}

OnsMqttGroupIdCreateRequest::~OnsMqttGroupIdCreateRequest()
{}

long OnsMqttGroupIdCreateRequest::getPreventCache()const
{
	return preventCache_;
}

void OnsMqttGroupIdCreateRequest::setPreventCache(long preventCache)
{
	preventCache_ = preventCache;
	setCoreParameter("PreventCache", std::to_string(preventCache));
}

std::string OnsMqttGroupIdCreateRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsMqttGroupIdCreateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string OnsMqttGroupIdCreateRequest::getRegionId()const
{
	return regionId_;
}

void OnsMqttGroupIdCreateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string OnsMqttGroupIdCreateRequest::getGroupId()const
{
	return groupId_;
}

void OnsMqttGroupIdCreateRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string OnsMqttGroupIdCreateRequest::getTopic()const
{
	return topic_;
}

void OnsMqttGroupIdCreateRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", topic);
}

