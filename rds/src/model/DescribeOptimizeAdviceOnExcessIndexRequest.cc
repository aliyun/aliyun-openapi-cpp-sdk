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

#include <alibabacloud/rds/model/DescribeOptimizeAdviceOnExcessIndexRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeOptimizeAdviceOnExcessIndexRequest::DescribeOptimizeAdviceOnExcessIndexRequest() :
	RdsRequest("DescribeOptimizeAdviceOnExcessIndex")
{}

DescribeOptimizeAdviceOnExcessIndexRequest::~DescribeOptimizeAdviceOnExcessIndexRequest()
{}

long DescribeOptimizeAdviceOnExcessIndexRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeOptimizeAdviceOnExcessIndexRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeOptimizeAdviceOnExcessIndexRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeOptimizeAdviceOnExcessIndexRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeOptimizeAdviceOnExcessIndexRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeOptimizeAdviceOnExcessIndexRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int DescribeOptimizeAdviceOnExcessIndexRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeOptimizeAdviceOnExcessIndexRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeOptimizeAdviceOnExcessIndexRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeOptimizeAdviceOnExcessIndexRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long DescribeOptimizeAdviceOnExcessIndexRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeOptimizeAdviceOnExcessIndexRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeOptimizeAdviceOnExcessIndexRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeOptimizeAdviceOnExcessIndexRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeOptimizeAdviceOnExcessIndexRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeOptimizeAdviceOnExcessIndexRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

