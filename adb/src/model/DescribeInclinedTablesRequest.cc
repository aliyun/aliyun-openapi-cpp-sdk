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

#include <alibabacloud/adb/model/DescribeInclinedTablesRequest.h>

using AlibabaCloud::Adb::Model::DescribeInclinedTablesRequest;

DescribeInclinedTablesRequest::DescribeInclinedTablesRequest() :
	RpcServiceRequest("adb", "2019-03-15", "DescribeInclinedTables")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeInclinedTablesRequest::~DescribeInclinedTablesRequest()
{}

std::string DescribeInclinedTablesRequest::getTableType()const
{
	return tableType_;
}

void DescribeInclinedTablesRequest::setTableType(const std::string& tableType)
{
	tableType_ = tableType;
	setParameter("TableType", tableType);
}

long DescribeInclinedTablesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInclinedTablesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeInclinedTablesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInclinedTablesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeInclinedTablesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeInclinedTablesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int DescribeInclinedTablesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeInclinedTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeInclinedTablesRequest::getOrder()const
{
	return order_;
}

void DescribeInclinedTablesRequest::setOrder(const std::string& order)
{
	order_ = order;
	setParameter("Order", order);
}

std::string DescribeInclinedTablesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInclinedTablesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInclinedTablesRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void DescribeInclinedTablesRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string DescribeInclinedTablesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInclinedTablesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeInclinedTablesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInclinedTablesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

