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

#include <alibabacloud/ons/model/OnsWarnDeleteRequest.h>

using AlibabaCloud::Ons::Model::OnsWarnDeleteRequest;

OnsWarnDeleteRequest::OnsWarnDeleteRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsWarnDelete")
{}

OnsWarnDeleteRequest::~OnsWarnDeleteRequest()
{}

long OnsWarnDeleteRequest::getPreventCache()const
{
	return preventCache_;
}

void OnsWarnDeleteRequest::setPreventCache(long preventCache)
{
	preventCache_ = preventCache;
	setCoreParameter("PreventCache", std::to_string(preventCache));
}

std::string OnsWarnDeleteRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsWarnDeleteRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string OnsWarnDeleteRequest::getGroupId()const
{
	return groupId_;
}

void OnsWarnDeleteRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string OnsWarnDeleteRequest::getTopic()const
{
	return topic_;
}

void OnsWarnDeleteRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", topic);
}

