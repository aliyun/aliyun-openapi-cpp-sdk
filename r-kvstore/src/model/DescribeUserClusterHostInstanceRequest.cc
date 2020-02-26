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

#include <alibabacloud/r-kvstore/model/DescribeUserClusterHostInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeUserClusterHostInstanceRequest;

DescribeUserClusterHostInstanceRequest::DescribeUserClusterHostInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeUserClusterHostInstance")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeUserClusterHostInstanceRequest::~DescribeUserClusterHostInstanceRequest()
{}

long DescribeUserClusterHostInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserClusterHostInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeUserClusterHostInstanceRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUserClusterHostInstanceRequest::setPageNumber(const std::string& pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", pageNumber);
}

std::string DescribeUserClusterHostInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserClusterHostInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeUserClusterHostInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserClusterHostInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeUserClusterHostInstanceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserClusterHostInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeUserClusterHostInstanceRequest::getEngine()const
{
	return engine_;
}

void DescribeUserClusterHostInstanceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeUserClusterHostInstanceRequest::getInstanceStatus()const
{
	return instanceStatus_;
}

void DescribeUserClusterHostInstanceRequest::setInstanceStatus(const std::string& instanceStatus)
{
	instanceStatus_ = instanceStatus;
	setParameter("InstanceStatus", instanceStatus);
}

std::string DescribeUserClusterHostInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserClusterHostInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeUserClusterHostInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeUserClusterHostInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeUserClusterHostInstanceRequest::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

void DescribeUserClusterHostInstanceRequest::setMaxRecordsPerPage(const std::string& maxRecordsPerPage)
{
	maxRecordsPerPage_ = maxRecordsPerPage;
	setParameter("MaxRecordsPerPage", maxRecordsPerPage);
}

std::string DescribeUserClusterHostInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void DescribeUserClusterHostInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long DescribeUserClusterHostInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserClusterHostInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserClusterHostInstanceRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeUserClusterHostInstanceRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setParameter("InstanceIds", instanceIds);
}

std::string DescribeUserClusterHostInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeUserClusterHostInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

