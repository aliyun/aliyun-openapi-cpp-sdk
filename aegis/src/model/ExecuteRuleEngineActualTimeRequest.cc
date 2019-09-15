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

#include <alibabacloud/aegis/model/ExecuteRuleEngineActualTimeRequest.h>

using AlibabaCloud::Aegis::Model::ExecuteRuleEngineActualTimeRequest;

ExecuteRuleEngineActualTimeRequest::ExecuteRuleEngineActualTimeRequest() :
	RpcServiceRequest("aegis", "2016-11-11", "ExecuteRuleEngineActualTime")
{}

ExecuteRuleEngineActualTimeRequest::~ExecuteRuleEngineActualTimeRequest()
{}

std::string ExecuteRuleEngineActualTimeRequest::getMessage()const
{
	return message_;
}

void ExecuteRuleEngineActualTimeRequest::setMessage(const std::string& message)
{
	message_ = message;
	setCoreParameter("Message", message);
}

std::string ExecuteRuleEngineActualTimeRequest::getSourceIp()const
{
	return sourceIp_;
}

void ExecuteRuleEngineActualTimeRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setCoreParameter("SourceIp", sourceIp);
}

long ExecuteRuleEngineActualTimeRequest::getRuleId()const
{
	return ruleId_;
}

void ExecuteRuleEngineActualTimeRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

