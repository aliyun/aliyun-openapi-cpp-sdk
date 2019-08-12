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

#include <alibabacloud/polardb/model/DescribeDBClusterEndpointsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterEndpointsRequest;

DescribeDBClusterEndpointsRequest::DescribeDBClusterEndpointsRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterEndpoints")
{}

DescribeDBClusterEndpointsRequest::~DescribeDBClusterEndpointsRequest()
{}

long DescribeDBClusterEndpointsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterEndpointsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterEndpointsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterEndpointsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterEndpointsRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterEndpointsRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterEndpointsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterEndpointsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDBClusterEndpointsRequest::getDBEndpointId()const
{
	return dBEndpointId_;
}

void DescribeDBClusterEndpointsRequest::setDBEndpointId(const std::string& dBEndpointId)
{
	dBEndpointId_ = dBEndpointId;
	setCoreParameter("DBEndpointId", dBEndpointId);
}

long DescribeDBClusterEndpointsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterEndpointsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDBClusterEndpointsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterEndpointsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

