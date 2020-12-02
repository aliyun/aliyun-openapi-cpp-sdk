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

#include <alibabacloud/idrsservice/model/CreateTaskGroupRequest.h>

using AlibabaCloud::Idrsservice::Model::CreateTaskGroupRequest;

CreateTaskGroupRequest::CreateTaskGroupRequest() :
	RpcServiceRequest("idrsservice", "2020-06-30", "CreateTaskGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateTaskGroupRequest::~CreateTaskGroupRequest()
{}

std::string CreateTaskGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateTaskGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateTaskGroupRequest::getExpireAt()const
{
	return expireAt_;
}

void CreateTaskGroupRequest::setExpireAt(const std::string& expireAt)
{
	expireAt_ = expireAt;
	setParameter("ExpireAt", expireAt);
}

std::vector<int> CreateTaskGroupRequest::getDay()const
{
	return day_;
}

void CreateTaskGroupRequest::setDay(const std::vector<int>& day)
{
	day_ = day;
	for(int dep1 = 0; dep1!= day.size(); dep1++) {
		setParameter("Day."+ std::to_string(dep1), std::to_string(day.at(dep1)));
	}
}

std::string CreateTaskGroupRequest::getRunnableTimeTo()const
{
	return runnableTimeTo_;
}

void CreateTaskGroupRequest::setRunnableTimeTo(const std::string& runnableTimeTo)
{
	runnableTimeTo_ = runnableTimeTo;
	setParameter("RunnableTimeTo", runnableTimeTo);
}

std::string CreateTaskGroupRequest::getTriggerPeriod()const
{
	return triggerPeriod_;
}

void CreateTaskGroupRequest::setTriggerPeriod(const std::string& triggerPeriod)
{
	triggerPeriod_ = triggerPeriod;
	setParameter("TriggerPeriod", triggerPeriod);
}

std::string CreateTaskGroupRequest::getGroupName()const
{
	return groupName_;
}

void CreateTaskGroupRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setParameter("GroupName", groupName);
}

std::vector<std::string> CreateTaskGroupRequest::getVideoUrl()const
{
	return videoUrl_;
}

void CreateTaskGroupRequest::setVideoUrl(const std::vector<std::string>& videoUrl)
{
	videoUrl_ = videoUrl;
	for(int dep1 = 0; dep1!= videoUrl.size(); dep1++) {
		setParameter("VideoUrl."+ std::to_string(dep1), videoUrl.at(dep1));
	}
}

std::string CreateTaskGroupRequest::getAppId()const
{
	return appId_;
}

void CreateTaskGroupRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string CreateTaskGroupRequest::getRunnableTimeFrom()const
{
	return runnableTimeFrom_;
}

void CreateTaskGroupRequest::setRunnableTimeFrom(const std::string& runnableTimeFrom)
{
	runnableTimeFrom_ = runnableTimeFrom;
	setParameter("RunnableTimeFrom", runnableTimeFrom);
}

std::string CreateTaskGroupRequest::getRuleId()const
{
	return ruleId_;
}

void CreateTaskGroupRequest::setRuleId(const std::string& ruleId)
{
	ruleId_ = ruleId;
	setParameter("RuleId", ruleId);
}

