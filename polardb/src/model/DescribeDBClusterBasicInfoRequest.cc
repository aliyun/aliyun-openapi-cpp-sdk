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

#include <alibabacloud/polardb/model/DescribeDBClusterBasicInfoRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDBClusterBasicInfoRequest;

DescribeDBClusterBasicInfoRequest::DescribeDBClusterBasicInfoRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDBClusterBasicInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterBasicInfoRequest::~DescribeDBClusterBasicInfoRequest()
{}

long DescribeDBClusterBasicInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterBasicInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterBasicInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterBasicInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterBasicInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterBasicInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterBasicInfoRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterBasicInfoRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterBasicInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterBasicInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterBasicInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterBasicInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

