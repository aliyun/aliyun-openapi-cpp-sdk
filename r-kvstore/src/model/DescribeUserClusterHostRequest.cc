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

#include <alibabacloud/r-kvstore/model/DescribeUserClusterHostRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeUserClusterHostRequest;

DescribeUserClusterHostRequest::DescribeUserClusterHostRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeUserClusterHost")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUserClusterHostRequest::~DescribeUserClusterHostRequest()
{}

long DescribeUserClusterHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserClusterHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeUserClusterHostRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUserClusterHostRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeUserClusterHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserClusterHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeUserClusterHostRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserClusterHostRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeUserClusterHostRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserClusterHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeUserClusterHostRequest::getEngine()const
{
	return engine_;
}

void DescribeUserClusterHostRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeUserClusterHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserClusterHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeUserClusterHostRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeUserClusterHostRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeUserClusterHostRequest::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

void DescribeUserClusterHostRequest::setMaxRecordsPerPage(int maxRecordsPerPage)
{
	maxRecordsPerPage_ = maxRecordsPerPage;
	setParameter("MaxRecordsPerPage", std::to_string(maxRecordsPerPage));
}

std::string DescribeUserClusterHostRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeUserClusterHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long DescribeUserClusterHostRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserClusterHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserClusterHostRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeUserClusterHostRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

