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

#include <alibabacloud/emr/model/MetastoreListTablePartitionRequest.h>

using AlibabaCloud::Emr::Model::MetastoreListTablePartitionRequest;

MetastoreListTablePartitionRequest::MetastoreListTablePartitionRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreListTablePartition")
{}

MetastoreListTablePartitionRequest::~MetastoreListTablePartitionRequest()
{}

long MetastoreListTablePartitionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreListTablePartitionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreListTablePartitionRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreListTablePartitionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int MetastoreListTablePartitionRequest::getPageSize()const
{
	return pageSize_;
}

void MetastoreListTablePartitionRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string MetastoreListTablePartitionRequest::getTableId()const
{
	return tableId_;
}

void MetastoreListTablePartitionRequest::setTableId(const std::string& tableId)
{
	tableId_ = tableId;
	setParameter("TableId", tableId);
}

std::string MetastoreListTablePartitionRequest::getDatabaseId()const
{
	return databaseId_;
}

void MetastoreListTablePartitionRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setParameter("DatabaseId", databaseId);
}

int MetastoreListTablePartitionRequest::getPageNumber()const
{
	return pageNumber_;
}

void MetastoreListTablePartitionRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string MetastoreListTablePartitionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreListTablePartitionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

