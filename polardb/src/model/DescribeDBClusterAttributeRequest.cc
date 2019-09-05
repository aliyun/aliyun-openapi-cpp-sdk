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

#include <alibabacloud/polardb/model/DescribeDBClusterAttributeRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterAttributeRequest;

DescribeDBClusterAttributeRequest::DescribeDBClusterAttributeRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterAttribute")
{}

DescribeDBClusterAttributeRequest::~DescribeDBClusterAttributeRequest()
{}

long DescribeDBClusterAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterAttributeRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterAttributeRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

