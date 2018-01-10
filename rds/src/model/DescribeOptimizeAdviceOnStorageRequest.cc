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

#include <alibabacloud/rds/model/DescribeOptimizeAdviceOnStorageRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOptimizeAdviceOnStorageRequest::DescribeOptimizeAdviceOnStorageRequest() :
	RdsRequest("DescribeOptimizeAdviceOnStorage")
{}

DescribeOptimizeAdviceOnStorageRequest::~DescribeOptimizeAdviceOnStorageRequest()
{}

long DescribeOptimizeAdviceOnStorageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeOptimizeAdviceOnStorageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeOptimizeAdviceOnStorageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeOptimizeAdviceOnStorageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeOptimizeAdviceOnStorageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeOptimizeAdviceOnStorageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeOptimizeAdviceOnStorageRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeOptimizeAdviceOnStorageRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeOptimizeAdviceOnStorageRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeOptimizeAdviceOnStorageRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DescribeOptimizeAdviceOnStorageRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeOptimizeAdviceOnStorageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeOptimizeAdviceOnStorageRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeOptimizeAdviceOnStorageRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeOptimizeAdviceOnStorageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeOptimizeAdviceOnStorageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

