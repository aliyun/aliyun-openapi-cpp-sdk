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

#include <alibabacloud/polardb/model/DescribeProtectedDBsRequest.h>

using AlibabaCloud::Polardb::Model::DescribeProtectedDBsRequest;

DescribeProtectedDBsRequest::DescribeProtectedDBsRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeProtectedDBs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeProtectedDBsRequest::~DescribeProtectedDBsRequest()
{}

long DescribeProtectedDBsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeProtectedDBsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeProtectedDBsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeProtectedDBsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeProtectedDBsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeProtectedDBsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeProtectedDBsRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeProtectedDBsRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeProtectedDBsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeProtectedDBsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeProtectedDBsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeProtectedDBsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeProtectedDBsRequest::getQueryProtectedDB()const
{
	return queryProtectedDB_;
}

void DescribeProtectedDBsRequest::setQueryProtectedDB(const std::string& queryProtectedDB)
{
	queryProtectedDB_ = queryProtectedDB;
	setParameter("QueryProtectedDB", queryProtectedDB);
}

std::string DescribeProtectedDBsRequest::getDBName()const
{
	return dBName_;
}

void DescribeProtectedDBsRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

