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

#include <alibabacloud/ccc/model/ModifyPrivacyNumberCallDetailRequest.h>

using AlibabaCloud::CCC::Model::ModifyPrivacyNumberCallDetailRequest;

ModifyPrivacyNumberCallDetailRequest::ModifyPrivacyNumberCallDetailRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "ModifyPrivacyNumberCallDetail")
{}

ModifyPrivacyNumberCallDetailRequest::~ModifyPrivacyNumberCallDetailRequest()
{}

std::string ModifyPrivacyNumberCallDetailRequest::getCallId()const
{
	return callId_;
}

void ModifyPrivacyNumberCallDetailRequest::setCallId(const std::string& callId)
{
	callId_ = callId;
	setCoreParameter("CallId", callId);
}

std::string ModifyPrivacyNumberCallDetailRequest::getContactId()const
{
	return contactId_;
}

void ModifyPrivacyNumberCallDetailRequest::setContactId(const std::string& contactId)
{
	contactId_ = contactId;
	setCoreParameter("ContactId", contactId);
}

std::string ModifyPrivacyNumberCallDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyPrivacyNumberCallDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyPrivacyNumberCallDetailRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyPrivacyNumberCallDetailRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

