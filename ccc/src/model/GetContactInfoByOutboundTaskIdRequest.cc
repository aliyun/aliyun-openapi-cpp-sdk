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

#include <alibabacloud/ccc/model/GetContactInfoByOutboundTaskIdRequest.h>

using AlibabaCloud::CCC::Model::GetContactInfoByOutboundTaskIdRequest;

GetContactInfoByOutboundTaskIdRequest::GetContactInfoByOutboundTaskIdRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "GetContactInfoByOutboundTaskId")
{}

GetContactInfoByOutboundTaskIdRequest::~GetContactInfoByOutboundTaskIdRequest()
{}

std::string GetContactInfoByOutboundTaskIdRequest::getInstanceId()const
{
	return instanceId_;
}

void GetContactInfoByOutboundTaskIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetContactInfoByOutboundTaskIdRequest::getOutboundTaskId()const
{
	return outboundTaskId_;
}

void GetContactInfoByOutboundTaskIdRequest::setOutboundTaskId(const std::string& outboundTaskId)
{
	outboundTaskId_ = outboundTaskId;
	setCoreParameter("OutboundTaskId", outboundTaskId);
}

std::string GetContactInfoByOutboundTaskIdRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void GetContactInfoByOutboundTaskIdRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", skillGroupId);
}

