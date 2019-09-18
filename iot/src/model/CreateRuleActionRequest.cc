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

#include <alibabacloud/iot/model/CreateRuleActionRequest.h>

using AlibabaCloud::Iot::Model::CreateRuleActionRequest;

CreateRuleActionRequest::CreateRuleActionRequest() :
	RpcServiceRequest("iot", "2018-01-20", "CreateRuleAction")
{}

CreateRuleActionRequest::~CreateRuleActionRequest()
{}

std::string CreateRuleActionRequest::getConfiguration()const
{
	return configuration_;
}

void CreateRuleActionRequest::setConfiguration(const std::string& configuration)
{
	configuration_ = configuration;
	setCoreParameter("Configuration", configuration);
}

std::string CreateRuleActionRequest::getType()const
{
	return type_;
}

void CreateRuleActionRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateRuleActionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateRuleActionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateRuleActionRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void CreateRuleActionRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

long CreateRuleActionRequest::getRuleId()const
{
	return ruleId_;
}

void CreateRuleActionRequest::setRuleId(long ruleId)
{
	ruleId_ = ruleId;
	setCoreParameter("RuleId", std::to_string(ruleId));
}

bool CreateRuleActionRequest::getErrorActionFlag()const
{
	return errorActionFlag_;
}

void CreateRuleActionRequest::setErrorActionFlag(bool errorActionFlag)
{
	errorActionFlag_ = errorActionFlag;
	setCoreParameter("ErrorActionFlag", errorActionFlag ? "true" : "false");
}

