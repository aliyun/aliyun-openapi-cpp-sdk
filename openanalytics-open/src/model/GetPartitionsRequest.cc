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

#include <alibabacloud/openanalytics-open/model/GetPartitionsRequest.h>

using AlibabaCloud::Openanalytics_open::Model::GetPartitionsRequest;

GetPartitionsRequest::GetPartitionsRequest() :
	RpcServiceRequest("openanalytics-open", "2020-09-28", "GetPartitions")
{
	setMethod(HttpRequest::Method::Post);
}

GetPartitionsRequest::~GetPartitionsRequest()
{}

std::string GetPartitionsRequest::getDbName()const
{
	return dbName_;
}

void GetPartitionsRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

int GetPartitionsRequest::getMaxParts()const
{
	return maxParts_;
}

void GetPartitionsRequest::setMaxParts(int maxParts)
{
	maxParts_ = maxParts;
	setParameter("MaxParts", std::to_string(maxParts));
}

std::string GetPartitionsRequest::getTableName()const
{
	return tableName_;
}

void GetPartitionsRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

