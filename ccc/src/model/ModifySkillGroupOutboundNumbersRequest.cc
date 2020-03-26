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
{
	setMethod(HttpRequest::Method::Post);
}

ModifySkillGroupOutboundNumbersRequest::~ModifySkillGroupOutboundNumbersRequest()
{}

int ModifySkillGroupOutboundNumbersRequest::getOperationType()const
{
	return operationType_;
}

void ModifySkillGroupOutboundNumbersRequest::setOperationType(int operationType)
{
	operationType_ = operationType;
	setParameter("OperationType", std::to_string(operationType));
}

std::string ModifySkillGroupOutboundNumbersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySkillGroupOutboundNumbersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifySkillGroupOutboundNumbersRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifySkillGroupOutboundNumbersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::vector<std::string> ModifySkillGroupOutboundNumbersRequest::getOutboundPhoneNumberId()const
{
	return outboundPhoneNumberId_;
}

void ModifySkillGroupOutboundNumbersRequest::setOutboundPhoneNumberId(const std::vector<std::string>& outboundPhoneNumberId)
{
	outboundPhoneNumberId_ = outboundPhoneNumberId;
	for(int dep1 = 0; dep1!= outboundPhoneNumberId.size(); dep1++) {
		setParameter("OutboundPhoneNumberId."+ std::to_string(dep1), outboundPhoneNumberId.at(dep1));
	}
}

std::string ModifySkillGroupOutboundNumbersRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void ModifySkillGroupOutboundNumbersRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setParameter("SkillGroupId", skillGroupId);
}

