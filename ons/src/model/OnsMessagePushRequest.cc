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

#include <alibabacloud/ons/model/OnsMessagePushRequest.h>

using AlibabaCloud::Ons::Model::OnsMessagePushRequest;

OnsMessagePushRequest::OnsMessagePushRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsMessagePush")
{}

OnsMessagePushRequest::~OnsMessagePushRequest()
{}

long OnsMessagePushRequest::getPreventCache()const
{
	return preventCache_;
}

void OnsMessagePushRequest::setPreventCache(long preventCache)
{
	preventCache_ = preventCache;
	setParameter("PreventCache", std::to_string(preventCache));
}

std::string OnsMessagePushRequest::getClientId()const
{
	return clientId_;
}

void OnsMessagePushRequest::setClientId(const std::string& clientId)
{
	clientId_ = clientId;
	setParameter("ClientId", clientId);
}

std::string OnsMessagePushRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsMessagePushRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string OnsMessagePushRequest::getGroupId()const
{
	return groupId_;
}

void OnsMessagePushRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string OnsMessagePushRequest::getMsgId()const
{
	return msgId_;
}

void OnsMessagePushRequest::setMsgId(const std::string& msgId)
{
	msgId_ = msgId;
	setParameter("MsgId", msgId);
}

std::string OnsMessagePushRequest::getTopic()const
{
	return topic_;
}

void OnsMessagePushRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setParameter("Topic", topic);
}

