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

#include <alibabacloud/cms/model/PutEventRuleRequest.h>

using AlibabaCloud::Cms::Model::PutEventRuleRequest;

PutEventRuleRequest::PutEventRuleRequest() :
	RpcServiceRequest("cms", "2018-03-08", "PutEventRule")
{}

PutEventRuleRequest::~PutEventRuleRequest()
{}

std::vector<PutEventRuleRequest::EventPattern> PutEventRuleRequest::getEventPattern()const
{
	return eventPattern_;
}

void PutEventRuleRequest::setEventPattern(const std::vector<EventPattern>& eventPattern)
{
	eventPattern_ = eventPattern;
	int i = 0;
	for(int i = 0; i!= eventPattern.size(); i++)	{
		auto obj = eventPattern.at(i);
		std::string str ="EventPattern."+ std::to_string(i);
		for(int i = 0; i!= obj.levelList.size(); i++)				setParameter(str + ".LevelList."+ std::to_string(i), obj.levelList.at(i));
		setParameter(str + ".Product", obj.product);
		for(int i = 0; i!= obj.statusList.size(); i++)				setParameter(str + ".StatusList."+ std::to_string(i), obj.statusList.at(i));
		for(int i = 0; i!= obj.nameList.size(); i++)				setParameter(str + ".NameList."+ std::to_string(i), obj.nameList.at(i));
		for(int i = 0; i!= obj.eventTypeList.size(); i++)				setParameter(str + ".EventTypeList."+ std::to_string(i), obj.eventTypeList.at(i));
	}
}

std::string PutEventRuleRequest::getGroupId()const
{
	return groupId_;
}

void PutEventRuleRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setParameter("GroupId", groupId);
}

std::string PutEventRuleRequest::getName()const
{
	return name_;
}

void PutEventRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string PutEventRuleRequest::getDescription()const
{
	return description_;
}

void PutEventRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string PutEventRuleRequest::getEventType()const
{
	return eventType_;
}

void PutEventRuleRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setParameter("EventType", eventType);
}

std::string PutEventRuleRequest::getState()const
{
	return state_;
}

void PutEventRuleRequest::setState(const std::string& state)
{
	state_ = state;
	setParameter("State", state);
}

