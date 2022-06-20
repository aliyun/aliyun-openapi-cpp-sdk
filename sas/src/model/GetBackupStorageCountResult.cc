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

#include <alibabacloud/sas/model/GetBackupStorageCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetBackupStorageCountResult::GetBackupStorageCountResult() :
	ServiceResult()
{}

GetBackupStorageCountResult::GetBackupStorageCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetBackupStorageCountResult::~GetBackupStorageCountResult()
{}

void GetBackupStorageCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto backupStorageCountNode = value["BackupStorageCount"];
	if(!backupStorageCountNode["Overflow"].isNull())
		backupStorageCount_.overflow = std::stoi(backupStorageCountNode["Overflow"].asString());
	if(!backupStorageCountNode["UniUsageStorageByte"].isNull())
		backupStorageCount_.uniUsageStorageByte = std::stol(backupStorageCountNode["UniUsageStorageByte"].asString());
	if(!backupStorageCountNode["BuyStorageByte"].isNull())
		backupStorageCount_.buyStorageByte = std::stol(backupStorageCountNode["BuyStorageByte"].asString());
	if(!backupStorageCountNode["UsageStorageByte"].isNull())
		backupStorageCount_.usageStorageByte = std::stol(backupStorageCountNode["UsageStorageByte"].asString());
	if(!backupStorageCountNode["EcsUsageStorageByte"].isNull())
		backupStorageCount_.ecsUsageStorageByte = std::stol(backupStorageCountNode["EcsUsageStorageByte"].asString());

}

GetBackupStorageCountResult::BackupStorageCount GetBackupStorageCountResult::getBackupStorageCount()const
{
	return backupStorageCount_;
}

