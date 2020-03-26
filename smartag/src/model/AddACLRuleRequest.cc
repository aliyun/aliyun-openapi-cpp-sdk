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
{
	setMethod(HttpRequest::Method::Post);
}

AddACLRuleRequest::~AddACLRuleRequest()
{}

long AddACLRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddACLRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddACLRuleRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void AddACLRuleRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string AddACLRuleRequest::getSourceCidr()const
{
	return sourceCidr_;
}

void AddACLRuleRequest::setSourceCidr(const std::string& sourceCidr)
{
	sourceCidr_ = sourceCidr;
	setParameter("SourceCidr", sourceCidr);
}

std::string AddACLRuleRequest::getDescription()const
{
	return description_;
}

void AddACLRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AddACLRuleRequest::getType()const
{
	return type_;
}

void AddACLRuleRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string AddACLRuleRequest::getDestCidr()const
{
	return destCidr_;
}

void AddACLRuleRequest::setDestCidr(const std::string& destCidr)
{
	destCidr_ = destCidr;
	setParameter("DestCidr", destCidr);
}

std::string AddACLRuleRequest::getRegionId()const
{
	return regionId_;
}

void AddACLRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddACLRuleRequest::getDirection()const
{
	return direction_;
}

void AddACLRuleRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
}

std::string AddACLRuleRequest::getPolicy()const
{
	return policy_;
}

void AddACLRuleRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string AddACLRuleRequest::getAclId()const
{
	return aclId_;
}

void AddACLRuleRequest::setAclId(const std::string& aclId)
{
	aclId_ = aclId;
	setParameter("AclId", aclId);
}

std::string AddACLRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddACLRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddACLRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void AddACLRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string AddACLRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddACLRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AddACLRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void AddACLRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int AddACLRuleRequest::getPriority()const
{
	return priority_;
}

void AddACLRuleRequest::setPriority(int priority)
{
	priority_ = priority;
	setParameter("Priority", std::to_string(priority));
}

std::string AddACLRuleRequest::getDestPortRange()const
{
	return destPortRange_;
}

void AddACLRuleRequest::setDestPortRange(const std::string& destPortRange)
{
	destPortRange_ = destPortRange;
	setParameter("DestPortRange", destPortRange);
}

std::string AddACLRuleRequest::getName()const
{
	return name_;
}

void AddACLRuleRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

