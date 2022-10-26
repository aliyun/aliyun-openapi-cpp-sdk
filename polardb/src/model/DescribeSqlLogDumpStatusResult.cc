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

#include <alibabacloud/polardb/model/DescribeSqlLogDumpStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeSqlLogDumpStatusResult::DescribeSqlLogDumpStatusResult() :
	ServiceResult()
{}

DescribeSqlLogDumpStatusResult::DescribeSqlLogDumpStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSqlLogDumpStatusResult::~DescribeSqlLogDumpStatusResult()
{}

void DescribeSqlLogDumpStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SqlLogDumpStatus"];
	for (auto valueItemsSqlLogDumpStatus : allItemsNode)
	{
		SqlLogDumpStatus itemsObject;
		if(!valueItemsSqlLogDumpStatus["Status"].isNull())
			itemsObject.status = std::stoi(valueItemsSqlLogDumpStatus["Status"].asString());
		if(!valueItemsSqlLogDumpStatus["UpdateTime"].isNull())
			itemsObject.updateTime = valueItemsSqlLogDumpStatus["UpdateTime"].asString();
		if(!valueItemsSqlLogDumpStatus["JobStatus"].isNull())
			itemsObject.jobStatus = valueItemsSqlLogDumpStatus["JobStatus"].asString();
		if(!valueItemsSqlLogDumpStatus["JobName"].isNull())
			itemsObject.jobName = valueItemsSqlLogDumpStatus["JobName"].asString();
		if(!valueItemsSqlLogDumpStatus["ErrorCode"].isNull())
			itemsObject.errorCode = valueItemsSqlLogDumpStatus["ErrorCode"].asString();
		if(!valueItemsSqlLogDumpStatus["CreateTime"].isNull())
			itemsObject.createTime = valueItemsSqlLogDumpStatus["CreateTime"].asString();
		if(!valueItemsSqlLogDumpStatus["TotalRows"].isNull())
			itemsObject.totalRows = std::stol(valueItemsSqlLogDumpStatus["TotalRows"].asString());
		if(!valueItemsSqlLogDumpStatus["ProcessRows"].isNull())
			itemsObject.processRows = std::stol(valueItemsSqlLogDumpStatus["ProcessRows"].asString());
		if(!valueItemsSqlLogDumpStatus["DumpStartTime"].isNull())
			itemsObject.dumpStartTime = valueItemsSqlLogDumpStatus["DumpStartTime"].asString();
		if(!valueItemsSqlLogDumpStatus["FailMsg"].isNull())
			itemsObject.failMsg = valueItemsSqlLogDumpStatus["FailMsg"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Endpoint"].isNull())
		endpoint_ = value["Endpoint"].asString();
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["IsEnableSqlLogDump"].isNull())
		isEnableSqlLogDump_ = value["IsEnableSqlLogDump"].asString();
	if(!value["Bucket"].isNull())
		bucket_ = value["Bucket"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::string DescribeSqlLogDumpStatusResult::getEndpoint()const
{
	return endpoint_;
}

int DescribeSqlLogDumpStatusResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string DescribeSqlLogDumpStatusResult::getIsEnableSqlLogDump()const
{
	return isEnableSqlLogDump_;
}

std::string DescribeSqlLogDumpStatusResult::getBucket()const
{
	return bucket_;
}

std::vector<DescribeSqlLogDumpStatusResult::SqlLogDumpStatus> DescribeSqlLogDumpStatusResult::getItems()const
{
	return items_;
}

std::string DescribeSqlLogDumpStatusResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

