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

#include <alibabacloud/ram/model/DetachPolicyFromRoleRequest.h>

using AlibabaCloud::Ram::Model::DetachPolicyFromRoleRequest;

DetachPolicyFromRoleRequest::DetachPolicyFromRoleRequest() :
	RpcServiceRequest("ram", "2015-05-01", "DetachPolicyFromRole")
{
	setMethod(HttpRequest::Method::Post);
}

DetachPolicyFromRoleRequest::~DetachPolicyFromRoleRequest()
{}

std::string DetachPolicyFromRoleRequest::getPolicyType()const
{
	return policyType_;
}

void DetachPolicyFromRoleRequest::setPolicyType(const std::string& policyType)
{
	policyType_ = policyType;
	setParameter("PolicyType", policyType);
}

std::string DetachPolicyFromRoleRequest::getRoleName()const
{
	return roleName_;
}

void DetachPolicyFromRoleRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setParameter("RoleName", roleName);
}

std::string DetachPolicyFromRoleRequest::getPolicyName()const
{
	return policyName_;
}

void DetachPolicyFromRoleRequest::setPolicyName(const std::string& policyName)
{
	policyName_ = policyName;
	setParameter("PolicyName", policyName);
}

