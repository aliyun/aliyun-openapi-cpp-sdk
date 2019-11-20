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

#include <alibabacloud/ccc/model/AddBulkPhoneNumbersRequest.h>

using AlibabaCloud::CCC::Model::AddBulkPhoneNumbersRequest;

AddBulkPhoneNumbersRequest::AddBulkPhoneNumbersRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "AddBulkPhoneNumbers")
{
	setMethod(HttpRequest::Method::Post);
}

AddBulkPhoneNumbersRequest::~AddBulkPhoneNumbersRequest()
{}

std::string AddBulkPhoneNumbersRequest::getContactFlowId()const
{
	return contactFlowId_;
}

void AddBulkPhoneNumbersRequest::setContactFlowId(const std::string& contactFlowId)
{
	contactFlowId_ = contactFlowId;
	setCoreParameter("ContactFlowId", contactFlowId);
}

std::string AddBulkPhoneNumbersRequest::getUsage()const
{
	return usage_;
}

void AddBulkPhoneNumbersRequest::setUsage(const std::string& usage)
{
	usage_ = usage;
	setCoreParameter("Usage", usage);
}

std::vector<std::string> AddBulkPhoneNumbersRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void AddBulkPhoneNumbersRequest::setPhoneNumber(const std::vector<std::string>& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	for(int dep1 = 0; dep1!= phoneNumber.size(); dep1++)
		setCoreParameter("PhoneNumber."+ std::to_string(dep1), phoneNumber.at(dep1));
}

std::string AddBulkPhoneNumbersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddBulkPhoneNumbersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddBulkPhoneNumbersRequest::getInstanceId()const
{
	return instanceId_;
}

void AddBulkPhoneNumbersRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::vector<std::string> AddBulkPhoneNumbersRequest::getSkillGroupId()const
{
	return skillGroupId_;
}

void AddBulkPhoneNumbersRequest::setSkillGroupId(const std::vector<std::string>& skillGroupId)
{
	skillGroupId_ = skillGroupId;
	for(int dep1 = 0; dep1!= skillGroupId.size(); dep1++)
		setCoreParameter("SkillGroupId."+ std::to_string(dep1), skillGroupId.at(dep1));
}

