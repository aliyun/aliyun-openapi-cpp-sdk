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

#include <alibabacloud/dataworks-public/model/ListTablePartitionsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListTablePartitionsRequest;

ListTablePartitionsRequest::ListTablePartitionsRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "ListTablePartitions")
{
	setMethod(HttpRequest::Method::Post);
}

ListTablePartitionsRequest::~ListTablePartitionsRequest()
{}

std::string ListTablePartitionsRequest::getDatabaseName()const
{
	return databaseName_;
}

void ListTablePartitionsRequest::setDatabaseName(const std::string& databaseName)
{
	databaseName_ = databaseName;
	setParameter("DatabaseName", databaseName);
}

int ListTablePartitionsRequest::getPageSize()const
{
	return pageSize_;
}

void ListTablePartitionsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListTablePartitionsRequest::getClusterId()const
{
	return clusterId_;
}

void ListTablePartitionsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListTablePartitionsRequest::getSort()const
{
	return sort_;
}

void ListTablePartitionsRequest::setSort(const std::string& sort)
{
	sort_ = sort;
	setParameter("Sort", sort);
}

std::string ListTablePartitionsRequest::getTableName()const
{
	return tableName_;
}

void ListTablePartitionsRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

int ListTablePartitionsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListTablePartitionsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string ListTablePartitionsRequest::getOrder()const
{
	return order_;
}

void ListTablePartitionsRequest::setOrder(const std::string& order)
{
	order_ = order;
	setParameter("Order", order);
}

