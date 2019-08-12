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

#include <alibabacloud/ccc/model/RemovePhoneNumberRequest.h>

using AlibabaCloud::CCC::Model::RemovePhoneNumberRequest;

RemovePhoneNumberRequest::RemovePhoneNumberRequest() :
	RpcServiceRequest("ccc", "2017-07-05", "RemovePhoneNumber")
{}

RemovePhoneNumberRequest::~RemovePhoneNumberRequest()
{}

std::string RemovePhoneNumberRequest::getInstanceId()const
{
	return instanceId_;
}

void RemovePhoneNumberRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string RemovePhoneNumberRequest::getPhoneNumberId()const
{
	return phoneNumberId_;
}

void RemovePhoneNumberRequest::setPhoneNumberId(const std::string& phoneNumberId)
{
	phoneNumberId_ = phoneNumberId;
	setCoreParameter("PhoneNumberId", phoneNumberId);
}

std::string RemovePhoneNumberRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemovePhoneNumberRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

