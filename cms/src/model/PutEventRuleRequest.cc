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
	RpcServiceRequest("cms", "2019-01-01", "PutEventRule")
{
	setMethod(HttpRequest::Method::Put);
}

PutEventRuleRequest::~PutEventRuleRequest()
{}

std::string PutEventRuleRequest::getGroupId()const
{
	return groupId_;
}

void PutEventRuleRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string PutEventRuleRequest::getDescription()const
{
	return description_;
}

void PutEventRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string PutEventRuleRequest::getRuleName()const
{
	return ruleName_;
}

void PutEventRuleRequest::setRuleName(const std::string& ruleName)
{
	ruleName_ = ruleName;
	setCoreParameter("RuleName", ruleName);
}

std::vector<PutEventRuleRequest::EventPattern> PutEventRuleRequest::getEventPattern()const
{
	return eventPattern_;
}

void PutEventRuleRequest::setEventPattern(const std::vector<EventPattern>& eventPattern)
{
	eventPattern_ = eventPattern;
	for(int dep1 = 0; dep1!= eventPattern.size(); dep1++) {
		auto eventPatternObj = eventPattern.at(dep1);
		std::string eventPatternObjStr = "EventPattern." + std::to_string(dep1);
		for(int dep2 = 0; dep2!= eventPatternObj.levelList.size(); dep2++) {
			setCoreParameter(eventPatternObjStr + ".LevelList."+ std::to_string(dep2), eventPatternObj.levelList.at(dep2));
		}
		setCoreParameter(eventPatternObjStr + ".Product", eventPatternObj.product);
		for(int dep2 = 0; dep2!= eventPatternObj.statusList.size(); dep2++) {
			setCoreParameter(eventPatternObjStr + ".StatusList."+ std::to_string(dep2), eventPatternObj.statusList.at(dep2));
		}
		for(int dep2 = 0; dep2!= eventPatternObj.nameList.size(); dep2++) {
			setCoreParameter(eventPatternObjStr + ".NameList."+ std::to_string(dep2), eventPatternObj.nameList.at(dep2));
		}
		for(int dep2 = 0; dep2!= eventPatternObj.eventTypeList.size(); dep2++) {
			setCoreParameter(eventPatternObjStr + ".EventTypeList."+ std::to_string(dep2), eventPatternObj.eventTypeList.at(dep2));
		}
	}
}

std::string PutEventRuleRequest::getEventType()const
{
	return eventType_;
}

void PutEventRuleRequest::setEventType(const std::string& eventType)
{
	eventType_ = eventType;
	setCoreParameter("EventType", eventType);
}

std::string PutEventRuleRequest::getState()const
{
	return state_;
}

void PutEventRuleRequest::setState(const std::string& state)
{
	state_ = state;
	setCoreParameter("State", state);
}

