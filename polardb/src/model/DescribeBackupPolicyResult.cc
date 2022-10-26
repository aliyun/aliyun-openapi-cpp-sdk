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

#include <alibabacloud/polardb/model/DescribeBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

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
	if(!value["DataLevel1BackupRetentionPeriod"].isNull())
		dataLevel1BackupRetentionPeriod_ = value["DataLevel1BackupRetentionPeriod"].asString();
	if(!value["PreferredBackupTime"].isNull())
		preferredBackupTime_ = value["PreferredBackupTime"].asString();
	if(!value["BackupRetentionPolicyOnClusterDeletion"].isNull())
		backupRetentionPolicyOnClusterDeletion_ = value["BackupRetentionPolicyOnClusterDeletion"].asString();
	if(!value["BackupRetentionPeriod"].isNull())
		backupRetentionPeriod_ = std::stoi(value["BackupRetentionPeriod"].asString());
	if(!value["PreferredNextBackupTime"].isNull())
		preferredNextBackupTime_ = value["PreferredNextBackupTime"].asString();
	if(!value["DataLevel2BackupRetentionPeriod"].isNull())
		dataLevel2BackupRetentionPeriod_ = value["DataLevel2BackupRetentionPeriod"].asString();
	if(!value["BackupFrequency"].isNull())
		backupFrequency_ = value["BackupFrequency"].asString();
	if(!value["DataLevel1BackupFrequency"].isNull())
		dataLevel1BackupFrequency_ = value["DataLevel1BackupFrequency"].asString();
	if(!value["DataLevel1BackupPeriod"].isNull())
		dataLevel1BackupPeriod_ = value["DataLevel1BackupPeriod"].asString();
	if(!value["DataLevel1BackupTime"].isNull())
		dataLevel1BackupTime_ = value["DataLevel1BackupTime"].asString();
	if(!value["DataLevel2BackupPeriod"].isNull())
		dataLevel2BackupPeriod_ = value["DataLevel2BackupPeriod"].asString();
	if(!value["DataLevel2BackupAnotherRegionRetentionPeriod"].isNull())
		dataLevel2BackupAnotherRegionRetentionPeriod_ = value["DataLevel2BackupAnotherRegionRetentionPeriod"].asString();
	if(!value["DataLevel2BackupAnotherRegionRegion"].isNull())
		dataLevel2BackupAnotherRegionRegion_ = value["DataLevel2BackupAnotherRegionRegion"].asString();

}

std::string DescribeBackupPolicyResult::getDataLevel2BackupAnotherRegionRegion()const
{
	return dataLevel2BackupAnotherRegionRegion_;
}

std::string DescribeBackupPolicyResult::getDataLevel1BackupRetentionPeriod()const
{
	return dataLevel1BackupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getDataLevel2BackupAnotherRegionRetentionPeriod()const
{
	return dataLevel2BackupAnotherRegionRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

std::string DescribeBackupPolicyResult::getBackupRetentionPolicyOnClusterDeletion()const
{
	return backupRetentionPolicyOnClusterDeletion_;
}

std::string DescribeBackupPolicyResult::getBackupFrequency()const
{
	return backupFrequency_;
}

std::string DescribeBackupPolicyResult::getDataLevel1BackupTime()const
{
	return dataLevel1BackupTime_;
}

std::string DescribeBackupPolicyResult::getPreferredNextBackupTime()const
{
	return preferredNextBackupTime_;
}

std::string DescribeBackupPolicyResult::getDataLevel2BackupRetentionPeriod()const
{
	return dataLevel2BackupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

std::string DescribeBackupPolicyResult::getDataLevel1BackupFrequency()const
{
	return dataLevel1BackupFrequency_;
}

std::string DescribeBackupPolicyResult::getDataLevel2BackupPeriod()const
{
	return dataLevel2BackupPeriod_;
}

int DescribeBackupPolicyResult::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getDataLevel1BackupPeriod()const
{
	return dataLevel1BackupPeriod_;
}

