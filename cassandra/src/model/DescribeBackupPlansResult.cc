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

#include <alibabacloud/cassandra/model/DescribeBackupPlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeBackupPlansResult::DescribeBackupPlansResult() :
	ServiceResult()
{}

DescribeBackupPlansResult::DescribeBackupPlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPlansResult::~DescribeBackupPlansResult()
{}

void DescribeBackupPlansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackupPlansNode = value["BackupPlans"]["BackupPlan"];
	for (auto valueBackupPlansBackupPlan : allBackupPlansNode)
	{
		BackupPlan backupPlansObject;
		if(!valueBackupPlansBackupPlan["ClusterId"].isNull())
			backupPlansObject.clusterId = valueBackupPlansBackupPlan["ClusterId"].asString();
		if(!valueBackupPlansBackupPlan["DataCenterId"].isNull())
			backupPlansObject.dataCenterId = valueBackupPlansBackupPlan["DataCenterId"].asString();
		if(!valueBackupPlansBackupPlan["CreatedTime"].isNull())
			backupPlansObject.createdTime = valueBackupPlansBackupPlan["CreatedTime"].asString();
		if(!valueBackupPlansBackupPlan["BackupTime"].isNull())
			backupPlansObject.backupTime = valueBackupPlansBackupPlan["BackupTime"].asString();
		if(!valueBackupPlansBackupPlan["BackupPeriod"].isNull())
			backupPlansObject.backupPeriod = valueBackupPlansBackupPlan["BackupPeriod"].asString();
		if(!valueBackupPlansBackupPlan["RetentionPeriod"].isNull())
			backupPlansObject.retentionPeriod = std::stoi(valueBackupPlansBackupPlan["RetentionPeriod"].asString());
		if(!valueBackupPlansBackupPlan["Active"].isNull())
			backupPlansObject.active = valueBackupPlansBackupPlan["Active"].asString() == "true";
		backupPlans_.push_back(backupPlansObject);
	}

}

std::vector<DescribeBackupPlansResult::BackupPlan> DescribeBackupPlansResult::getBackupPlans()const
{
	return backupPlans_;
}

