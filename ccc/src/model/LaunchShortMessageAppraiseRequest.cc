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

#include <alibabacloud/ccc/model/LaunchShortMessageAppraiseRequest.h>

using AlibabaCloud::CCC::Model::LaunchShortMessageAppraiseRequest;

LaunchShortMessageAppraiseRequest::LaunchShortMessageAppraiseRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "LaunchShortMessageAppraise")
{}

LaunchShortMessageAppraiseRequest::~LaunchShortMessageAppraiseRequest()
{}

std::string LaunchShortMessageAppraiseRequest::getAcid()const
{
	return acid_;
}

void LaunchShortMessageAppraiseRequest::setAcid(const std::string& acid)
{
	acid_ = acid;
	setCoreParameter("Acid", std::to_string(acid));
}

std::string LaunchShortMessageAppraiseRequest::getInstanceId()const
{
	return instanceId_;
}

void LaunchShortMessageAppraiseRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

int LaunchShortMessageAppraiseRequest::getContactType()const
{
	return contactType_;
}

void LaunchShortMessageAppraiseRequest::setContactType(int contactType)
{
	contactType_ = contactType;
	setCoreParameter("ContactType", contactType);
}

std::string LaunchShortMessageAppraiseRequest::getPhoneNumbers()const
{
	return phoneNumbers_;
}

void LaunchShortMessageAppraiseRequest::setPhoneNumbers(const std::string& phoneNumbers)
{
	phoneNumbers_ = phoneNumbers;
	setCoreParameter("PhoneNumbers", std::to_string(phoneNumbers));
}

std::string LaunchShortMessageAppraiseRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void LaunchShortMessageAppraiseRequest::setSkillGroupId(const std::string& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	setCoreParameter("SkillGroupId", std::to_string(skillGroupId));
}

std::string LaunchShortMessageAppraiseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void LaunchShortMessageAppraiseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

