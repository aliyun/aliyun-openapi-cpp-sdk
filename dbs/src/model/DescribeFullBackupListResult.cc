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

#include <alibabacloud/dbs/model/DescribeFullBackupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeFullBackupListResult::DescribeFullBackupListResult() :
	ServiceResult()
{}

DescribeFullBackupListResult::DescribeFullBackupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFullBackupListResult::~DescribeFullBackupListResult()
{}

void DescribeFullBackupListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["FullBackupFile"];
	for (auto valueItemsFullBackupFile : allItemsNode)
	{
		FullBackupFile itemsObject;
		if(!valueItemsFullBackupFile["FinishTime"].isNull())
			itemsObject.finishTime = std::stol(valueItemsFullBackupFile["FinishTime"].asString());
		if(!valueItemsFullBackupFile["BackupStatus"].isNull())
			itemsObject.backupStatus = valueItemsFullBackupFile["BackupStatus"].asString();
		if(!valueItemsFullBackupFile["SourceEndpointIpPort"].isNull())
			itemsObject.sourceEndpointIpPort = valueItemsFullBackupFile["SourceEndpointIpPort"].asString();
		if(!valueItemsFullBackupFile["CreateTime"].isNull())
			itemsObject.createTime = std::stol(valueItemsFullBackupFile["CreateTime"].asString());
		if(!valueItemsFullBackupFile["ErrMessage"].isNull())
			itemsObject.errMessage = valueItemsFullBackupFile["ErrMessage"].asString();
		if(!valueItemsFullBackupFile["BackupObjects"].isNull())
			itemsObject.backupObjects = valueItemsFullBackupFile["BackupObjects"].asString();
		if(!valueItemsFullBackupFile["EndTime"].isNull())
			itemsObject.endTime = std::stol(valueItemsFullBackupFile["EndTime"].asString());
		if(!valueItemsFullBackupFile["StartTime"].isNull())
			itemsObject.startTime = std::stol(valueItemsFullBackupFile["StartTime"].asString());
		if(!valueItemsFullBackupFile["BackupSetExpiredTime"].isNull())
			itemsObject.backupSetExpiredTime = std::stol(valueItemsFullBackupFile["BackupSetExpiredTime"].asString());
		if(!valueItemsFullBackupFile["StorageMethod"].isNull())
			itemsObject.storageMethod = valueItemsFullBackupFile["StorageMethod"].asString();
		if(!valueItemsFullBackupFile["BackupSetId"].isNull())
			itemsObject.backupSetId = valueItemsFullBackupFile["BackupSetId"].asString();
		if(!valueItemsFullBackupFile["BackupSize"].isNull())
			itemsObject.backupSize = std::stol(valueItemsFullBackupFile["BackupSize"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalElements"].isNull())
		totalElements_ = std::stoi(value["TotalElements"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeFullBackupListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeFullBackupListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeFullBackupListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DescribeFullBackupListResult::getTotalElements()const
{
	return totalElements_;
}

std::vector<DescribeFullBackupListResult::FullBackupFile> DescribeFullBackupListResult::getItems()const
{
	return items_;
}

int DescribeFullBackupListResult::getTotalPages()const
{
	return totalPages_;
}

std::string DescribeFullBackupListResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeFullBackupListResult::getSuccess()const
{
	return success_;
}

std::string DescribeFullBackupListResult::getErrCode()const
{
	return errCode_;
}

