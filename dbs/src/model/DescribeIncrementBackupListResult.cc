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

#include <alibabacloud/dbs/model/DescribeIncrementBackupListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeIncrementBackupListResult::DescribeIncrementBackupListResult() :
	ServiceResult()
{}

DescribeIncrementBackupListResult::DescribeIncrementBackupListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeIncrementBackupListResult::~DescribeIncrementBackupListResult()
{}

void DescribeIncrementBackupListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["IncrementBackupFile"];
	for (auto valueItemsIncrementBackupFile : allItemsNode)
	{
		IncrementBackupFile itemsObject;
		if(!valueItemsIncrementBackupFile["EndTime"].isNull())
			itemsObject.endTime = std::stol(valueItemsIncrementBackupFile["EndTime"].asString());
		if(!valueItemsIncrementBackupFile["BackupSetExpiredTime"].isNull())
			itemsObject.backupSetExpiredTime = std::stol(valueItemsIncrementBackupFile["BackupSetExpiredTime"].asString());
		if(!valueItemsIncrementBackupFile["StartTime"].isNull())
			itemsObject.startTime = std::stol(valueItemsIncrementBackupFile["StartTime"].asString());
		if(!valueItemsIncrementBackupFile["StorageMethod"].isNull())
			itemsObject.storageMethod = valueItemsIncrementBackupFile["StorageMethod"].asString();
		if(!valueItemsIncrementBackupFile["BackupSetJobId"].isNull())
			itemsObject.backupSetJobId = valueItemsIncrementBackupFile["BackupSetJobId"].asString();
		if(!valueItemsIncrementBackupFile["BackupSetId"].isNull())
			itemsObject.backupSetId = valueItemsIncrementBackupFile["BackupSetId"].asString();
		if(!valueItemsIncrementBackupFile["BackupStatus"].isNull())
			itemsObject.backupStatus = valueItemsIncrementBackupFile["BackupStatus"].asString();
		if(!valueItemsIncrementBackupFile["SourceEndpointIpPort"].isNull())
			itemsObject.sourceEndpointIpPort = valueItemsIncrementBackupFile["SourceEndpointIpPort"].asString();
		if(!valueItemsIncrementBackupFile["BackupSize"].isNull())
			itemsObject.backupSize = std::stol(valueItemsIncrementBackupFile["BackupSize"].asString());
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

int DescribeIncrementBackupListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeIncrementBackupListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIncrementBackupListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DescribeIncrementBackupListResult::getTotalElements()const
{
	return totalElements_;
}

std::vector<DescribeIncrementBackupListResult::IncrementBackupFile> DescribeIncrementBackupListResult::getItems()const
{
	return items_;
}

int DescribeIncrementBackupListResult::getTotalPages()const
{
	return totalPages_;
}

std::string DescribeIncrementBackupListResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeIncrementBackupListResult::getSuccess()const
{
	return success_;
}

std::string DescribeIncrementBackupListResult::getErrCode()const
{
	return errCode_;
}

