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

#include <alibabacloud/sas/model/DescribeBackupRestoreCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeBackupRestoreCountResult::DescribeBackupRestoreCountResult() :
	ServiceResult()
{}

DescribeBackupRestoreCountResult::DescribeBackupRestoreCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupRestoreCountResult::~DescribeBackupRestoreCountResult()
{}

void DescribeBackupRestoreCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto backupRestoreCountNode = value["BackupRestoreCount"];
	if(!backupRestoreCountNode["Total"].isNull())
		backupRestoreCount_.total = std::stoi(backupRestoreCountNode["Total"].asString());
	if(!backupRestoreCountNode["Recovering"].isNull())
		backupRestoreCount_.recovering = std::stoi(backupRestoreCountNode["Recovering"].asString());

}

DescribeBackupRestoreCountResult::BackupRestoreCount DescribeBackupRestoreCountResult::getBackupRestoreCount()const
{
	return backupRestoreCount_;
}

