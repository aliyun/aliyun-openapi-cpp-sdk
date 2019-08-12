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

#include <alibabacloud/ons/model/OnsConsumerResetOffsetRequest.h>

using AlibabaCloud::Ons::Model::OnsConsumerResetOffsetRequest;

OnsConsumerResetOffsetRequest::OnsConsumerResetOffsetRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsConsumerResetOffset")
{}

OnsConsumerResetOffsetRequest::~OnsConsumerResetOffsetRequest()
{}

std::string OnsConsumerResetOffsetRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsConsumerResetOffsetRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string OnsConsumerResetOffsetRequest::getGroupId()const
{
	return groupId_;
}

void OnsConsumerResetOffsetRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string OnsConsumerResetOffsetRequest::getTopic()const
{
	return topic_;
}

void OnsConsumerResetOffsetRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", std::to_string(topic));
}

long OnsConsumerResetOffsetRequest::getResetTimestamp()const
{
	return resetTimestamp_;
}

void OnsConsumerResetOffsetRequest::setResetTimestamp(long resetTimestamp)
{
	resetTimestamp_ = resetTimestamp;
	setCoreParameter("ResetTimestamp", resetTimestamp);
}

int OnsConsumerResetOffsetRequest::getType()const
{
	return type_;
}

void OnsConsumerResetOffsetRequest::setType(int type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

