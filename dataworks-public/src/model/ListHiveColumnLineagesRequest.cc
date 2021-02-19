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

#include <alibabacloud/dataworks-public/model/ListHiveColumnLineagesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListHiveColumnLineagesRequest;

ListHiveColumnLineagesRequest::ListHiveColumnLineagesRequest() :
	RpcServiceRequest("dataworks-public", "2018-06-01", "ListHiveColumnLineages")
{
	setMethod(HttpRequest::Method::Post);
}

ListHiveColumnLineagesRequest::~ListHiveColumnLineagesRequest()
{}

std::string ListHiveColumnLineagesRequest::getDatabaseName()const
{
	return databaseName_;
}

void ListHiveColumnLineagesRequest::setDatabaseName(const std::string& databaseName)
{
	databaseName_ = databaseName;
	setParameter("DatabaseName", databaseName);
}

std::string ListHiveColumnLineagesRequest::getClusterId()const
{
	return clusterId_;
}

void ListHiveColumnLineagesRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

std::string ListHiveColumnLineagesRequest::getTableName()const
{
	return tableName_;
}

void ListHiveColumnLineagesRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

std::string ListHiveColumnLineagesRequest::getColumnName()const
{
	return columnName_;
}

void ListHiveColumnLineagesRequest::setColumnName(const std::string& columnName)
{
	columnName_ = columnName;
	setParameter("ColumnName", columnName);
}

