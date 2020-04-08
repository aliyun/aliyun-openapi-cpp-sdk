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

#include <alibabacloud/cassandra/model/DescribeBackupPlanResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeBackupPlanResult::DescribeBackupPlanResult() :
	ServiceResult()
{}

DescribeBackupPlanResult::DescribeBackupPlanResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPlanResult::~DescribeBackupPlanResult()
{}

void DescribeBackupPlanResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto backupPlanNode = value["BackupPlan"];
	if(!backupPlanNode["ClusterId"].isNull())
		backupPlan_.clusterId = backupPlanNode["ClusterId"].asString();
	if(!backupPlanNode["DataCenterId"].isNull())
		backupPlan_.dataCenterId = backupPlanNode["DataCenterId"].asString();
	if(!backupPlanNode["CreatedTime"].isNull())
		backupPlan_.createdTime = backupPlanNode["CreatedTime"].asString();
	if(!backupPlanNode["BackupTime"].isNull())
		backupPlan_.backupTime = backupPlanNode["BackupTime"].asString();
	if(!backupPlanNode["BackupPeriod"].isNull())
		backupPlan_.backupPeriod = backupPlanNode["BackupPeriod"].asString();
	if(!backupPlanNode["RetentionPeriod"].isNull())
		backupPlan_.retentionPeriod = std::stoi(backupPlanNode["RetentionPeriod"].asString());
	if(!backupPlanNode["Active"].isNull())
		backupPlan_.active = backupPlanNode["Active"].asString() == "true";

}

DescribeBackupPlanResult::BackupPlan DescribeBackupPlanResult::getBackupPlan()const
{
	return backupPlan_;
}

