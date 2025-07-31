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

#include <alibabacloud/dds/model/DescribeBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	if(!value["PreferredBackupPeriod"].isNull())
		preferredBackupPeriod_ = value["PreferredBackupPeriod"].asString();
	if(!value["PreferredBackupTime"].isNull())
		preferredBackupTime_ = value["PreferredBackupTime"].asString();
	if(!value["BackupRetentionPeriod"].isNull())
		backupRetentionPeriod_ = value["BackupRetentionPeriod"].asString();
	if(!value["PreferredNextBackupTime"].isNull())
		preferredNextBackupTime_ = value["PreferredNextBackupTime"].asString();
	if(!value["EnableBackupLog"].isNull())
		enableBackupLog_ = std::stoi(value["EnableBackupLog"].asString());
	if(!value["LogBackupRetentionPeriod"].isNull())
		logBackupRetentionPeriod_ = std::stoi(value["LogBackupRetentionPeriod"].asString());
	if(!value["SnapshotBackupType"].isNull())
		snapshotBackupType_ = value["SnapshotBackupType"].asString();
	if(!value["BackupInterval"].isNull())
		backupInterval_ = std::stoi(value["BackupInterval"].asString());
	if(!value["HighFrequencyBackupRetention"].isNull())
		highFrequencyBackupRetention_ = value["HighFrequencyBackupRetention"].asString();
	if(!value["BackupRetentionPolicyOnClusterDeletion"].isNull())
		backupRetentionPolicyOnClusterDeletion_ = std::stoi(value["BackupRetentionPolicyOnClusterDeletion"].asString());
	if(!value["SrcRegion"].isNull())
		srcRegion_ = value["SrcRegion"].asString();
	if(!value["DestRegion"].isNull())
		destRegion_ = value["DestRegion"].asString();
	if(!value["CrossRetentionType"].isNull())
		crossRetentionType_ = value["CrossRetentionType"].asString();
	if(!value["CrossRetentionValue"].isNull())
		crossRetentionValue_ = std::stoi(value["CrossRetentionValue"].asString());
	if(!value["CrossBackupPeriod"].isNull())
		crossBackupPeriod_ = value["CrossBackupPeriod"].asString();
	if(!value["EnableCrossLogBackup"].isNull())
		enableCrossLogBackup_ = std::stoi(value["EnableCrossLogBackup"].asString());
	if(!value["CrossLogRetentionType"].isNull())
		crossLogRetentionType_ = value["CrossLogRetentionType"].asString();
	if(!value["CrossLogRetentionValue"].isNull())
		crossLogRetentionValue_ = std::stoi(value["CrossLogRetentionValue"].asString());
	if(!value["PreserveOneEachHour"].isNull())
		preserveOneEachHour_ = value["PreserveOneEachHour"].asString() == "true";

}

std::string DescribeBackupPolicyResult::getHighFrequencyBackupRetention()const
{
	return highFrequencyBackupRetention_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

int DescribeBackupPolicyResult::getBackupRetentionPolicyOnClusterDeletion()const
{
	return backupRetentionPolicyOnClusterDeletion_;
}

std::string DescribeBackupPolicyResult::getCrossBackupPeriod()const
{
	return crossBackupPeriod_;
}

std::string DescribeBackupPolicyResult::getPreferredNextBackupTime()const
{
	return preferredNextBackupTime_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

std::string DescribeBackupPolicyResult::getCrossLogRetentionType()const
{
	return crossLogRetentionType_;
}

int DescribeBackupPolicyResult::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

int DescribeBackupPolicyResult::getCrossRetentionValue()const
{
	return crossRetentionValue_;
}

std::string DescribeBackupPolicyResult::getSrcRegion()const
{
	return srcRegion_;
}

std::string DescribeBackupPolicyResult::getCrossRetentionType()const
{
	return crossRetentionType_;
}

int DescribeBackupPolicyResult::getCrossLogRetentionValue()const
{
	return crossLogRetentionValue_;
}

int DescribeBackupPolicyResult::getEnableCrossLogBackup()const
{
	return enableCrossLogBackup_;
}

bool DescribeBackupPolicyResult::getPreserveOneEachHour()const
{
	return preserveOneEachHour_;
}

std::string DescribeBackupPolicyResult::getSnapshotBackupType()const
{
	return snapshotBackupType_;
}

int DescribeBackupPolicyResult::getEnableBackupLog()const
{
	return enableBackupLog_;
}

std::string DescribeBackupPolicyResult::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getDestRegion()const
{
	return destRegion_;
}

int DescribeBackupPolicyResult::getBackupInterval()const
{
	return backupInterval_;
}

