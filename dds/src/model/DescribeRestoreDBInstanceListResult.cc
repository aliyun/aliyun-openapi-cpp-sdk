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

#include <alibabacloud/dds/model/DescribeRestoreDBInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeRestoreDBInstanceListResult::DescribeRestoreDBInstanceListResult() :
	ServiceResult()
{}

DescribeRestoreDBInstanceListResult::DescribeRestoreDBInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRestoreDBInstanceListResult::~DescribeRestoreDBInstanceListResult()
{}

void DescribeRestoreDBInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBInstancesNode = value["DBInstances"]["DBInstance"];
	for (auto valueDBInstancesDBInstance : allDBInstancesNode)
	{
		DBInstance dBInstancesObject;
		if(!valueDBInstancesDBInstance["CreationTime"].isNull())
			dBInstancesObject.creationTime = valueDBInstancesDBInstance["CreationTime"].asString();
		if(!valueDBInstancesDBInstance["LockMode"].isNull())
			dBInstancesObject.lockMode = valueDBInstancesDBInstance["LockMode"].asString();
		if(!valueDBInstancesDBInstance["EngineVersion"].isNull())
			dBInstancesObject.engineVersion = valueDBInstancesDBInstance["EngineVersion"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceDescription"].isNull())
			dBInstancesObject.dBInstanceDescription = valueDBInstancesDBInstance["DBInstanceDescription"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceType"].isNull())
			dBInstancesObject.dBInstanceType = valueDBInstancesDBInstance["DBInstanceType"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStatus"].isNull())
			dBInstancesObject.dBInstanceStatus = valueDBInstancesDBInstance["DBInstanceStatus"].asString();
		if(!valueDBInstancesDBInstance["RegionId"].isNull())
			dBInstancesObject.regionId = valueDBInstancesDBInstance["RegionId"].asString();
		if(!valueDBInstancesDBInstance["ZoneId"].isNull())
			dBInstancesObject.zoneId = valueDBInstancesDBInstance["ZoneId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceId"].isNull())
			dBInstancesObject.dBInstanceId = valueDBInstancesDBInstance["DBInstanceId"].asString();
		if(!valueDBInstancesDBInstance["SecondaryZoneId"].isNull())
			dBInstancesObject.secondaryZoneId = valueDBInstancesDBInstance["SecondaryZoneId"].asString();
		if(!valueDBInstancesDBInstance["HiddenZoneId"].isNull())
			dBInstancesObject.hiddenZoneId = valueDBInstancesDBInstance["HiddenZoneId"].asString();
		if(!valueDBInstancesDBInstance["IsDeleted"].isNull())
			dBInstancesObject.isDeleted = std::stoi(valueDBInstancesDBInstance["IsDeleted"].asString());
		dBInstances_.push_back(dBInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeRestoreDBInstanceListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRestoreDBInstanceListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeRestoreDBInstanceListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRestoreDBInstanceListResult::DBInstance> DescribeRestoreDBInstanceListResult::getDBInstances()const
{
	return dBInstances_;
}

