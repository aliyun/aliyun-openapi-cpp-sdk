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

#include <alibabacloud/ons/model/OnsTrendGroupOutputTpsRequest.h>

using AlibabaCloud::Ons::Model::OnsTrendGroupOutputTpsRequest;

OnsTrendGroupOutputTpsRequest::OnsTrendGroupOutputTpsRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsTrendGroupOutputTps")
{
	setMethod(HttpRequest::Method::POST);
}

OnsTrendGroupOutputTpsRequest::~OnsTrendGroupOutputTpsRequest()
{}

long OnsTrendGroupOutputTpsRequest::getPeriod()const
{
	return period_;
}

void OnsTrendGroupOutputTpsRequest::setPeriod(long period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string OnsTrendGroupOutputTpsRequest::getGroupId()const
{
	return groupId_;
}

void OnsTrendGroupOutputTpsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

long OnsTrendGroupOutputTpsRequest::getEndTime()const
{
	return endTime_;
}

void OnsTrendGroupOutputTpsRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

long OnsTrendGroupOutputTpsRequest::getBeginTime()const
{
	return beginTime_;
}

void OnsTrendGroupOutputTpsRequest::setBeginTime(long beginTime)
{
	beginTime_ = beginTime;
	setParameter("BeginTime", std::to_string(beginTime));
}

int OnsTrendGroupOutputTpsRequest::getType()const
{
	return type_;
}

void OnsTrendGroupOutputTpsRequest::setType(int type)
{
	type_ = type;
	setParameter("Type", std::to_string(type));
}

std::string OnsTrendGroupOutputTpsRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsTrendGroupOutputTpsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string OnsTrendGroupOutputTpsRequest::getTopic()const
{
	return topic_;
}

void OnsTrendGroupOutputTpsRequest::setTopic(const std::string& topic)
{
	topic_ = topic;
	setParameter("Topic", topic);
}

