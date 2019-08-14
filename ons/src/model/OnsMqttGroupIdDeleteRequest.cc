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

#include <alibabacloud/ons/model/OnsMqttGroupIdDeleteRequest.h>

using AlibabaCloud::Ons::Model::OnsMqttGroupIdDeleteRequest;

OnsMqttGroupIdDeleteRequest::OnsMqttGroupIdDeleteRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsMqttGroupIdDelete")
{}

OnsMqttGroupIdDeleteRequest::~OnsMqttGroupIdDeleteRequest()
{}

std::string OnsMqttGroupIdDeleteRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsMqttGroupIdDeleteRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string OnsMqttGroupIdDeleteRequest::getRegionId()const
{
	return regionId_;
}

void OnsMqttGroupIdDeleteRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string OnsMqttGroupIdDeleteRequest::getGroupId()const
{
	return groupId_;
}

void OnsMqttGroupIdDeleteRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

