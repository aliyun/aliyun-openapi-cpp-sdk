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

#include <alibabacloud/dataworks-public/model/ListEmrHiveTablesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListEmrHiveTablesRequest;

ListEmrHiveTablesRequest::ListEmrHiveTablesRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "ListEmrHiveTables")
{
	setMethod(HttpRequest::Method::Post);
}

ListEmrHiveTablesRequest::~ListEmrHiveTablesRequest()
{}

std::string ListEmrHiveTablesRequest::getDatabaseName()const
{
	return databaseName_;
}

void ListEmrHiveTablesRequest::setDatabaseName(const std::string& databaseName)
{
	databaseName_ = databaseName;
	setParameter("DatabaseName", databaseName);
}

int ListEmrHiveTablesRequest::getPageSize()const
{
	return pageSize_;
}

void ListEmrHiveTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string ListEmrHiveTablesRequest::getClusterId()const
{
	return clusterId_;
}

void ListEmrHiveTablesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListEmrHiveTablesRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListEmrHiveTablesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

