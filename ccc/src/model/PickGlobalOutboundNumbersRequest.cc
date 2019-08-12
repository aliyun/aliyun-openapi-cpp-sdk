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

#include <alibabacloud/ccc/model/PickGlobalOutboundNumbersRequest.h>

using AlibabaCloud::CCC::Model::PickGlobalOutboundNumbersRequest;

PickGlobalOutboundNumbersRequest::PickGlobalOutboundNumbersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "PickGlobalOutboundNumbers")
{}

PickGlobalOutboundNumbersRequest::~PickGlobalOutboundNumbersRequest()
{}

bool PickGlobalOutboundNumbersRequest::getIsVirtual()const
{
	return isVirtual_;
}

void PickGlobalOutboundNumbersRequest::setIsVirtual(bool isVirtual)
{
	isVirtual_ = isVirtual;
	setCoreParameter("IsVirtual", isVirtual ? "true" : "false");
}

std::string PickGlobalOutboundNumbersRequest::getInstanceId()const
{
	return instanceId_;
}

void PickGlobalOutboundNumbersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::vector<std::string> PickGlobalOutboundNumbersRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void PickGlobalOutboundNumbersRequest::setSkillGroupId(const std::vector<std::string>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int i = 0; i!= skillGroupId.size(); i++)
		setCoreParameter("SkillGroupId."+ std::to_string(i), std::to_string(skillGroupId.at(i)));
}

int PickGlobalOutboundNumbersRequest::getCount()const
{
	return count_;
}

void PickGlobalOutboundNumbersRequest::setCount(int count)
{
	count_ = count;
	setCoreParameter("Count", count);
}

std::string PickGlobalOutboundNumbersRequest::getCalleeNumber()const
{
	return calleeNumber_;
}

void PickGlobalOutboundNumbersRequest::setCalleeNumber(const std::string& calleeNumber)
{
	calleeNumber_ = calleeNumber;
	setCoreParameter("CalleeNumber", std::to_string(calleeNumber));
}

std::string PickGlobalOutboundNumbersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PickGlobalOutboundNumbersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

