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

#include <alibabacloud/sas/model/DescribeUniBackupDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeUniBackupDatabaseResult::DescribeUniBackupDatabaseResult() :
	ServiceResult()
{}

DescribeUniBackupDatabaseResult::DescribeUniBackupDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUniBackupDatabaseResult::~DescribeUniBackupDatabaseResult()
{}

void DescribeUniBackupDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatabaseListNode = value["DatabaseList"]["Database"];
	for (auto valueDatabaseListDatabase : allDatabaseListNode)
	{
		Database databaseListObject;
		if(!valueDatabaseListDatabase["Status"].isNull())
			databaseListObject.status = valueDatabaseListDatabase["Status"].asString();
		if(!valueDatabaseListDatabase["DatabaseType"].isNull())
			databaseListObject.databaseType = valueDatabaseListDatabase["DatabaseType"].asString();
		if(!valueDatabaseListDatabase["DatabaseVersion"].isNull())
			databaseListObject.databaseVersion = valueDatabaseListDatabase["DatabaseVersion"].asString();
		if(!valueDatabaseListDatabase["DatabaseName"].isNull())
			databaseListObject.databaseName = valueDatabaseListDatabase["DatabaseName"].asString();
		if(!valueDatabaseListDatabase["InstanceName"].isNull())
			databaseListObject.instanceName = valueDatabaseListDatabase["InstanceName"].asString();
		if(!valueDatabaseListDatabase["InstanceUuid"].isNull())
			databaseListObject.instanceUuid = valueDatabaseListDatabase["InstanceUuid"].asString();
		if(!valueDatabaseListDatabase["CreatedByProduct"].isNull())
			databaseListObject.createdByProduct = valueDatabaseListDatabase["CreatedByProduct"].asString();
		if(!valueDatabaseListDatabase["InstanceId"].isNull())
			databaseListObject.instanceId = valueDatabaseListDatabase["InstanceId"].asString();
		if(!valueDatabaseListDatabase["PolicyId"].isNull())
			databaseListObject.policyId = std::stol(valueDatabaseListDatabase["PolicyId"].asString());
		if(!valueDatabaseListDatabase["AgentStatus"].isNull())
			databaseListObject.agentStatus = valueDatabaseListDatabase["AgentStatus"].asString();
		databaseList_.push_back(databaseListObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeUniBackupDatabaseResult::PageInfo DescribeUniBackupDatabaseResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeUniBackupDatabaseResult::Database> DescribeUniBackupDatabaseResult::getDatabaseList()const
{
	return databaseList_;
}

