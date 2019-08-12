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

#include <alibabacloud/polardb/model/DescribeDatabasesRequest.h>

using AlibabaCloud::Polardb::Model::DescribeDatabasesRequest;

DescribeDatabasesRequest::DescribeDatabasesRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "DescribeDatabases")
{}

DescribeDatabasesRequest::~DescribeDatabasesRequest()
{}

long DescribeDatabasesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDatabasesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeDatabasesRequest::getDBName()const
{
	return dBName_;
}

void DescribeDatabasesRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", dBName);
}

std::string DescribeDatabasesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDatabasesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDatabasesRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeDatabasesRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string DescribeDatabasesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDatabasesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeDatabasesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDatabasesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDatabasesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDatabasesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

