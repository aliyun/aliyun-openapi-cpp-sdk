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

#include <alibabacloud/sas/model/CreateBackupPolicyRequest.h>

using AlibabaCloud::Sas::Model::CreateBackupPolicyRequest;

CreateBackupPolicyRequest::CreateBackupPolicyRequest() :
	RpcServiceRequest("sas", "2018-12-03", "CreateBackupPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBackupPolicyRequest::~CreateBackupPolicyRequest()
{}

long CreateBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateBackupPolicyRequest::getSourceIp()const
{
	return sourceIp_;
}

void CreateBackupPolicyRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::vector<std::string> CreateBackupPolicyRequest::getUuidList()const
{
	return uuidList_;
}

void CreateBackupPolicyRequest::setUuidList(const std::vector<std::string>& uuidList)
{
	uuidList_ = uuidList;
	for(int dep1 = 0; dep1!= uuidList.size(); dep1++) {
		setParameter("UuidList."+ std::to_string(dep1), uuidList.at(dep1));
	}
}

std::string CreateBackupPolicyRequest::getPolicy()const
{
	return policy_;
}

void CreateBackupPolicyRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string CreateBackupPolicyRequest::getPolicyVersion()const
{
	return policyVersion_;
}

void CreateBackupPolicyRequest::setPolicyVersion(const std::string& policyVersion)
{
	policyVersion_ = policyVersion;
	setParameter("PolicyVersion", policyVersion);
}

std::string CreateBackupPolicyRequest::getPolicyRegionId()const
{
	return policyRegionId_;
}

void CreateBackupPolicyRequest::setPolicyRegionId(const std::string& policyRegionId)
{
	policyRegionId_ = policyRegionId;
	setParameter("PolicyRegionId", policyRegionId);
}

std::string CreateBackupPolicyRequest::getName()const
{
	return name_;
}

void CreateBackupPolicyRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

