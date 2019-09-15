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

#include <alibabacloud/aegis/model/CreateOrUpdateDingTalkRequest.h>

using AlibabaCloud::Aegis::Model::CreateOrUpdateDingTalkRequest;

CreateOrUpdateDingTalkRequest::CreateOrUpdateDingTalkRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "CreateOrUpdateDingTalk")
{}

CreateOrUpdateDingTalkRequest::~CreateOrUpdateDingTalkRequest()
{}

std::string CreateOrUpdateDingTalkRequest::getRuleActionName()const
{
	return ruleActionName_;
}

void CreateOrUpdateDingTalkRequest::setRuleActionName(const std::string& ruleActionName)
{
	ruleActionName_ = ruleActionName;
	setCoreParameter("RuleActionName", ruleActionName);
}

std::string CreateOrUpdateDingTalkRequest::getSendUrl()const
{
	return sendUrl_;
}

void CreateOrUpdateDingTalkRequest::setSendUrl(const std::string& sendUrl)
{
	sendUrl_ = sendUrl;
	setCoreParameter("SendUrl", sendUrl);
}

long CreateOrUpdateDingTalkRequest::getIntervalTime()const
{
	return intervalTime_;
}

void CreateOrUpdateDingTalkRequest::setIntervalTime(long intervalTime)
{
	intervalTime_ = intervalTime;
	setCoreParameter("IntervalTime", std::to_string(intervalTime));
}

std::string CreateOrUpdateDingTalkRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateOrUpdateDingTalkRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long CreateOrUpdateDingTalkRequest::getId()const
{
	return id_;
}

void CreateOrUpdateDingTalkRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

