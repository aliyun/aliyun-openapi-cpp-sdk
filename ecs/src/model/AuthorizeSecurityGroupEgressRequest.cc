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

#include <alibabacloud/ecs/model/AuthorizeSecurityGroupEgressRequest.h>

using AlibabaCloud::Ecs::Model::AuthorizeSecurityGroupEgressRequest;

AuthorizeSecurityGroupEgressRequest::AuthorizeSecurityGroupEgressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AuthorizeSecurityGroupEgress")
{
	setMethod(HttpRequest::Method::Post);
}

AuthorizeSecurityGroupEgressRequest::~AuthorizeSecurityGroupEgressRequest()
{}

std::string AuthorizeSecurityGroupEgressRequest::getNicType()const
{
	return nicType_;
}

void AuthorizeSecurityGroupEgressRequest::setNicType(const std::string& nicType)
{
	nicType_ = nicType;
	setParameter("NicType", nicType);
}

long AuthorizeSecurityGroupEgressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AuthorizeSecurityGroupEgressRequest::getSourcePortRange()const
{
	return sourcePortRange_;
}

void AuthorizeSecurityGroupEgressRequest::setSourcePortRange(const std::string& sourcePortRange)
{
	sourcePortRange_ = sourcePortRange;
	setParameter("SourcePortRange", sourcePortRange);
}

std::string AuthorizeSecurityGroupEgressRequest::getClientToken()const
{
	return clientToken_;
}

void AuthorizeSecurityGroupEgressRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string AuthorizeSecurityGroupEgressRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

std::string AuthorizeSecurityGroupEgressRequest::getDescription()const
{
	return description_;
}

void AuthorizeSecurityGroupEgressRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AuthorizeSecurityGroupEgressRequest::getRegionId()const
{
	return regionId_;
}

void AuthorizeSecurityGroupEgressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpv6DestCidrIp()const
{
	return ipv6DestCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setIpv6DestCidrIp(const std::string& ipv6DestCidrIp)
{
	ipv6DestCidrIp_ = ipv6DestCidrIp;
	setParameter("Ipv6DestCidrIp", ipv6DestCidrIp);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpv6SourceCidrIp()const
{
	return ipv6SourceCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setIpv6SourceCidrIp(const std::string& ipv6SourceCidrIp)
{
	ipv6SourceCidrIp_ = ipv6SourceCidrIp;
	setParameter("Ipv6SourceCidrIp", ipv6SourceCidrIp);
}

std::string AuthorizeSecurityGroupEgressRequest::getPolicy()const
{
	return policy_;
}

void AuthorizeSecurityGroupEgressRequest::setPolicy(const std::string& policy)
{
	policy_ = policy;
	setParameter("Policy", policy);
}

std::string AuthorizeSecurityGroupEgressRequest::getPortRange()const
{
	return portRange_;
}

void AuthorizeSecurityGroupEgressRequest::setPortRange(const std::string& portRange)
{
	portRange_ = portRange;
	setParameter("PortRange", portRange);
}

std::string AuthorizeSecurityGroupEgressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getIpProtocol()const
{
	return ipProtocol_;
}

void AuthorizeSecurityGroupEgressRequest::setIpProtocol(const std::string& ipProtocol)
{
	ipProtocol_ = ipProtocol;
	setParameter("IpProtocol", ipProtocol);
}

std::string AuthorizeSecurityGroupEgressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getSourceCidrIp()const
{
	return sourceCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setSourceCidrIp(const std::string& sourceCidrIp)
{
	sourceCidrIp_ = sourceCidrIp;
	setParameter("SourceCidrIp", sourceCidrIp);
}

std::string AuthorizeSecurityGroupEgressRequest::getDestGroupId()const
{
	return destGroupId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupId(const std::string& destGroupId)
{
	destGroupId_ = destGroupId;
	setParameter("DestGroupId", destGroupId);
}

long AuthorizeSecurityGroupEgressRequest::getOwnerId()const
{
	return ownerId_;
}

void AuthorizeSecurityGroupEgressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AuthorizeSecurityGroupEgressRequest::getDestGroupOwnerAccount()const
{
	return destGroupOwnerAccount_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupOwnerAccount(const std::string& destGroupOwnerAccount)
{
	destGroupOwnerAccount_ = destGroupOwnerAccount;
	setParameter("DestGroupOwnerAccount", destGroupOwnerAccount);
}

std::string AuthorizeSecurityGroupEgressRequest::getPriority()const
{
	return priority_;
}

void AuthorizeSecurityGroupEgressRequest::setPriority(const std::string& priority)
{
	priority_ = priority;
	setParameter("Priority", priority);
}

std::string AuthorizeSecurityGroupEgressRequest::getDestCidrIp()const
{
	return destCidrIp_;
}

void AuthorizeSecurityGroupEgressRequest::setDestCidrIp(const std::string& destCidrIp)
{
	destCidrIp_ = destCidrIp;
	setParameter("DestCidrIp", destCidrIp);
}

long AuthorizeSecurityGroupEgressRequest::getDestGroupOwnerId()const
{
	return destGroupOwnerId_;
}

void AuthorizeSecurityGroupEgressRequest::setDestGroupOwnerId(long destGroupOwnerId)
{
	destGroupOwnerId_ = destGroupOwnerId;
	setParameter("DestGroupOwnerId", std::to_string(destGroupOwnerId));
}

