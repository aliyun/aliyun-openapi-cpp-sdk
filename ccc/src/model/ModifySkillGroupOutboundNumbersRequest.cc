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

#include <alibabacloud/ccc/model/ModifySkillGroupOutboundNumbersRequest.h>

using AlibabaCloud::CCC::Model::ModifySkillGroupOutboundNumbersRequest;

ModifySkillGroupOutboundNumbersRequest::ModifySkillGroupOutboundNumbersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifySkillGroupOutboundNumbers")
{}

ModifySkillGroupOutboundNumbersRequest::~ModifySkillGroupOutboundNumbersRequest()
{}

std::string ModifySkillGroupOutboundNumbersRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifySkillGroupOutboundNumbersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::vector<std::string> ModifySkillGroupOutboundNumbersRequest::getOutboundPhoneNumberId()const
{
	return outboundPhoneNumberId_;
}

void ModifySkillGroupOutboundNumbersRequest::setOutboundPhoneNumberId(const std::vector<std::string>& outboundPhoneNumberId)
{
	outboundPhoneNumberId_ = outboundPhoneNumberId;
	for(int i = 0; i!= outboundPhoneNumberId.size(); i++)
		setCoreParameter("OutboundPhoneNumberId."+ std::to_string(i), std::to_string(outboundPhoneNumberId.at(i)));
}

std::string ModifySkillGroupOutboundNumbersRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ModifySkillGroupOutboundNumbersRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", std::to_string(skillGroupId));
}

int ModifySkillGroupOutboundNumbersRequest::getOperationType()const
{
	return operationType_;
}

void ModifySkillGroupOutboundNumbersRequest::setOperationType(int operationType)
{
	operationType_ = operationType;
	setCoreParameter("OperationType", operationType);
}

std::string ModifySkillGroupOutboundNumbersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySkillGroupOutboundNumbersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

