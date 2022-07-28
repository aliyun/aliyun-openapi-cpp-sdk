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

#include <alibabacloud/dbs/model/DescribeBackupSetDownloadTaskListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeBackupSetDownloadTaskListResult::DescribeBackupSetDownloadTaskListResult() :
	ServiceResult()
{}

DescribeBackupSetDownloadTaskListResult::DescribeBackupSetDownloadTaskListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupSetDownloadTaskListResult::~DescribeBackupSetDownloadTaskListResult()
{}

void DescribeBackupSetDownloadTaskListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["BackupSetDownloadTaskDetail"];
	for (auto valueItemsBackupSetDownloadTaskDetail : allItemsNode)
	{
		BackupSetDownloadTaskDetail itemsObject;
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadStatus"].isNull())
			itemsObject.backupSetDownloadStatus = valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadStatus"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDataSize"].isNull())
			itemsObject.backupSetDataSize = std::stol(valueItemsBackupSetDownloadTaskDetail["BackupSetDataSize"].asString());
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadTargetType"].isNull())
			itemsObject.backupSetDownloadTargetType = valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadTargetType"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadDir"].isNull())
			itemsObject.backupSetDownloadDir = valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadDir"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["ErrMessage"].isNull())
			itemsObject.errMessage = valueItemsBackupSetDownloadTaskDetail["ErrMessage"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadCreateTime"].isNull())
			itemsObject.backupSetDownloadCreateTime = std::stol(valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadCreateTime"].asString());
		if(!valueItemsBackupSetDownloadTaskDetail["BackupPlanId"].isNull())
			itemsObject.backupPlanId = valueItemsBackupSetDownloadTaskDetail["BackupPlanId"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDbType"].isNull())
			itemsObject.backupSetDbType = valueItemsBackupSetDownloadTaskDetail["BackupSetDbType"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadInternetUrl"].isNull())
			itemsObject.backupSetDownloadInternetUrl = valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadInternetUrl"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetId"].isNull())
			itemsObject.backupSetId = valueItemsBackupSetDownloadTaskDetail["BackupSetId"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadIntranetUrl"].isNull())
			itemsObject.backupSetDownloadIntranetUrl = valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadIntranetUrl"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupGatewayId"].isNull())
			itemsObject.backupGatewayId = std::stol(valueItemsBackupSetDownloadTaskDetail["BackupGatewayId"].asString());
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadWay"].isNull())
			itemsObject.backupSetDownloadWay = valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadWay"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadFinishTime"].isNull())
			itemsObject.backupSetDownloadFinishTime = std::stol(valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadFinishTime"].asString());
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetJobType"].isNull())
			itemsObject.backupSetJobType = valueItemsBackupSetDownloadTaskDetail["BackupSetJobType"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadTaskId"].isNull())
			itemsObject.backupSetDownloadTaskId = valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadTaskId"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadTaskName"].isNull())
			itemsObject.backupSetDownloadTaskName = valueItemsBackupSetDownloadTaskDetail["BackupSetDownloadTaskName"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetDataFormat"].isNull())
			itemsObject.backupSetDataFormat = valueItemsBackupSetDownloadTaskDetail["BackupSetDataFormat"].asString();
		if(!valueItemsBackupSetDownloadTaskDetail["BackupSetCode"].isNull())
			itemsObject.backupSetCode = valueItemsBackupSetDownloadTaskDetail["BackupSetCode"].asString();
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

int DescribeBackupSetDownloadTaskListResult::getPageNum()const
{
	return pageNum_;
}

int DescribeBackupSetDownloadTaskListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBackupSetDownloadTaskListResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

int DescribeBackupSetDownloadTaskListResult::getTotalElements()const
{
	return totalElements_;
}

std::vector<DescribeBackupSetDownloadTaskListResult::BackupSetDownloadTaskDetail> DescribeBackupSetDownloadTaskListResult::getItems()const
{
	return items_;
}

int DescribeBackupSetDownloadTaskListResult::getTotalPages()const
{
	return totalPages_;
}

std::string DescribeBackupSetDownloadTaskListResult::getErrMessage()const
{
	return errMessage_;
}

bool DescribeBackupSetDownloadTaskListResult::getSuccess()const
{
	return success_;
}

std::string DescribeBackupSetDownloadTaskListResult::getErrCode()const
{
	return errCode_;
}

