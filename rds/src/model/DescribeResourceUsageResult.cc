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

#include <alibabacloud/rds/model/DescribeResourceUsageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeResourceUsageResult::DescribeResourceUsageResult() :
	ServiceResult()
{}

DescribeResourceUsageResult::DescribeResourceUsageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceUsageResult::~DescribeResourceUsageResult()
{}

void DescribeResourceUsageResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["DiskUsed"].isNull())
		diskUsed_ = std::stol(value["DiskUsed"].asString());
	if(!value["DataSize"].isNull())
		dataSize_ = std::stol(value["DataSize"].asString());
	if(!value["LogSize"].isNull())
		logSize_ = std::stol(value["LogSize"].asString());
	if(!value["BackupSize"].isNull())
		backupSize_ = std::stol(value["BackupSize"].asString());
	if(!value["BackupOssDataSize"].isNull())
		backupOssDataSize_ = std::stol(value["BackupOssDataSize"].asString());
	if(!value["BackupOssLogSize"].isNull())
		backupOssLogSize_ = std::stol(value["BackupOssLogSize"].asString());
	if(!value["SQLSize"].isNull())
		sQLSize_ = std::stol(value["SQLSize"].asString());
	if(!value["ColdBackupSize"].isNull())
		coldBackupSize_ = std::stol(value["ColdBackupSize"].asString());

}

long DescribeResourceUsageResult::getLogSize()const
{
	return logSize_;
}

long DescribeResourceUsageResult::getBackupOssLogSize()const
{
	return backupOssLogSize_;
}

std::string DescribeResourceUsageResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

long DescribeResourceUsageResult::getDataSize()const
{
	return dataSize_;
}

long DescribeResourceUsageResult::getBackupSize()const
{
	return backupSize_;
}

long DescribeResourceUsageResult::getBackupOssDataSize()const
{
	return backupOssDataSize_;
}

long DescribeResourceUsageResult::getSQLSize()const
{
	return sQLSize_;
}

long DescribeResourceUsageResult::getDiskUsed()const
{
	return diskUsed_;
}

std::string DescribeResourceUsageResult::getEngine()const
{
	return engine_;
}

long DescribeResourceUsageResult::getColdBackupSize()const
{
	return coldBackupSize_;
}

