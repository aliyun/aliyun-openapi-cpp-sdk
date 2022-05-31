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

#include <alibabacloud/cloudesl/model/VerifyNotificationConfigRequest.h>

using AlibabaCloud::Cloudesl::Model::VerifyNotificationConfigRequest;

VerifyNotificationConfigRequest::VerifyNotificationConfigRequest() :
	RpcServiceRequest("cloudesl", "2020-02-01", "VerifyNotificationConfig")
{
	setMethod(HttpRequest::Method::Post);
}

VerifyNotificationConfigRequest::~VerifyNotificationConfigRequest()
{}

std::string VerifyNotificationConfigRequest::getGroupId()const
{
	return groupId_;
}

void VerifyNotificationConfigRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setBodyParameter("GroupId", groupId);
}

std::string VerifyNotificationConfigRequest::getEndpoint()const
{
	return endpoint_;
}

void VerifyNotificationConfigRequest::setEndpoint(const std::string& endpoint)
{
	endpoint_ = endpoint;
	setBodyParameter("Endpoint", endpoint);
}

std::string VerifyNotificationConfigRequest::getTopic()const
{
	return topic_;
}

void VerifyNotificationConfigRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setBodyParameter("Topic", topic);
}

std::string VerifyNotificationConfigRequest::getTag()const
{
	return tag_;
}

void VerifyNotificationConfigRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setBodyParameter("Tag", tag);
}

