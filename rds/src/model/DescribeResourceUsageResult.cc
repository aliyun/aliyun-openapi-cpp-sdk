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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

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
	if(!value["SQLSize"].isNull())
		sQLSize_ = std::stol(value["SQLSize"].asString());
	if(!value["ColdBackupSize"].isNull())
		coldBackupSize_ = std::stol(value["ColdBackupSize"].asString());

}

long DescribeResourceUsageResult::getLogSize()const
{
	return logSize_;
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

