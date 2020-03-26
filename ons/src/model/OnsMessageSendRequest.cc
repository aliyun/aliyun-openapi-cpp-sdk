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

#include <alibabacloud/ons/model/OnsMessageSendRequest.h>

using AlibabaCloud::Ons::Model::OnsMessageSendRequest;

OnsMessageSendRequest::OnsMessageSendRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsMessageSend")
{
	setMethod(HttpRequest::Method::Post);
}

OnsMessageSendRequest::~OnsMessageSendRequest()
{}

std::string OnsMessageSendRequest::getMessage()const
{
	return message_;
}

void OnsMessageSendRequest::setMessage(const std::string& message)
{
	message_ = message;
	setParameter("Message", message);
}

std::string OnsMessageSendRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsMessageSendRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string OnsMessageSendRequest::getTopic()const
{
	return topic_;
}

void OnsMessageSendRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setParameter("Topic", topic);
}

std::string OnsMessageSendRequest::getTag()const
{
	return tag_;
}

void OnsMessageSendRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setParameter("Tag", tag);
}

std::string OnsMessageSendRequest::getKey()const
{
	return key_;
}

void OnsMessageSendRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

