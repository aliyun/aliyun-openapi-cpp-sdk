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

#include <alibabacloud/ram/model/AttachPolicyToUserRequest.h>

using AlibabaCloud::Ram::Model::AttachPolicyToUserRequest;

AttachPolicyToUserRequest::AttachPolicyToUserRequest() :
	RpcServiceRequest("ram", "2015-05-01", "AttachPolicyToUser")
{}

AttachPolicyToUserRequest::~AttachPolicyToUserRequest()
{}

std::string AttachPolicyToUserRequest::getPolicyType()const
{
	return policyType_;
}

void AttachPolicyToUserRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setCoreParameter("PolicyType", policyType);
}

std::string AttachPolicyToUserRequest::getPolicyName()const
{
	return policyName_;
}

void AttachPolicyToUserRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setCoreParameter("PolicyName", policyName);
}

std::string AttachPolicyToUserRequest::getUserName()const
{
	return userName_;
}

void AttachPolicyToUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

