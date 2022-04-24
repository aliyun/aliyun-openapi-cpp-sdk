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

#include <alibabacloud/polardb/model/DescribeBackupLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeBackupLogsResult::DescribeBackupLogsResult() :
	ServiceResult()
{}

DescribeBackupLogsResult::DescribeBackupLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupLogsResult::~DescribeBackupLogsResult()
{}

void DescribeBackupLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["BackupLog"];
	for (auto valueItemsBackupLog : allItemsNode)
	{
		BackupLog itemsObject;
		if(!valueItemsBackupLog["BackupLogId"].isNull())
			itemsObject.backupLogId = valueItemsBackupLog["BackupLogId"].asString();
		if(!valueItemsBackupLog["IntranetDownloadLink"].isNull())
			itemsObject.intranetDownloadLink = valueItemsBackupLog["IntranetDownloadLink"].asString();
		if(!valueItemsBackupLog["LinkExpiredTime"].isNull())
			itemsObject.linkExpiredTime = valueItemsBackupLog["LinkExpiredTime"].asString();
		if(!valueItemsBackupLog["BackupLogStartTime"].isNull())
			itemsObject.backupLogStartTime = valueItemsBackupLog["BackupLogStartTime"].asString();
		if(!valueItemsBackupLog["BackupLogEndTime"].isNull())
			itemsObject.backupLogEndTime = valueItemsBackupLog["BackupLogEndTime"].asString();
		if(!valueItemsBackupLog["DownloadLink"].isNull())
			itemsObject.downloadLink = valueItemsBackupLog["DownloadLink"].asString();
		if(!valueItemsBackupLog["BackupLogSize"].isNull())
			itemsObject.backupLogSize = valueItemsBackupLog["BackupLogSize"].asString();
		if(!valueItemsBackupLog["BackupLogName"].isNull())
			itemsObject.backupLogName = valueItemsBackupLog["BackupLogName"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = value["TotalRecordCount"].asString();
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = value["PageRecordCount"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string DescribeBackupLogsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::string DescribeBackupLogsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeBackupLogsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBackupLogsResult::BackupLog> DescribeBackupLogsResult::getItems()const
{
	return items_;
}

