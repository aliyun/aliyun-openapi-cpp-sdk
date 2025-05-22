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

#include <alibabacloud/rds/model/DescribeCloudMigrationResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCloudMigrationResultResult::DescribeCloudMigrationResultResult() :
	ServiceResult()
{}

DescribeCloudMigrationResultResult::DescribeCloudMigrationResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudMigrationResultResult::~DescribeCloudMigrationResultResult()
{}

void DescribeCloudMigrationResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Tasks"];
	for (auto valueItemsTasks : allItemsNode)
	{
		Tasks itemsObject;
		if(!valueItemsTasks["Detail"].isNull())
			itemsObject.detail = valueItemsTasks["Detail"].asString();
		if(!valueItemsTasks["GmtCreated"].isNull())
			itemsObject.gmtCreated = valueItemsTasks["GmtCreated"].asString();
		if(!valueItemsTasks["GmtModified"].isNull())
			itemsObject.gmtModified = valueItemsTasks["GmtModified"].asString();
		if(!valueItemsTasks["MigrateStage"].isNull())
			itemsObject.migrateStage = valueItemsTasks["MigrateStage"].asString();
		if(!valueItemsTasks["ReplicationInfo"].isNull())
			itemsObject.replicationInfo = valueItemsTasks["ReplicationInfo"].asString();
		if(!valueItemsTasks["ReplicationState"].isNull())
			itemsObject.replicationState = valueItemsTasks["ReplicationState"].asString();
		if(!valueItemsTasks["SourceAccount"].isNull())
			itemsObject.sourceAccount = valueItemsTasks["SourceAccount"].asString();
		if(!valueItemsTasks["SourceCategory"].isNull())
			itemsObject.sourceCategory = valueItemsTasks["SourceCategory"].asString();
		if(!valueItemsTasks["SourceIpAddress"].isNull())
			itemsObject.sourceIpAddress = valueItemsTasks["SourceIpAddress"].asString();
		if(!valueItemsTasks["SourcePassword"].isNull())
			itemsObject.sourcePassword = valueItemsTasks["SourcePassword"].asString();
		if(!valueItemsTasks["SourcePort"].isNull())
			itemsObject.sourcePort = std::stol(valueItemsTasks["SourcePort"].asString());
		if(!valueItemsTasks["Status"].isNull())
			itemsObject.status = valueItemsTasks["Status"].asString();
		if(!valueItemsTasks["SwitchTime"].isNull())
			itemsObject.switchTime = valueItemsTasks["SwitchTime"].asString();
		if(!valueItemsTasks["TargetEip"].isNull())
			itemsObject.targetEip = valueItemsTasks["TargetEip"].asString();
		if(!valueItemsTasks["TargetInstanceName"].isNull())
			itemsObject.targetInstanceName = valueItemsTasks["TargetInstanceName"].asString();
		if(!valueItemsTasks["TaskId"].isNull())
			itemsObject.taskId = std::stol(valueItemsTasks["TaskId"].asString());
		if(!valueItemsTasks["TaskName"].isNull())
			itemsObject.taskName = valueItemsTasks["TaskName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stoi(value["TotalSize"].asString());

}

long DescribeCloudMigrationResultResult::getPageSize()const
{
	return pageSize_;
}

long DescribeCloudMigrationResultResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCloudMigrationResultResult::Tasks> DescribeCloudMigrationResultResult::getItems()const
{
	return items_;
}

int DescribeCloudMigrationResultResult::getTotalSize()const
{
	return totalSize_;
}

