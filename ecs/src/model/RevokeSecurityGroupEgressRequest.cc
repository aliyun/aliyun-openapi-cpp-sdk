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

#include <alibabacloud/ecs/model/RevokeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ecs::Model::RevokeSecurityGroupEgressRequest;

RevokeSecurityGroupEgressRequest::RevokeSecurityGroupEgressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RevokeSecurityGroupEgress")
{
	setMethod(HttpRequest::Method::Post);
}

RevokeSecurityGroupEgressRequest::~RevokeSecurityGroupEgressRequest()
{}

std::string RevokeSecurityGroupEgressRequest::getNicType()const
{
	return nicType_;
}

void RevokeSecurityGroupEgressRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long RevokeSecurityGroupEgressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RevokeSecurityGroupEgressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RevokeSecurityGroupEgressRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void RevokeSecurityGroupEgressRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string RevokeSecurityGroupEgressRequest::getClientToken()const
{
	return clientToken_;
}

void RevokeSecurityGroupEgressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RevokeSecurityGroupEgressRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void RevokeSecurityGroupEgressRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string RevokeSecurityGroupEgressRequest::getDescription()const
{
	return description_;
}

void RevokeSecurityGroupEgressRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string RevokeSecurityGroupEgressRequest::getRegionId()const
{
	return regionId_;
}

void RevokeSecurityGroupEgressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RevokeSecurityGroupEgressRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string RevokeSecurityGroupEgressRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string RevokeSecurityGroupEgressRequest::getPolicy()const
{
	return policy_;
}

void RevokeSecurityGroupEgressRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string RevokeSecurityGroupEgressRequest::getPortRange()const
{
	return portRange_;
}

void RevokeSecurityGroupEgressRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string RevokeSecurityGroupEgressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RevokeSecurityGroupEgressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RevokeSecurityGroupEgressRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void RevokeSecurityGroupEgressRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string RevokeSecurityGroupEgressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RevokeSecurityGroupEgressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RevokeSecurityGroupEgressRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

std::string RevokeSecurityGroupEgressRequest::getDestGroupId()const
{
	return destGroupId_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setParameter("DestGroupId", destGroupId);
}

long RevokeSecurityGroupEgressRequest::getOwnerId()const
{
	return ownerId_;
}

void RevokeSecurityGroupEgressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RevokeSecurityGroupEgressRequest::getDestGroupOwnerAccount()const
{
	return destGroupOwnerAccount_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount)
{
	destGroupOwnerAccount_ = destGroupOwnerAccount;
	setParameter("DestGroupOwnerAccount", destGroupOwnerAccount);
}

std::string RevokeSecurityGroupEgressRequest::getPriority()const
{
	return priority_;
}

void RevokeSecurityGroupEgressRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setParameter("Priority", priority);
}

std::string RevokeSecurityGroupEgressRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void RevokeSecurityGroupEgressRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

long RevokeSecurityGroupEgressRequest::getDestGroupOwnerId()const
{
	return destGroupOwnerId_;
}

void RevokeSecurityGroupEgressRequest::setDestGroupOwnerId(long destGroupOwnerId)
{
	destGroupOwnerId_ = destGroupOwnerId;
	setParameter("DestGroupOwnerId", std::to_string(destGroupOwnerId));
}

