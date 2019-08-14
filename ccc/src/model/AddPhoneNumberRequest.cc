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

#include <alibabacloud/ccc/model/AddPhoneNumberRequest.h>

using AlibabaCloud::CCC::Model::AddPhoneNumberRequest;

AddPhoneNumberRequest::AddPhoneNumberRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "AddPhoneNumber")
{}

AddPhoneNumberRequest::~AddPhoneNumberRequest()
{}

std::string AddPhoneNumberRequest::getContactFlowId()const
{
	return contactFlowId_;
}

void AddPhoneNumberRequest::setContactFlowId(const std::string& contactFlowId)
{
	contactFlowId_ = contactFlowId;
	setCoreParameter("ContactFlowId", contactFlowId);
}

std::string AddPhoneNumberRequest::getInstanceId()const
{
	return instanceId_;
}

void AddPhoneNumberRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AddPhoneNumberRequest::getUsage()const
{
	return usage_;
}

void AddPhoneNumberRequest::setUsage(const std::string& usage)
{
	usage_ = usage;
	setCoreParameter("Usage", usage);
}

std::string AddPhoneNumberRequest::getPhoneNumber()const
{
	return phoneNumber_;
}

void AddPhoneNumberRequest::setPhoneNumber(const std::string& phoneNumber)
{
	phoneNumber_ = phoneNumber;
	setCoreParameter("PhoneNumber", phoneNumber);
}

std::string AddPhoneNumberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddPhoneNumberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

