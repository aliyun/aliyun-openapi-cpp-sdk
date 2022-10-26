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

#include <alibabacloud/polardb/model/DescribeDBClusterIPArrayListRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterIPArrayListRequest;

DescribeDBClusterIPArrayListRequest::DescribeDBClusterIPArrayListRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterIPArrayList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterIPArrayListRequest::~DescribeDBClusterIPArrayListRequest()
{}

long DescribeDBClusterIPArrayListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterIPArrayListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterIPArrayListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterIPArrayListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterIPArrayListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterIPArrayListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterIPArrayListRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterIPArrayListRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterIPArrayListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterIPArrayListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterIPArrayListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterIPArrayListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

