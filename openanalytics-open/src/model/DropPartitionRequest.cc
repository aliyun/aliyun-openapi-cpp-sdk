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

#include <alibabacloud/openanalytics-open/model/DropPartitionRequest.h>

using AlibabaCloud::Openanalytics_open::Model::DropPartitionRequest;

DropPartitionRequest::DropPartitionRequest() :
	RpcServiceRequest("openanalytics-open", "2020-09-28", "DropPartition")
{
	setMethod(HttpRequest::Method::Post);
}

DropPartitionRequest::~DropPartitionRequest()
{}

std::string DropPartitionRequest::getDbName()const
{
	return dbName_;
}

void DropPartitionRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

Array DropPartitionRequest::getPartValues()const
{
	return partValues_;
}

void DropPartitionRequest::setPartValues(const Array& partValues)
{
	partValues_ = partValues;
	setParameter("PartValues", std::to_string(partValues));
}

std::string DropPartitionRequest::getTableName()const
{
	return tableName_;
}

void DropPartitionRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

