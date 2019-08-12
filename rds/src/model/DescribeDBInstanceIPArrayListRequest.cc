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

#include <alibabacloud/rds/model/DescribeDBInstanceIPArrayListRequest.h>

using AlibabaCloud::Rds::Model::DescribeDBInstanceIPArrayListRequest;

DescribeDBInstanceIPArrayListRequest::DescribeDBInstanceIPArrayListRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeDBInstanceIPArrayList")
{}

DescribeDBInstanceIPArrayListRequest::~DescribeDBInstanceIPArrayListRequest()
{}

long DescribeDBInstanceIPArrayListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDBInstanceIPArrayListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDBInstanceIPArrayListRequest::getWhitelistNetworkType()const
{
	return whitelistNetworkType_;
}

void DescribeDBInstanceIPArrayListRequest::setWhitelistNetworkType(const std::string& whitelistNetworkType)
{
	whitelistNetworkType_ = whitelistNetworkType;
	setCoreParameter("WhitelistNetworkType", whitelistNetworkType);
}

std::string DescribeDBInstanceIPArrayListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDBInstanceIPArrayListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDBInstanceIPArrayListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDBInstanceIPArrayListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDBInstanceIPArrayListRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeDBInstanceIPArrayListRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long DescribeDBInstanceIPArrayListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDBInstanceIPArrayListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDBInstanceIPArrayListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDBInstanceIPArrayListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

