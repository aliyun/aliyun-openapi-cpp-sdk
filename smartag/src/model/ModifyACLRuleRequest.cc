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

#include <alibabacloud/smartag/model/ModifyACLRuleRequest.h>

using AlibabaCloud::Smartag::Model::ModifyACLRuleRequest;

ModifyACLRuleRequest::ModifyACLRuleRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifyACLRule")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyACLRuleRequest::~ModifyACLRuleRequest()
{}

long ModifyACLRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyACLRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyACLRuleRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void ModifyACLRuleRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string ModifyACLRuleRequest::getSourceCidr()const
{
	return sourceCidr_;
}

void ModifyACLRuleRequest::setSourceCidr(const std::string& sourceCidr)
{
	sourceCidr_ = sourceCidr;
	setParameter("SourceCidr", sourceCidr);
}

std::string ModifyACLRuleRequest::getDescription()const
{
	return description_;
}

void ModifyACLRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyACLRuleRequest::getType()const
{
	return type_;
}

void ModifyACLRuleRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string ModifyACLRuleRequest::getDestCidr()const
{
	return destCidr_;
}

void ModifyACLRuleRequest::setDestCidr(const std::string& destCidr)
{
	destCidr_ = destCidr;
	setParameter("DestCidr", destCidr);
}

std::string ModifyACLRuleRequest::getRegionId()const
{
	return regionId_;
}

void ModifyACLRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyACLRuleRequest::getDirection()const
{
	return direction_;
}

void ModifyACLRuleRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

std::string ModifyACLRuleRequest::getPolicy()const
{
	return policy_;
}

void ModifyACLRuleRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string ModifyACLRuleRequest::getAclId()const
{
	return aclId_;
}

void ModifyACLRuleRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setParameter("AclId", aclId);
}

std::string ModifyACLRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyACLRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyACLRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifyACLRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string ModifyACLRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyACLRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyACLRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyACLRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ModifyACLRuleRequest::getPriority()const
{
	return priority_;
}

void ModifyACLRuleRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::string ModifyACLRuleRequest::getAcrId()const
{
	return acrId_;
}

void ModifyACLRuleRequest::setAcrId(const std::string& acrId)
{
	acrId_ = acrId;
	setParameter("AcrId", acrId);
}

std::string ModifyACLRuleRequest::getDestPortRange()const
{
	return destPortRange_;
}

void ModifyACLRuleRequest::setDestPortRange(const std::string& destPortRange)
{
	destPortRange_ = destPortRange;
	setParameter("DestPortRange", destPortRange);
}

std::string ModifyACLRuleRequest::getName()const
{
	return name_;
}

void ModifyACLRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

