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

#include <alibabacloud/retailcloud/model/GetRdsBackUpResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Retailcloud;
using namespace AlibabaCloud::Retailcloud::Model;

GetRdsBackUpResult::GetRdsBackUpResult() :
	ServiceResult()
{}

GetRdsBackUpResult::GetRdsBackUpResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRdsBackUpResult::~GetRdsBackUpResult()
{}

void GetRdsBackUpResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["TotalRecordCount"].isNull())
		result_.totalRecordCount = resultNode["TotalRecordCount"].asString();
	if(!resultNode["PageNumber"].isNull())
		result_.pageNumber = resultNode["PageNumber"].asString();
	if(!resultNode["PageRecordCount"].isNull())
		result_.pageRecordCount = resultNode["PageRecordCount"].asString();
	if(!resultNode["TotalBackupSize"].isNull())
		result_.totalBackupSize = std::stol(resultNode["TotalBackupSize"].asString());
	auto allItemsNode = resultNode["Items"]["Backup"];
	for (auto resultNodeItemsBackup : allItemsNode)
	{
		Result::Backup backupObject;
		if(!resultNodeItemsBackup["BackupId"].isNull())
			backupObject.backupId = resultNodeItemsBackup["BackupId"].asString();
		if(!resultNodeItemsBackup["DBInstanceId"].isNull())
			backupObject.dBInstanceId = resultNodeItemsBackup["DBInstanceId"].asString();
		if(!resultNodeItemsBackup["BackupStatus"].isNull())
			backupObject.backupStatus = resultNodeItemsBackup["BackupStatus"].asString();
		if(!resultNodeItemsBackup["BackupStartTime"].isNull())
			backupObject.backupStartTime = resultNodeItemsBackup["BackupStartTime"].asString();
		if(!resultNodeItemsBackup["BackupEndTime"].isNull())
			backupObject.backupEndTime = resultNodeItemsBackup["BackupEndTime"].asString();
		if(!resultNodeItemsBackup["BackupType"].isNull())
			backupObject.backupType = resultNodeItemsBackup["BackupType"].asString();
		if(!resultNodeItemsBackup["BackupMode"].isNull())
			backupObject.backupMode = resultNodeItemsBackup["BackupMode"].asString();
		if(!resultNodeItemsBackup["BackupMethod"].isNull())
			backupObject.backupMethod = resultNodeItemsBackup["BackupMethod"].asString();
		if(!resultNodeItemsBackup["BackupLocation"].isNull())
			backupObject.backupLocation = resultNodeItemsBackup["BackupLocation"].asString();
		if(!resultNodeItemsBackup["BackupExtractionStatus"].isNull())
			backupObject.backupExtractionStatus = resultNodeItemsBackup["BackupExtractionStatus"].asString();
		if(!resultNodeItemsBackup["BackupScale"].isNull())
			backupObject.backupScale = resultNodeItemsBackup["BackupScale"].asString();
		if(!resultNodeItemsBackup["BackupDBNames"].isNull())
			backupObject.backupDBNames = resultNodeItemsBackup["BackupDBNames"].asString();
		if(!resultNodeItemsBackup["TotalBackupSize"].isNull())
			backupObject.totalBackupSize = std::stol(resultNodeItemsBackup["TotalBackupSize"].asString());
		if(!resultNodeItemsBackup["BackupSize"].isNull())
			backupObject.backupSize = std::stol(resultNodeItemsBackup["BackupSize"].asString());
		if(!resultNodeItemsBackup["HostInstanceID"].isNull())
			backupObject.hostInstanceID = resultNodeItemsBackup["HostInstanceID"].asString();
		if(!resultNodeItemsBackup["StoreStatus"].isNull())
			backupObject.storeStatus = resultNodeItemsBackup["StoreStatus"].asString();
		if(!resultNodeItemsBackup["MetaStatus"].isNull())
			backupObject.metaStatus = resultNodeItemsBackup["MetaStatus"].asString();
		result_.items.push_back(backupObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["ErrMsg"].isNull())
		errMsg_ = value["ErrMsg"].asString();

}

std::string GetRdsBackUpResult::getErrMsg()const
{
	return errMsg_;
}

int GetRdsBackUpResult::getCode()const
{
	return code_;
}

GetRdsBackUpResult::Result GetRdsBackUpResult::getResult()const
{
	return result_;
}

