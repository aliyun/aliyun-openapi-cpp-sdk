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

#include <alibabacloud/ccc/model/ModifyPhoneNumberRequest.h>

using AlibabaCloud::CCC::Model::ModifyPhoneNumberRequest;

ModifyPhoneNumberRequest::ModifyPhoneNumberRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyPhoneNumber")
{}

ModifyPhoneNumberRequest::~ModifyPhoneNumberRequest()
{}

std::string ModifyPhoneNumberRequest::getContactFlowId()const
{
	return contactFlowId_;
}

void ModifyPhoneNumberRequest::setContactFlowId(const std::string& contactFlowId)
{
	contactFlowId_ = contactFlowId;
	setParameter("ContactFlowId", contactFlowId);
}

std::string ModifyPhoneNumberRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyPhoneNumberRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string ModifyPhoneNumberRequest::getPhoneNumberId()const
{
	return phoneNumberId_;
}

void ModifyPhoneNumberRequest::setPhoneNumberId(const std::string& phoneNumberId)
{
	phoneNumberId_ = phoneNumberId;
	setParameter("PhoneNumberId", phoneNumberId);
}

std::string ModifyPhoneNumberRequest::getUsage()const
{
	return usage_;
}

void ModifyPhoneNumberRequest::setUsage(const std::string& usage)
{
	usage_ = usage;
	setParameter("Usage", usage);
}

std::string ModifyPhoneNumberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyPhoneNumberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

