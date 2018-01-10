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
	dBInstanceId_ = value["DBInstanceId"].asString();
	engine_ = value["Engine"].asString();
	diskUsed_ = std::stol(value["DiskUsed"].asString());
	dataSize_ = std::stol(value["DataSize"].asString());
	logSize_ = std::stol(value["LogSize"].asString());
	backupSize_ = std::stol(value["BackupSize"].asString());
	sQLSize_ = std::stol(value["SQLSize"].asString());
	coldBackupSize_ = std::stol(value["ColdBackupSize"].asString());

}

long DescribeResourceUsageResult::getLogSize()const
{
	return logSize_;
}

void DescribeResourceUsageResult::setLogSize(long logSize)
{
	logSize_ = logSize;
}

std::string DescribeResourceUsageResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeResourceUsageResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

long DescribeResourceUsageResult::getDataSize()const
{
	return dataSize_;
}

void DescribeResourceUsageResult::setDataSize(long dataSize)
{
	dataSize_ = dataSize;
}

long DescribeResourceUsageResult::getBackupSize()const
{
	return backupSize_;
}

void DescribeResourceUsageResult::setBackupSize(long backupSize)
{
	backupSize_ = backupSize;
}

long DescribeResourceUsageResult::getSQLSize()const
{
	return sQLSize_;
}

void DescribeResourceUsageResult::setSQLSize(long sQLSize)
{
	sQLSize_ = sQLSize;
}

long DescribeResourceUsageResult::getDiskUsed()const
{
	return diskUsed_;
}

void DescribeResourceUsageResult::setDiskUsed(long diskUsed)
{
	diskUsed_ = diskUsed;
}

std::string DescribeResourceUsageResult::getEngine()const
{
	return engine_;
}

void DescribeResourceUsageResult::setEngine(const std::string& engine)
{
	engine_ = engine;
}

long DescribeResourceUsageResult::getColdBackupSize()const
{
	return coldBackupSize_;
}

void DescribeResourceUsageResult::setColdBackupSize(long coldBackupSize)
{
	coldBackupSize_ = coldBackupSize;
}

