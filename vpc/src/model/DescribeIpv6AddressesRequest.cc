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

#include <alibabacloud/vpc/model/DescribeIpv6AddressesRequest.h>

using AlibabaCloud::Vpc::Model::DescribeIpv6AddressesRequest;

DescribeIpv6AddressesRequest::DescribeIpv6AddressesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeIpv6Addresses")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeIpv6AddressesRequest::~DescribeIpv6AddressesRequest()
{}

long DescribeIpv6AddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeIpv6AddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeIpv6AddressesRequest::getIpv6InternetBandwidthId()const
{
	return ipv6InternetBandwidthId_;
}

void DescribeIpv6AddressesRequest::setIpv6InternetBandwidthId(const std::string& ipv6InternetBandwidthId)
{
	ipv6InternetBandwidthId_ = ipv6InternetBandwidthId;
	setParameter("Ipv6InternetBandwidthId", ipv6InternetBandwidthId);
}

std::string DescribeIpv6AddressesRequest::getNetworkType()const
{
	return networkType_;
}

void DescribeIpv6AddressesRequest::setNetworkType(const std::string& networkType)
{
	networkType_ = networkType;
	setParameter("NetworkType", networkType);
}

int DescribeIpv6AddressesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeIpv6AddressesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeIpv6AddressesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeIpv6AddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeIpv6AddressesRequest::getAssociatedInstanceType()const
{
	return associatedInstanceType_;
}

void DescribeIpv6AddressesRequest::setAssociatedInstanceType(const std::string& associatedInstanceType)
{
	associatedInstanceType_ = associatedInstanceType;
	setParameter("AssociatedInstanceType", associatedInstanceType);
}

int DescribeIpv6AddressesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIpv6AddressesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeIpv6AddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeIpv6AddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeIpv6AddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeIpv6AddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeIpv6AddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeIpv6AddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeIpv6AddressesRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeIpv6AddressesRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string DescribeIpv6AddressesRequest::getIpv6AddressId()const
{
	return ipv6AddressId_;
}

void DescribeIpv6AddressesRequest::setIpv6AddressId(const std::string& ipv6AddressId)
{
	ipv6AddressId_ = ipv6AddressId;
	setParameter("Ipv6AddressId", ipv6AddressId);
}

std::string DescribeIpv6AddressesRequest::getVpcId()const
{
	return vpcId_;
}

void DescribeIpv6AddressesRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string DescribeIpv6AddressesRequest::getName()const
{
	return name_;
}

void DescribeIpv6AddressesRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

std::string DescribeIpv6AddressesRequest::getIpv6Address()const
{
	return ipv6Address_;
}

void DescribeIpv6AddressesRequest::setIpv6Address(const std::string& ipv6Address)
{
	ipv6Address_ = ipv6Address;
	setParameter("Ipv6Address", ipv6Address);
}

std::string DescribeIpv6AddressesRequest::getAssociatedInstanceId()const
{
	return associatedInstanceId_;
}

void DescribeIpv6AddressesRequest::setAssociatedInstanceId(const std::string& associatedInstanceId)
{
	associatedInstanceId_ = associatedInstanceId;
	setParameter("AssociatedInstanceId", associatedInstanceId);
}

