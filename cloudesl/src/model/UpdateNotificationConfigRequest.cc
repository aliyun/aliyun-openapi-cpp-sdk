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

#include <alibabacloud/cloudesl/model/UpdateNotificationConfigRequest.h>

using AlibabaCloud::Cloudesl::Model::UpdateNotificationConfigRequest;

UpdateNotificationConfigRequest::UpdateNotificationConfigRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "UpdateNotificationConfig")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateNotificationConfigRequest::~UpdateNotificationConfigRequest()
{}

std::string UpdateNotificationConfigRequest::getEndpoint()const
{
	return endpoint_;
}

void UpdateNotificationConfigRequest::setEndpoint(const std::string& endpoint)
{
	endpoint_ = endpoint;
	setBodyParameter("Endpoint", endpoint);
}

bool UpdateNotificationConfigRequest::getEnable()const
{
	return enable_;
}

void UpdateNotificationConfigRequest::setEnable(bool enable)
{
	enable_ = enable;
	setBodyParameter("Enable", enable ? "true" : "false");
}

std::string UpdateNotificationConfigRequest::getTag()const
{
	return tag_;
}

void UpdateNotificationConfigRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setBodyParameter("Tag", tag);
}

std::string UpdateNotificationConfigRequest::getGroupId()const
{
	return groupId_;
}

void UpdateNotificationConfigRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

std::string UpdateNotificationConfigRequest::getTopic()const
{
	return topic_;
}

void UpdateNotificationConfigRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setBodyParameter("Topic", topic);
}

