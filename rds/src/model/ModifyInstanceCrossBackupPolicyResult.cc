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

#include <alibabacloud/rds/model/ModifyInstanceCrossBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyInstanceCrossBackupPolicyResult::ModifyInstanceCrossBackupPolicyResult() :
	ServiceResult()
{}

ModifyInstanceCrossBackupPolicyResult::ModifyInstanceCrossBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyInstanceCrossBackupPolicyResult::~ModifyInstanceCrossBackupPolicyResult()
{}

void ModifyInstanceCrossBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BackupEnabled"].isNull())
		backupEnabled_ = value["BackupEnabled"].asString();
	if(!value["CrossBackupRegion"].isNull())
		crossBackupRegion_ = value["CrossBackupRegion"].asString();
	if(!value["CrossBackupType"].isNull())
		crossBackupType_ = value["CrossBackupType"].asString();
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["Endpoint"].isNull())
		endpoint_ = value["Endpoint"].asString();
	if(!value["LogBackupEnabled"].isNull())
		logBackupEnabled_ = value["LogBackupEnabled"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["RetentType"].isNull())
		retentType_ = std::stoi(value["RetentType"].asString());
	if(!value["Retention"].isNull())
		retention_ = std::stoi(value["Retention"].asString());
	if(!value["StorageOwner"].isNull())
		storageOwner_ = value["StorageOwner"].asString();
	if(!value["StorageType"].isNull())
		storageType_ = value["StorageType"].asString();

}

std::string ModifyInstanceCrossBackupPolicyResult::getLogBackupEnabled()const
{
	return logBackupEnabled_;
}

std::string ModifyInstanceCrossBackupPolicyResult::getStorageOwner()const
{
	return storageOwner_;
}

std::string ModifyInstanceCrossBackupPolicyResult::getBackupEnabled()const
{
	return backupEnabled_;
}

std::string ModifyInstanceCrossBackupPolicyResult::getCrossBackupType()const
{
	return crossBackupType_;
}

std::string ModifyInstanceCrossBackupPolicyResult::getStorageType()const
{
	return storageType_;
}

std::string ModifyInstanceCrossBackupPolicyResult::getEndpoint()const
{
	return endpoint_;
}

std::string ModifyInstanceCrossBackupPolicyResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string ModifyInstanceCrossBackupPolicyResult::getCrossBackupRegion()const
{
	return crossBackupRegion_;
}

int ModifyInstanceCrossBackupPolicyResult::getRetentType()const
{
	return retentType_;
}

std::string ModifyInstanceCrossBackupPolicyResult::getRegionId()const
{
	return regionId_;
}

int ModifyInstanceCrossBackupPolicyResult::getRetention()const
{
	return retention_;
}

