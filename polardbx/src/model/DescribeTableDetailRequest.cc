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

#include <alibabacloud/polardbx/model/DescribeTableDetailRequest.h>

using AlibabaCloud::Polardbx::Model::DescribeTableDetailRequest;

DescribeTableDetailRequest::DescribeTableDetailRequest() :
	RpcServiceRequest("polardbx", "2020-02-02", "DescribeTableDetail")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTableDetailRequest::~DescribeTableDetailRequest()
{}

std::string DescribeTableDetailRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DescribeTableDetailRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

std::string DescribeTableDetailRequest::getDbName()const
{
	return dbName_;
}

void DescribeTableDetailRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string DescribeTableDetailRequest::getRegionId()const
{
	return regionId_;
}

void DescribeTableDetailRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeTableDetailRequest::getTableName()const
{
	return tableName_;
}

void DescribeTableDetailRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setParameter("TableName", tableName);
}

