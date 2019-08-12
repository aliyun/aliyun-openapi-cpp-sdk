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

#include <alibabacloud/ram/model/AttachPolicyToRoleRequest.h>

using AlibabaCloud::Ram::Model::AttachPolicyToRoleRequest;

AttachPolicyToRoleRequest::AttachPolicyToRoleRequest() :
	RpcServiceRequest("ram", "2015-05-01", "AttachPolicyToRole")
{}

AttachPolicyToRoleRequest::~AttachPolicyToRoleRequest()
{}

std::string AttachPolicyToRoleRequest::getPolicyType()const
{
	return policyType_;
}

void AttachPolicyToRoleRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setCoreParameter("PolicyType", std::to_string(policyType));
}

std::string AttachPolicyToRoleRequest::getRoleName()const
{
	return roleName_;
}

void AttachPolicyToRoleRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setCoreParameter("RoleName", std::to_string(roleName));
}

std::string AttachPolicyToRoleRequest::getPolicyName()const
{
	return policyName_;
}

void AttachPolicyToRoleRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setCoreParameter("PolicyName", std::to_string(policyName));
}

