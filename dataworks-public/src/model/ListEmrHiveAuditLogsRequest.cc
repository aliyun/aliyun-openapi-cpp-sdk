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

#include <alibabacloud/dataworks-public/model/ListEmrHiveAuditLogsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListEmrHiveAuditLogsRequest;

ListEmrHiveAuditLogsRequest::ListEmrHiveAuditLogsRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "ListEmrHiveAuditLogs")
{
	setMethod(HttpRequest::Method::Post);
}

ListEmrHiveAuditLogsRequest::~ListEmrHiveAuditLogsRequest()
{}

std::string ListEmrHiveAuditLogsRequest::getDatabaseName()const
{
	return databaseName_;
}

void ListEmrHiveAuditLogsRequest::setDatabaseName(const std::string& databaseName)
{
	databaseName_ = databaseName;
	setParameter("DatabaseName", databaseName);
}

int ListEmrHiveAuditLogsRequest::getPageSize()const
{
	return pageSize_;
}

void ListEmrHiveAuditLogsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

int ListEmrHiveAuditLogsRequest::getEndTime()const
{
	return endTime_;
}

void ListEmrHiveAuditLogsRequest::setEndTime(int endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", std::to_string(endTime));
}

std::string ListEmrHiveAuditLogsRequest::getClusterId()const
{
	return clusterId_;
}

void ListEmrHiveAuditLogsRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ListEmrHiveAuditLogsRequest::getStartTime()const
{
	return startTime_;
}

void ListEmrHiveAuditLogsRequest::setStartTime(int startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", std::to_string(startTime));
}

std::string ListEmrHiveAuditLogsRequest::getTableName()const
{
	return tableName_;
}

void ListEmrHiveAuditLogsRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

int ListEmrHiveAuditLogsRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListEmrHiveAuditLogsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

