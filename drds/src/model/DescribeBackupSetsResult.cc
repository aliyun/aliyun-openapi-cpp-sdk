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

#include <alibabacloud/drds/model/DescribeBackupSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeBackupSetsResult::DescribeBackupSetsResult() :
	ServiceResult()
{}

DescribeBackupSetsResult::DescribeBackupSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupSetsResult::~DescribeBackupSetsResult()
{}

void DescribeBackupSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBackupSetsNode = value["BackupSets"]["backupSet"];
	for (auto valueBackupSetsbackupSet : allBackupSetsNode)
	{
		BackupSet backupSetsObject;
		if(!valueBackupSetsbackupSet["EnableRecovery"].isNull())
			backupSetsObject.enableRecovery = valueBackupSetsbackupSet["EnableRecovery"].asString() == "true";
		if(!valueBackupSetsbackupSet["Status"].isNull())
			backupSetsObject.status = std::stol(valueBackupSetsbackupSet["Status"].asString());
		if(!valueBackupSetsbackupSet["BackupConsitentTime"].isNull())
			backupSetsObject.backupConsitentTime = valueBackupSetsbackupSet["BackupConsitentTime"].asString();
		if(!valueBackupSetsbackupSet["BackupType"].isNull())
			backupSetsObject.backupType = valueBackupSetsbackupSet["BackupType"].asString();
		if(!valueBackupSetsbackupSet["BackupStartTime"].isNull())
			backupSetsObject.backupStartTime = std::stol(valueBackupSetsbackupSet["BackupStartTime"].asString());
		if(!valueBackupSetsbackupSet["BackupLevel"].isNull())
			backupSetsObject.backupLevel = valueBackupSetsbackupSet["BackupLevel"].asString();
		if(!valueBackupSetsbackupSet["BackupMode"].isNull())
			backupSetsObject.backupMode = valueBackupSetsbackupSet["BackupMode"].asString();
		if(!valueBackupSetsbackupSet["BackupEndTime"].isNull())
			backupSetsObject.backupEndTime = std::stol(valueBackupSetsbackupSet["BackupEndTime"].asString());
		if(!valueBackupSetsbackupSet["Id"].isNull())
			backupSetsObject.id = valueBackupSetsbackupSet["Id"].asString();
		if(!valueBackupSetsbackupSet["BackupTotalSize"].isNull())
			backupSetsObject.backupTotalSize = valueBackupSetsbackupSet["BackupTotalSize"].asString();
		auto allBackupDbs = value["BackupDbs"]["backupDb"];
		for (auto value : allBackupDbs)
			backupSetsObject.backupDbs.push_back(value.asString());
		backupSets_.push_back(backupSetsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeBackupSetsResult::BackupSet> DescribeBackupSetsResult::getBackupSets()const
{
	return backupSets_;
}

bool DescribeBackupSetsResult::getSuccess()const
{
	return success_;
}

