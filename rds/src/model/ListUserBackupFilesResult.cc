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

#include <alibabacloud/rds/model/ListUserBackupFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ListUserBackupFilesResult::ListUserBackupFilesResult() :
	ServiceResult()
{}

ListUserBackupFilesResult::ListUserBackupFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListUserBackupFilesResult::~ListUserBackupFilesResult()
{}

void ListUserBackupFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRecordsNode = value["Records"]["RecordsItem"];
	for (auto valueRecordsRecordsItem : allRecordsNode)
	{
		RecordsItem recordsObject;
		if(!valueRecordsRecordsItem["BackupId"].isNull())
			recordsObject.backupId = valueRecordsRecordsItem["BackupId"].asString();
		if(!valueRecordsRecordsItem["BinlogInfo"].isNull())
			recordsObject.binlogInfo = valueRecordsRecordsItem["BinlogInfo"].asString();
		if(!valueRecordsRecordsItem["Comment"].isNull())
			recordsObject.comment = valueRecordsRecordsItem["Comment"].asString();
		if(!valueRecordsRecordsItem["CreationTime"].isNull())
			recordsObject.creationTime = valueRecordsRecordsItem["CreationTime"].asString();
		if(!valueRecordsRecordsItem["DBInstanceId"].isNull())
			recordsObject.dBInstanceId = valueRecordsRecordsItem["DBInstanceId"].asString();
		if(!valueRecordsRecordsItem["Engine"].isNull())
			recordsObject.engine = valueRecordsRecordsItem["Engine"].asString();
		if(!valueRecordsRecordsItem["EngineVersion"].isNull())
			recordsObject.engineVersion = valueRecordsRecordsItem["EngineVersion"].asString();
		if(!valueRecordsRecordsItem["FinishTime"].isNull())
			recordsObject.finishTime = valueRecordsRecordsItem["FinishTime"].asString();
		if(!valueRecordsRecordsItem["ModificationTime"].isNull())
			recordsObject.modificationTime = valueRecordsRecordsItem["ModificationTime"].asString();
		if(!valueRecordsRecordsItem["OssBucket"].isNull())
			recordsObject.ossBucket = valueRecordsRecordsItem["OssBucket"].asString();
		if(!valueRecordsRecordsItem["OssFileMetaData"].isNull())
			recordsObject.ossFileMetaData = valueRecordsRecordsItem["OssFileMetaData"].asString();
		if(!valueRecordsRecordsItem["OssFileName"].isNull())
			recordsObject.ossFileName = valueRecordsRecordsItem["OssFileName"].asString();
		if(!valueRecordsRecordsItem["OssFilePath"].isNull())
			recordsObject.ossFilePath = valueRecordsRecordsItem["OssFilePath"].asString();
		if(!valueRecordsRecordsItem["OssFileSize"].isNull())
			recordsObject.ossFileSize = std::stol(valueRecordsRecordsItem["OssFileSize"].asString());
		if(!valueRecordsRecordsItem["OssUrl"].isNull())
			recordsObject.ossUrl = valueRecordsRecordsItem["OssUrl"].asString();
		if(!valueRecordsRecordsItem["Reason"].isNull())
			recordsObject.reason = valueRecordsRecordsItem["Reason"].asString();
		if(!valueRecordsRecordsItem["RestoreSize"].isNull())
			recordsObject.restoreSize = valueRecordsRecordsItem["RestoreSize"].asString();
		if(!valueRecordsRecordsItem["Retention"].isNull())
			recordsObject.retention = std::stoi(valueRecordsRecordsItem["Retention"].asString());
		if(!valueRecordsRecordsItem["Status"].isNull())
			recordsObject.status = valueRecordsRecordsItem["Status"].asString();
		if(!valueRecordsRecordsItem["ZoneId"].isNull())
			recordsObject.zoneId = valueRecordsRecordsItem["ZoneId"].asString();
		records_.push_back(recordsObject);
	}

}

std::vector<ListUserBackupFilesResult::RecordsItem> ListUserBackupFilesResult::getRecords()const
{
	return records_;
}

