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

#include <alibabacloud/rds/model/DescribeDBProxyEndpointRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBProxyEndpointRequest;

DescribeDBProxyEndpointRequest::DescribeDBProxyEndpointRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBProxyEndpoint")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBProxyEndpointRequest::~DescribeDBProxyEndpointRequest()
{}

long DescribeDBProxyEndpointRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBProxyEndpointRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBProxyEndpointRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBProxyEndpointRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBProxyEndpointRequest::getDBProxyConnectString()const
{
	return dBProxyConnectString_;
}

void DescribeDBProxyEndpointRequest::setDBProxyConnectString(const std::string& dBProxyConnectString)
{
	dBProxyConnectString_ = dBProxyConnectString;
	setCoreParameter("DBProxyConnectString", dBProxyConnectString);
}

std::string DescribeDBProxyEndpointRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDBProxyEndpointRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeDBProxyEndpointRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBProxyEndpointRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeDBProxyEndpointRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBProxyEndpointRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long DescribeDBProxyEndpointRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBProxyEndpointRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBProxyEndpointRequest::getDBProxyEndpointId()const
{
	return dBProxyEndpointId_;
}

void DescribeDBProxyEndpointRequest::setDBProxyEndpointId(const std::string& dBProxyEndpointId)
{
	dBProxyEndpointId_ = dBProxyEndpointId;
	setCoreParameter("DBProxyEndpointId", dBProxyEndpointId);
}

