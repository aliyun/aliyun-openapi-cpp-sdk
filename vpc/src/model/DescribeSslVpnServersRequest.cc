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

#include <alibabacloud/vpc/model/DescribeSslVpnServersRequest.h>

using AlibabaCloud::Vpc::Model::DescribeSslVpnServersRequest;

DescribeSslVpnServersRequest::DescribeSslVpnServersRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DescribeSslVpnServers")
{}

DescribeSslVpnServersRequest::~DescribeSslVpnServersRequest()
{}

std::string DescribeSslVpnServersRequest::getSslVpnServerId()const
{
	return sslVpnServerId_;
}

void DescribeSslVpnServersRequest::setSslVpnServerId(const std::string& sslVpnServerId)
{
	sslVpnServerId_ = sslVpnServerId;
	setParameter("SslVpnServerId", sslVpnServerId);
}

long DescribeSslVpnServersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSslVpnServersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSslVpnServersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSslVpnServersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSslVpnServersRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSslVpnServersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeSslVpnServersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSslVpnServersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSslVpnServersRequest::getName()const
{
	return name_;
}

void DescribeSslVpnServersRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

int DescribeSslVpnServersRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSslVpnServersRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSslVpnServersRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void DescribeSslVpnServersRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setParameter("VpnGatewayId", vpnGatewayId);
}

long DescribeSslVpnServersRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSslVpnServersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeSslVpnServersRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSslVpnServersRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

