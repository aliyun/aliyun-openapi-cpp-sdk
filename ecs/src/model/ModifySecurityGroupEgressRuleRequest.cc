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

#include <alibabacloud/ecs/model/ModifySecurityGroupEgressRuleRequest.h>

using AlibabaCloud::Ecs::Model::ModifySecurityGroupEgressRuleRequest;

ModifySecurityGroupEgressRuleRequest::ModifySecurityGroupEgressRuleRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifySecurityGroupEgressRule")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySecurityGroupEgressRuleRequest::~ModifySecurityGroupEgressRuleRequest()
{}

std::string ModifySecurityGroupEgressRuleRequest::getNicType()const
{
	return nicType_;
}

void ModifySecurityGroupEgressRuleRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long ModifySecurityGroupEgressRuleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySecurityGroupEgressRuleRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void ModifySecurityGroupEgressRuleRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string ModifySecurityGroupEgressRuleRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySecurityGroupEgressRuleRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifySecurityGroupEgressRuleRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string ModifySecurityGroupEgressRuleRequest::getDescription()const
{
	return description_;
}

void ModifySecurityGroupEgressRuleRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifySecurityGroupEgressRuleRequest::getRegionId()const
{
	return regionId_;
}

void ModifySecurityGroupEgressRuleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getPolicy()const
{
	return policy_;
}

void ModifySecurityGroupEgressRuleRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string ModifySecurityGroupEgressRuleRequest::getPortRange()const
{
	return portRange_;
}

void ModifySecurityGroupEgressRuleRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string ModifySecurityGroupEgressRuleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void ModifySecurityGroupEgressRuleRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string ModifySecurityGroupEgressRuleRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestGroupId()const
{
	return destGroupId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setParameter("DestGroupId", destGroupId);
}

long ModifySecurityGroupEgressRuleRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySecurityGroupEgressRuleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySecurityGroupEgressRuleRequest::getDestGroupOwnerAccount()const
{
	return destGroupOwnerAccount_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount)
{
	destGroupOwnerAccount_ = destGroupOwnerAccount;
	setParameter("DestGroupOwnerAccount", destGroupOwnerAccount);
}

std::string ModifySecurityGroupEgressRuleRequest::getPriority()const
{
	return priority_;
}

void ModifySecurityGroupEgressRuleRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setParameter("Priority", priority);
}

std::string ModifySecurityGroupEgressRuleRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void ModifySecurityGroupEgressRuleRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

long ModifySecurityGroupEgressRuleRequest::getDestGroupOwnerId()const
{
	return destGroupOwnerId_;
}

void ModifySecurityGroupEgressRuleRequest::setDestGroupOwnerId(long destGroupOwnerId)
{
	destGroupOwnerId_ = destGroupOwnerId;
	setParameter("DestGroupOwnerId", std::to_string(destGroupOwnerId));
}

