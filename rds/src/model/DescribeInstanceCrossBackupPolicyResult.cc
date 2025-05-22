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

#include <alibabacloud/rds/model/DescribeInstanceCrossBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeInstanceCrossBackupPolicyResult::DescribeInstanceCrossBackupPolicyResult() :
	ServiceResult()
{}

DescribeInstanceCrossBackupPolicyResult::DescribeInstanceCrossBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceCrossBackupPolicyResult::~DescribeInstanceCrossBackupPolicyResult()
{}

void DescribeInstanceCrossBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BackupEnabled"].isNull())
		backupEnabled_ = value["BackupEnabled"].asString();
	if(!value["BackupEnabledTime"].isNull())
		backupEnabledTime_ = value["BackupEnabledTime"].asString();
	if(!value["CrossBackupRegion"].isNull())
		crossBackupRegion_ = value["CrossBackupRegion"].asString();
	if(!value["CrossBackupType"].isNull())
		crossBackupType_ = value["CrossBackupType"].asString();
	if(!value["DBInstanceDescription"].isNull())
		dBInstanceDescription_ = value["DBInstanceDescription"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["DBInstanceStatus"].isNull())
		dBInstanceStatus_ = value["DBInstanceStatus"].asString();
	if(!value["DBInstanceStatusDesc"].isNull())
		dBInstanceStatusDesc_ = value["DBInstanceStatusDesc"].asString();
	if(!value["Endpoint"].isNull())
		endpoint_ = value["Endpoint"].asString();
	if(!value["Engine"].isNull())
		engine_ = value["Engine"].asString();
	if(!value["EngineVersion"].isNull())
		engineVersion_ = value["EngineVersion"].asString();
	if(!value["LockMode"].isNull())
		lockMode_ = value["LockMode"].asString();
	if(!value["LogBackupEnabled"].isNull())
		logBackupEnabled_ = value["LogBackupEnabled"].asString();
	if(!value["LogBackupEnabledTime"].isNull())
		logBackupEnabledTime_ = value["LogBackupEnabledTime"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["RelService"].isNull())
		relService_ = value["RelService"].asString();
	if(!value["RelServiceId"].isNull())
		relServiceId_ = value["RelServiceId"].asString();
	if(!value["RetentType"].isNull())
		retentType_ = std::stoi(value["RetentType"].asString());
	if(!value["Retention"].isNull())
		retention_ = std::stoi(value["Retention"].asString());
	if(!value["StorageOwner"].isNull())
		storageOwner_ = value["StorageOwner"].asString();
	if(!value["StorageType"].isNull())
		storageType_ = value["StorageType"].asString();

}

std::string DescribeInstanceCrossBackupPolicyResult::getLogBackupEnabled()const
{
	return logBackupEnabled_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getBackupEnabledTime()const
{
	return backupEnabledTime_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getEngineVersion()const
{
	return engineVersion_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getStorageType()const
{
	return storageType_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getDBInstanceStatus()const
{
	return dBInstanceStatus_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getLogBackupEnabledTime()const
{
	return logBackupEnabledTime_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getCrossBackupRegion()const
{
	return crossBackupRegion_;
}

int DescribeInstanceCrossBackupPolicyResult::getRetentType()const
{
	return retentType_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getLockMode()const
{
	return lockMode_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getRelServiceId()const
{
	return relServiceId_;
}

int DescribeInstanceCrossBackupPolicyResult::getRetention()const
{
	return retention_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getStorageOwner()const
{
	return storageOwner_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getBackupEnabled()const
{
	return backupEnabled_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getCrossBackupType()const
{
	return crossBackupType_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getEndpoint()const
{
	return endpoint_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getDBInstanceStatusDesc()const
{
	return dBInstanceStatusDesc_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getRelService()const
{
	return relService_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

std::string DescribeInstanceCrossBackupPolicyResult::getEngine()const
{
	return engine_;
}

