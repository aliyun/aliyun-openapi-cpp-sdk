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

#include <alibabacloud/rds/model/DescribeCloudMigrationPrecheckResultResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeCloudMigrationPrecheckResultResult::DescribeCloudMigrationPrecheckResultResult() :
	ServiceResult()
{}

DescribeCloudMigrationPrecheckResultResult::DescribeCloudMigrationPrecheckResultResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCloudMigrationPrecheckResultResult::~DescribeCloudMigrationPrecheckResultResult()
{}

void DescribeCloudMigrationPrecheckResultResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["migrateCloudTaskList"];
	for (auto valueItemsmigrateCloudTaskList : allItemsNode)
	{
		MigrateCloudTaskList itemsObject;
		if(!valueItemsmigrateCloudTaskList["Detail"].isNull())
			itemsObject.detail = valueItemsmigrateCloudTaskList["Detail"].asString();
		if(!valueItemsmigrateCloudTaskList["GmtCreated"].isNull())
			itemsObject.gmtCreated = valueItemsmigrateCloudTaskList["GmtCreated"].asString();
		if(!valueItemsmigrateCloudTaskList["GmtModified"].isNull())
			itemsObject.gmtModified = valueItemsmigrateCloudTaskList["GmtModified"].asString();
		if(!valueItemsmigrateCloudTaskList["SourceAccount"].isNull())
			itemsObject.sourceAccount = valueItemsmigrateCloudTaskList["SourceAccount"].asString();
		if(!valueItemsmigrateCloudTaskList["SourceCategory"].isNull())
			itemsObject.sourceCategory = valueItemsmigrateCloudTaskList["SourceCategory"].asString();
		if(!valueItemsmigrateCloudTaskList["SourceIpAddress"].isNull())
			itemsObject.sourceIpAddress = valueItemsmigrateCloudTaskList["SourceIpAddress"].asString();
		if(!valueItemsmigrateCloudTaskList["SourcePassword"].isNull())
			itemsObject.sourcePassword = valueItemsmigrateCloudTaskList["SourcePassword"].asString();
		if(!valueItemsmigrateCloudTaskList["SourcePort"].isNull())
			itemsObject.sourcePort = std::stol(valueItemsmigrateCloudTaskList["SourcePort"].asString());
		if(!valueItemsmigrateCloudTaskList["Status"].isNull())
			itemsObject.status = valueItemsmigrateCloudTaskList["Status"].asString();
		if(!valueItemsmigrateCloudTaskList["TargetEip"].isNull())
			itemsObject.targetEip = valueItemsmigrateCloudTaskList["TargetEip"].asString();
		if(!valueItemsmigrateCloudTaskList["TargetInstanceName"].isNull())
			itemsObject.targetInstanceName = valueItemsmigrateCloudTaskList["TargetInstanceName"].asString();
		if(!valueItemsmigrateCloudTaskList["TaskId"].isNull())
			itemsObject.taskId = std::stol(valueItemsmigrateCloudTaskList["TaskId"].asString());
		if(!valueItemsmigrateCloudTaskList["TaskName"].isNull())
			itemsObject.taskName = valueItemsmigrateCloudTaskList["TaskName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stoi(value["TotalSize"].asString());

}

long DescribeCloudMigrationPrecheckResultResult::getPageSize()const
{
	return pageSize_;
}

long DescribeCloudMigrationPrecheckResultResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeCloudMigrationPrecheckResultResult::MigrateCloudTaskList> DescribeCloudMigrationPrecheckResultResult::getItems()const
{
	return items_;
}

int DescribeCloudMigrationPrecheckResultResult::getTotalSize()const
{
	return totalSize_;
}

