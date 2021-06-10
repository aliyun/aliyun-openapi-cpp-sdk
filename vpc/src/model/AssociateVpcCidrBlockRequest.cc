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

#include <alibabacloud/vpc/model/AssociateVpcCidrBlockRequest.h>

using AlibabaCloud::Vpc::Model::AssociateVpcCidrBlockRequest;

AssociateVpcCidrBlockRequest::AssociateVpcCidrBlockRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AssociateVpcCidrBlock")
{
	setMethod(HttpRequest::Method::Post);
}

AssociateVpcCidrBlockRequest::~AssociateVpcCidrBlockRequest()
{}

long AssociateVpcCidrBlockRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateVpcCidrBlockRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AssociateVpcCidrBlockRequest::getIPv6CidrType()const
{
	return iPv6CidrType_;
}

void AssociateVpcCidrBlockRequest::setIPv6CidrType(const std::string& iPv6CidrType)
{
	iPv6CidrType_ = iPv6CidrType;
	setParameter("IPv6CidrType", iPv6CidrType);
}

std::string AssociateVpcCidrBlockRequest::getRegionId()const
{
	return regionId_;
}

void AssociateVpcCidrBlockRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssociateVpcCidrBlockRequest::getIpv6Isp()const
{
	return ipv6Isp_;
}

void AssociateVpcCidrBlockRequest::setIpv6Isp(const std::string& ipv6Isp)
{
	ipv6Isp_ = ipv6Isp;
	setParameter("Ipv6Isp", ipv6Isp);
}

std::string AssociateVpcCidrBlockRequest::getIpVersion()const
{
	return ipVersion_;
}

void AssociateVpcCidrBlockRequest::setIpVersion(const std::string& ipVersion)
{
	ipVersion_ = ipVersion;
	setParameter("IpVersion", ipVersion);
}

std::string AssociateVpcCidrBlockRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateVpcCidrBlockRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateVpcCidrBlockRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociateVpcCidrBlockRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AssociateVpcCidrBlockRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateVpcCidrBlockRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AssociateVpcCidrBlockRequest::getIPv6CidrBlock()const
{
	return iPv6CidrBlock_;
}

void AssociateVpcCidrBlockRequest::setIPv6CidrBlock(const std::string& iPv6CidrBlock)
{
	iPv6CidrBlock_ = iPv6CidrBlock;
	setParameter("IPv6CidrBlock", iPv6CidrBlock);
}

std::string AssociateVpcCidrBlockRequest::getSecondaryCidrBlock()const
{
	return secondaryCidrBlock_;
}

void AssociateVpcCidrBlockRequest::setSecondaryCidrBlock(const std::string& secondaryCidrBlock)
{
	secondaryCidrBlock_ = secondaryCidrBlock;
	setParameter("SecondaryCidrBlock", secondaryCidrBlock);
}

std::string AssociateVpcCidrBlockRequest::getVpcId()const
{
	return vpcId_;
}

void AssociateVpcCidrBlockRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

