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

#include <alibabacloud/ecs/model/ModifySecurityGroupRuleRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupRuleRequest;

ModifySecurityGroupRuleRequest::ModifySecurityGroupRuleRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupRule")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySecurityGroupRuleRequest::~ModifySecurityGroupRuleRequest()
{}

std::string ModifySecurityGroupRuleRequest::getNicType()const
{
	return nicType_;
}

void ModifySecurityGroupRuleRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long ModifySecurityGroupRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySecurityGroupRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySecurityGroupRuleRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void ModifySecurityGroupRuleRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string ModifySecurityGroupRuleRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySecurityGroupRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifySecurityGroupRuleRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifySecurityGroupRuleRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string ModifySecurityGroupRuleRequest::getDescription()const
{
	return description_;
}

void ModifySecurityGroupRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long ModifySecurityGroupRuleRequest::getSourceGroupOwnerId()const
{
	return sourceGroupOwnerId_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupOwnerId(long sourceGroupOwnerId)
{
	sourceGroupOwnerId_ = sourceGroupOwnerId;
	setParameter("SourceGroupOwnerId", std::to_string(sourceGroupOwnerId));
}

std::string ModifySecurityGroupRuleRequest::getSourceGroupOwnerAccount()const
{
	return sourceGroupOwnerAccount_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupOwnerAccount(const std::string& sourceGroupOwnerAccount)
{
	sourceGroupOwnerAccount_ = sourceGroupOwnerAccount;
	setParameter("SourceGroupOwnerAccount", sourceGroupOwnerAccount);
}

std::string ModifySecurityGroupRuleRequest::getRegionId()const
{
	return regionId_;
}

void ModifySecurityGroupRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifySecurityGroupRuleRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void ModifySecurityGroupRuleRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void ModifySecurityGroupRuleRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getPolicy()const
{
	return policy_;
}

void ModifySecurityGroupRuleRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string ModifySecurityGroupRuleRequest::getPortRange()const
{
	return portRange_;
}

void ModifySecurityGroupRuleRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string ModifySecurityGroupRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySecurityGroupRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySecurityGroupRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifySecurityGroupRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string ModifySecurityGroupRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySecurityGroupRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifySecurityGroupRuleRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void ModifySecurityGroupRuleRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

long ModifySecurityGroupRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySecurityGroupRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySecurityGroupRuleRequest::getPriority()const
{
	return priority_;
}

void ModifySecurityGroupRuleRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setParameter("Priority", priority);
}

std::string ModifySecurityGroupRuleRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void ModifySecurityGroupRuleRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

std::string ModifySecurityGroupRuleRequest::getSourceGroupId()const
{
	return sourceGroupId_;
}

void ModifySecurityGroupRuleRequest::setSourceGroupId(const std::string& sourceGroupId)
{
	sourceGroupId_ = sourceGroupId;
	setParameter("SourceGroupId", sourceGroupId);
}

