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

#include <alibabacloud/rds/model/DescribeBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeBackupPolicyResult::DescribeBackupPolicyResult() :
	ServiceResult()
{}

DescribeBackupPolicyResult::DescribeBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupPolicyResult::~DescribeBackupPolicyResult()
{}

void DescribeBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	backupRetentionPeriod_ = std::stoi(value["BackupRetentionPeriod"].asString());
	preferredNextBackupTime_ = value["PreferredNextBackupTime"].asString();
	preferredBackupTime_ = value["PreferredBackupTime"].asString();
	preferredBackupPeriod_ = value["PreferredBackupPeriod"].asString();
	backupLog_ = value["BackupLog"].asString();
	logBackupRetentionPeriod_ = std::stoi(value["LogBackupRetentionPeriod"].asString());

}

std::string DescribeBackupPolicyResult::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

void DescribeBackupPolicyResult::setPreferredBackupPeriod(const std::string& preferredBackupPeriod)
{
	preferredBackupPeriod_ = preferredBackupPeriod;
}

int DescribeBackupPolicyResult::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

void DescribeBackupPolicyResult::setLogBackupRetentionPeriod(int logBackupRetentionPeriod)
{
	logBackupRetentionPeriod_ = logBackupRetentionPeriod;
}

std::string DescribeBackupPolicyResult::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

void DescribeBackupPolicyResult::setPreferredBackupTime(const std::string& preferredBackupTime)
{
	preferredBackupTime_ = preferredBackupTime;
}

std::string DescribeBackupPolicyResult::getBackupLog()const
{
	return backupLog_;
}

void DescribeBackupPolicyResult::setBackupLog(const std::string& backupLog)
{
	backupLog_ = backupLog;
}

int DescribeBackupPolicyResult::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

void DescribeBackupPolicyResult::setBackupRetentionPeriod(int backupRetentionPeriod)
{
	backupRetentionPeriod_ = backupRetentionPeriod;
}

std::string DescribeBackupPolicyResult::getPreferredNextBackupTime()const
{
	return preferredNextBackupTime_;
}

void DescribeBackupPolicyResult::setPreferredNextBackupTime(const std::string& preferredNextBackupTime)
{
	preferredNextBackupTime_ = preferredNextBackupTime;
}

