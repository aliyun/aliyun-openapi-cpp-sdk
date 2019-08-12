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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["IncrementBackupFile"];
	for (auto value : allItems)
	{
		IncrementBackupFile itemsObject;
		if(!value["BackupSetId"].isNull())
			itemsObject.backupSetId = value["BackupSetId"].asString();
		if(!value["SourceEndpointIpPort"].isNull())
			itemsObject.sourceEndpointIpPort = value["SourceEndpointIpPort"].asString();
		if(!value["StartTime"].isNull())
			itemsObject.startTime = std::stol(value["StartTime"].asString());
		if(!value["EndTime"].isNull())
			itemsObject.endTime = std::stol(value["EndTime"].asString());
		if(!value["BackupStatus"].isNull())
			itemsObject.backupStatus = value["BackupStatus"].asString();
		if(!value["BackupSetExpiredTime"].isNull())
			itemsObject.backupSetExpiredTime = std::stol(value["BackupSetExpiredTime"].asString());
		if(!value["BackupSize"].isNull())
			itemsObject.backupSize = std::stol(value["BackupSize"].asString());
		if(!value["StorageMethod"].isNull())
			itemsObject.storageMethod = value["StorageMethod"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNum"].isNull())
		pageNum_ = std::stoi(value["PageNum"].asString());
	if(!value["TotalElements"].isNull())
		totalElements_ = std::stoi(value["TotalElements"].asString());

}

int DescribeIncrementBackupListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeIncrementBackupListResult::getPageNum()const
{
	return pageNum_;
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

