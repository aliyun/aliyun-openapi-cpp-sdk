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

#include <alibabacloud/rds/model/DescribeReplicationLinkLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeReplicationLinkLogsResult::DescribeReplicationLinkLogsResult() :
	ServiceResult()
{}

DescribeReplicationLinkLogsResult::DescribeReplicationLinkLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReplicationLinkLogsResult::~DescribeReplicationLinkLogsResult()
{}

void DescribeReplicationLinkLogsResult::parse(const std::string &payload)
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
		if(!valueItemsTasks["ReplicationInfo"].isNull())
			itemsObject.replicationInfo = valueItemsTasks["ReplicationInfo"].asString();
		if(!valueItemsTasks["ReplicationState"].isNull())
			itemsObject.replicationState = valueItemsTasks["ReplicationState"].asString();
		if(!valueItemsTasks["ReplicatorAccount"].isNull())
			itemsObject.replicatorAccount = valueItemsTasks["ReplicatorAccount"].asString();
		if(!valueItemsTasks["ReplicatorPassword"].isNull())
			itemsObject.replicatorPassword = valueItemsTasks["ReplicatorPassword"].asString();
		if(!valueItemsTasks["SourceAddress"].isNull())
			itemsObject.sourceAddress = valueItemsTasks["SourceAddress"].asString();
		if(!valueItemsTasks["SourceCategory"].isNull())
			itemsObject.sourceCategory = valueItemsTasks["SourceCategory"].asString();
		if(!valueItemsTasks["SourcePort"].isNull())
			itemsObject.sourcePort = std::stol(valueItemsTasks["SourcePort"].asString());
		if(!valueItemsTasks["TargetInstanceId"].isNull())
			itemsObject.targetInstanceId = valueItemsTasks["TargetInstanceId"].asString();
		if(!valueItemsTasks["TaskId"].isNull())
			itemsObject.taskId = std::stol(valueItemsTasks["TaskId"].asString());
		if(!valueItemsTasks["TaskName"].isNull())
			itemsObject.taskName = valueItemsTasks["TaskName"].asString();
		if(!valueItemsTasks["TaskStage"].isNull())
			itemsObject.taskStage = valueItemsTasks["TaskStage"].asString();
		if(!valueItemsTasks["TaskStatus"].isNull())
			itemsObject.taskStatus = valueItemsTasks["TaskStatus"].asString();
		if(!valueItemsTasks["TaskType"].isNull())
			itemsObject.taskType = valueItemsTasks["TaskType"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["TotalSize"].isNull())
		totalSize_ = std::stoi(value["TotalSize"].asString());

}

std::string DescribeReplicationLinkLogsResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::vector<DescribeReplicationLinkLogsResult::Tasks> DescribeReplicationLinkLogsResult::getItems()const
{
	return items_;
}

int DescribeReplicationLinkLogsResult::getTotalSize()const
{
	return totalSize_;
}

