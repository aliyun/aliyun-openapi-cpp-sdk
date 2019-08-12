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

#include <alibabacloud/iot/model/UpdateRuleActionRequest.h>

using AlibabaCloud::Iot::Model::UpdateRuleActionRequest;

UpdateRuleActionRequest::UpdateRuleActionRequest() :
	RpcServiceRequest("iot", "2018-01-20", "UpdateRuleAction")
{}

UpdateRuleActionRequest::~UpdateRuleActionRequest()
{}

std::string UpdateRuleActionRequest::getConfiguration()const
{
	return configuration_;
}

void UpdateRuleActionRequest::setConfiguration(const std::string& configuration)
{
	configuration_ = configuration;
	setCoreParameter("Configuration", configuration);
}

std::string UpdateRuleActionRequest::getIotInstanceId()const
{
	return iotInstanceId_;
}

void UpdateRuleActionRequest::setIotInstanceId(const std::string& iotInstanceId)
{
	iotInstanceId_ = iotInstanceId;
	setCoreParameter("IotInstanceId", iotInstanceId);
}

long UpdateRuleActionRequest::getActionId()const
{
	return actionId_;
}

void UpdateRuleActionRequest::setActionId(long actionId)
{
	actionId_ = actionId;
	setCoreParameter("ActionId", actionId);
}

std::string UpdateRuleActionRequest::getType()const
{
	return type_;
}

void UpdateRuleActionRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string UpdateRuleActionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateRuleActionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

