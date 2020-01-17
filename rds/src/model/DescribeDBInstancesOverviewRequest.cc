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

#include <alibabacloud/rds/model/DescribeDBInstancesOverviewRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstancesOverviewRequest;

DescribeDBInstancesOverviewRequest::DescribeDBInstancesOverviewRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstancesOverview")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBInstancesOverviewRequest::~DescribeDBInstancesOverviewRequest()
{}

long DescribeDBInstancesOverviewRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstancesOverviewRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBInstancesOverviewRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeDBInstancesOverviewRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DescribeDBInstancesOverviewRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstancesOverviewRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBInstancesOverviewRequest::getExpired()const
{
	return expired_;
}

void DescribeDBInstancesOverviewRequest::setExpired(const std::string& expired)
{
	expired_ = expired;
	setCoreParameter("Expired", expired);
}

std::string DescribeDBInstancesOverviewRequest::getEngine()const
{
	return engine_;
}

void DescribeDBInstancesOverviewRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string DescribeDBInstancesOverviewRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBInstancesOverviewRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDBInstancesOverviewRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstancesOverviewRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBInstancesOverviewRequest::getProxyId()const
{
	return proxyId_;
}

void DescribeDBInstancesOverviewRequest::setProxyId(const std::string& proxyId)
{
	proxyId_ = proxyId;
	setCoreParameter("ProxyId", proxyId);
}

std::string DescribeDBInstancesOverviewRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstancesOverviewRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeDBInstancesOverviewRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstancesOverviewRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBInstancesOverviewRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDBInstancesOverviewRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

