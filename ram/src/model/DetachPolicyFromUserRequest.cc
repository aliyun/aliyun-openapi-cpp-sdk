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

#include <alibabacloud/ram/model/DetachPolicyFromUserRequest.h>

using AlibabaCloud::Ram::Model::DetachPolicyFromUserRequest;

DetachPolicyFromUserRequest::DetachPolicyFromUserRequest() :
	RpcServiceRequest("ram", "2015-05-01", "DetachPolicyFromUser")
{
	setMethod(HttpRequest::Method::Post);
}

DetachPolicyFromUserRequest::~DetachPolicyFromUserRequest()
{}

std::string DetachPolicyFromUserRequest::getPolicyType()const
{
	return policyType_;
}

void DetachPolicyFromUserRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setParameter("PolicyType", policyType);
}

std::string DetachPolicyFromUserRequest::getPolicyName()const
{
	return policyName_;
}

void DetachPolicyFromUserRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setParameter("PolicyName", policyName);
}

std::string DetachPolicyFromUserRequest::getUserName()const
{
	return userName_;
}

void DetachPolicyFromUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

