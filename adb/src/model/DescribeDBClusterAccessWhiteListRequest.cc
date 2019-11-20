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

#include <alibabacloud/adb/model/DescribeDBClusterAccessWhiteListRequest.h>

using AlibabaCloud::Adb::Model::DescribeDBClusterAccessWhiteListRequest;

DescribeDBClusterAccessWhiteListRequest::DescribeDBClusterAccessWhiteListRequest() :
	RpcServiceRequest("adb", "2019-03-15", "DescribeDBClusterAccessWhiteList")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDBClusterAccessWhiteListRequest::~DescribeDBClusterAccessWhiteListRequest()
{}

long DescribeDBClusterAccessWhiteListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBClusterAccessWhiteListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDBClusterAccessWhiteListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBClusterAccessWhiteListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDBClusterAccessWhiteListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBClusterAccessWhiteListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBClusterAccessWhiteListRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDBClusterAccessWhiteListRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string DescribeDBClusterAccessWhiteListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBClusterAccessWhiteListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDBClusterAccessWhiteListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBClusterAccessWhiteListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

