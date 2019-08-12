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

#include <alibabacloud/smartag/model/AddACLRuleRequest.h>

using AlibabaCloud::Smartag::Model::AddACLRuleRequest;

AddACLRuleRequest::AddACLRuleRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "AddACLRule")
{}

AddACLRuleRequest::~AddACLRuleRequest()
{}

std::string AddACLRuleRequest::getAclId()const
{
	return aclId_;
}

void AddACLRuleRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setCoreParameter("AclId", std::to_string(aclId));
}

long AddACLRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddACLRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddACLRuleRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void AddACLRuleRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setCoreParameter("SourcePortRange", std::to_string(sourcePortRange));
}

std::string AddACLRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddACLRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AddACLRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void AddACLRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setCoreParameter("IpProtocol", std::to_string(ipProtocol));
}

std::string AddACLRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddACLRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string AddACLRuleRequest::getSourceCidr()const
{
	return sourceCidr_;
}

void AddACLRuleRequest::setSourceCidr(const std::string& sourceCidr)
{
	sourceCidr_ = sourceCidr;
	setCoreParameter("SourceCidr", std::to_string(sourceCidr));
}

std::string AddACLRuleRequest::getDescription()const
{
	return description_;
}

void AddACLRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long AddACLRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void AddACLRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int AddACLRuleRequest::getPriority()const
{
	return priority_;
}

void AddACLRuleRequest::setPriority(int priority)
{
	priority_ = priority;
	setCoreParameter("Priority", priority);
}

std::string AddACLRuleRequest::getType()const
{
	return type_;
}

void AddACLRuleRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string AddACLRuleRequest::getDestCidr()const
{
	return destCidr_;
}

void AddACLRuleRequest::setDestCidr(const std::string& destCidr)
{
	destCidr_ = destCidr;
	setCoreParameter("DestCidr", std::to_string(destCidr));
}

std::string AddACLRuleRequest::getDestPortRange()const
{
	return destPortRange_;
}

void AddACLRuleRequest::setDestPortRange(const std::string& destPortRange)
{
	destPortRange_ = destPortRange;
	setCoreParameter("DestPortRange", std::to_string(destPortRange));
}

std::string AddACLRuleRequest::getRegionId()const
{
	return regionId_;
}

void AddACLRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string AddACLRuleRequest::getDirection()const
{
	return direction_;
}

void AddACLRuleRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setCoreParameter("Direction", std::to_string(direction));
}

std::string AddACLRuleRequest::getPolicy()const
{
	return policy_;
}

void AddACLRuleRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setCoreParameter("Policy", std::to_string(policy));
}

