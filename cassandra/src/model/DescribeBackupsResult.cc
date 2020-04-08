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

#include <alibabacloud/cassandra/model/DescribeBackupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cassandra;
using namespace AlibabaCloud::Cassandra::Model;

DescribeBackupsResult::DescribeBackupsResult() :
	ServiceResult()
{}

DescribeBackupsResult::DescribeBackupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupsResult::~DescribeBackupsResult()
{}

void DescribeBackupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackupsNode = value["Backups"]["Backup"];
	for (auto valueBackupsBackup : allBackupsNode)
	{
		Backup backupsObject;
		if(!valueBackupsBackup["ClusterId"].isNull())
			backupsObject.clusterId = valueBackupsBackup["ClusterId"].asString();
		if(!valueBackupsBackup["DataCenterId"].isNull())
			backupsObject.dataCenterId = valueBackupsBackup["DataCenterId"].asString();
		if(!valueBackupsBackup["BackupId"].isNull())
			backupsObject.backupId = valueBackupsBackup["BackupId"].asString();
		if(!valueBackupsBackup["BackupType"].isNull())
			backupsObject.backupType = valueBackupsBackup["BackupType"].asString();
		if(!valueBackupsBackup["Status"].isNull())
			backupsObject.status = valueBackupsBackup["Status"].asString();
		if(!valueBackupsBackup["StartTime"].isNull())
			backupsObject.startTime = valueBackupsBackup["StartTime"].asString();
		if(!valueBackupsBackup["EndTime"].isNull())
			backupsObject.endTime = valueBackupsBackup["EndTime"].asString();
		if(!valueBackupsBackup["Size"].isNull())
			backupsObject.size = std::stol(valueBackupsBackup["Size"].asString());
		backups_.push_back(backupsObject);
	}

}

std::vector<DescribeBackupsResult::Backup> DescribeBackupsResult::getBackups()const
{
	return backups_;
}

