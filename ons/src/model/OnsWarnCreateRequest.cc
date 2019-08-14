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

#include <alibabacloud/ons/model/OnsWarnCreateRequest.h>

using AlibabaCloud::Ons::Model::OnsWarnCreateRequest;

OnsWarnCreateRequest::OnsWarnCreateRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsWarnCreate")
{}

OnsWarnCreateRequest::~OnsWarnCreateRequest()
{}

std::string OnsWarnCreateRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsWarnCreateRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string OnsWarnCreateRequest::getBlockTime()const
{
	return blockTime_;
}

void OnsWarnCreateRequest::setBlockTime(const std::string& blockTime)
{
	blockTime_ = blockTime;
	setCoreParameter("BlockTime", blockTime);
}

std::string OnsWarnCreateRequest::getLevel()const
{
	return level_;
}

void OnsWarnCreateRequest::setLevel(const std::string& level)
{
	level_ = level;
	setCoreParameter("Level", level);
}

std::string OnsWarnCreateRequest::getGroupId()const
{
	return groupId_;
}

void OnsWarnCreateRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string OnsWarnCreateRequest::getDelayTime()const
{
	return delayTime_;
}

void OnsWarnCreateRequest::setDelayTime(const std::string& delayTime)
{
	delayTime_ = delayTime;
	setCoreParameter("DelayTime", delayTime);
}

std::string OnsWarnCreateRequest::getTopic()const
{
	return topic_;
}

void OnsWarnCreateRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setCoreParameter("Topic", topic);
}

std::string OnsWarnCreateRequest::getThreshold()const
{
	return threshold_;
}

void OnsWarnCreateRequest::setThreshold(const std::string& threshold)
{
	threshold_ = threshold;
	setCoreParameter("Threshold", threshold);
}

std::string OnsWarnCreateRequest::getAlertTime()const
{
	return alertTime_;
}

void OnsWarnCreateRequest::setAlertTime(const std::string& alertTime)
{
	alertTime_ = alertTime;
	setCoreParameter("AlertTime", alertTime);
}

std::string OnsWarnCreateRequest::getContacts()const
{
	return contacts_;
}

void OnsWarnCreateRequest::setContacts(const std::string& contacts)
{
	contacts_ = contacts;
	setCoreParameter("Contacts", contacts);
}

