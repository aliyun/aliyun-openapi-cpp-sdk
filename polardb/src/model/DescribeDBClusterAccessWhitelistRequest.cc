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

#include <alibabacloud/polardb/model/DescribeDBClusterAccessWhitelistRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterAccessWhitelistRequest;

DescribeDBClusterAccessWhitelistRequest::DescribeDBClusterAccessWhitelistRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterAccessWhitelist")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterAccessWhitelistRequest::~DescribeDBClusterAccessWhitelistRequest()
{}

long DescribeDBClusterAccessWhitelistRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterAccessWhitelistRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterAccessWhitelistRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterAccessWhitelistRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterAccessWhitelistRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterAccessWhitelistRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterAccessWhitelistRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterAccessWhitelistRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterAccessWhitelistRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterAccessWhitelistRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterAccessWhitelistRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterAccessWhitelistRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

