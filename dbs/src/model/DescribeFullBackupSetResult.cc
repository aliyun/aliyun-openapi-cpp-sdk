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

#include <alibabacloud/dbs/model/DescribeFullBackupSetResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dbs;
using namespace AlibabaCloud::Dbs::Model;

DescribeFullBackupSetResult::DescribeFullBackupSetResult() :
	ServiceResult()
{}

DescribeFullBackupSetResult::DescribeFullBackupSetResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeFullBackupSetResult::~DescribeFullBackupSetResult()
{}

void DescribeFullBackupSetResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrCode"].isNull())
		errCode_ = value["ErrCode"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage_ = value["ErrMessage"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["BackupSetId"].isNull())
		backupSetId_ = value["BackupSetId"].asString();
	if(!value["SourceEndpointIpPort"].isNull())
		sourceEndpointIpPort_ = value["SourceEndpointIpPort"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = std::stol(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stol(value["EndTime"].asString());
	if(!value["BackupStatus"].isNull())
		backupStatus_ = value["BackupStatus"].asString();
	if(!value["BackupSetExpiredTime"].isNull())
		backupSetExpiredTime_ = std::stol(value["BackupSetExpiredTime"].asString());
	if(!value["BackupSize"].isNull())
		backupSize_ = std::stol(value["BackupSize"].asString());
	if(!value["StorageMethod"].isNull())
		storageMethod_ = value["StorageMethod"].asString();
	if(!value["ErrMessage"].isNull())
		errMessage1_ = value["ErrMessage"].asString();
	if(!value["BackupObjects"].isNull())
		backupObjects_ = value["BackupObjects"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = std::stol(value["CreateTime"].asString());
	if(!value["FinishTime"].isNull())
		finishTime_ = std::stol(value["FinishTime"].asString());

}

std::string DescribeFullBackupSetResult::getStorageMethod()const
{
	return storageMethod_;
}

std::string DescribeFullBackupSetResult::getBackupObjects()const
{
	return backupObjects_;
}

long DescribeFullBackupSetResult::getEndTime()const
{
	return endTime_;
}

long DescribeFullBackupSetResult::getBackupSize()const
{
	return backupSize_;
}

long DescribeFullBackupSetResult::getCreateTime()const
{
	return createTime_;
}

long DescribeFullBackupSetResult::getStartTime()const
{
	return startTime_;
}

long DescribeFullBackupSetResult::getBackupSetExpiredTime()const
{
	return backupSetExpiredTime_;
}

std::string DescribeFullBackupSetResult::getErrMessage()const
{
	return errMessage_;
}

std::string DescribeFullBackupSetResult::getBackupSetId()const
{
	return backupSetId_;
}

bool DescribeFullBackupSetResult::getSuccess()const
{
	return success_;
}

std::string DescribeFullBackupSetResult::getErrMessage1()const
{
	return errMessage1_;
}

std::string DescribeFullBackupSetResult::getErrCode()const
{
	return errCode_;
}

std::string DescribeFullBackupSetResult::getSourceEndpointIpPort()const
{
	return sourceEndpointIpPort_;
}

long DescribeFullBackupSetResult::getFinishTime()const
{
	return finishTime_;
}

int DescribeFullBackupSetResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string DescribeFullBackupSetResult::getBackupStatus()const
{
	return backupStatus_;
}

