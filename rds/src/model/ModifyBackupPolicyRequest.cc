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

#include <alibabacloud/rds/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::Rds::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyBackupPolicy")
{}

ModifyBackupPolicyRequest::~ModifyBackupPolicyRequest()
{}

std::string ModifyBackupPolicyRequest::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

void ModifyBackupPolicyRequest::setPreferredBackupPeriod(const std::string& preferredBackupPeriod)
{
	preferredBackupPeriod_ = preferredBackupPeriod;
	setCoreParameter("PreferredBackupPeriod", preferredBackupPeriod);
}

long ModifyBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyBackupPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyBackupPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyBackupPolicyRequest::getLocalLogRetentionHours()const
{
	return localLogRetentionHours_;
}

void ModifyBackupPolicyRequest::setLocalLogRetentionHours(const std::string& localLogRetentionHours)
{
	localLogRetentionHours_ = localLogRetentionHours;
	setCoreParameter("LocalLogRetentionHours", localLogRetentionHours);
}

std::string ModifyBackupPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyBackupPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyBackupPolicyRequest::getLogBackupFrequency()const
{
	return logBackupFrequency_;
}

void ModifyBackupPolicyRequest::setLogBackupFrequency(const std::string& logBackupFrequency)
{
	logBackupFrequency_ = logBackupFrequency;
	setCoreParameter("LogBackupFrequency", logBackupFrequency);
}

std::string ModifyBackupPolicyRequest::getCompressType()const
{
	return compressType_;
}

void ModifyBackupPolicyRequest::setCompressType(const std::string& compressType)
{
	compressType_ = compressType;
	setCoreParameter("CompressType", compressType);
}

std::string ModifyBackupPolicyRequest::getBackupLog()const
{
	return backupLog_;
}

void ModifyBackupPolicyRequest::setBackupLog(const std::string& backupLog)
{
	backupLog_ = backupLog;
	setCoreParameter("BackupLog", backupLog);
}

std::string ModifyBackupPolicyRequest::getLocalLogRetentionSpace()const
{
	return localLogRetentionSpace_;
}

void ModifyBackupPolicyRequest::setLocalLogRetentionSpace(const std::string& localLogRetentionSpace)
{
	localLogRetentionSpace_ = localLogRetentionSpace;
	setCoreParameter("LocalLogRetentionSpace", localLogRetentionSpace);
}

long ModifyBackupPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyBackupPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyBackupPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyBackupPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyBackupPolicyRequest::getDuplication()const
{
	return duplication_;
}

void ModifyBackupPolicyRequest::setDuplication(const std::string& duplication)
{
	duplication_ = duplication;
	setCoreParameter("Duplication", duplication);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string& preferredBackupTime)
{
	preferredBackupTime_ = preferredBackupTime;
	setCoreParameter("PreferredBackupTime", preferredBackupTime);
}

std::string ModifyBackupPolicyRequest::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPeriod(const std::string& backupRetentionPeriod)
{
	backupRetentionPeriod_ = backupRetentionPeriod;
	setCoreParameter("BackupRetentionPeriod", backupRetentionPeriod);
}

std::string ModifyBackupPolicyRequest::getDuplicationContent()const
{
	return duplicationContent_;
}

void ModifyBackupPolicyRequest::setDuplicationContent(const std::string& duplicationContent)
{
	duplicationContent_ = duplicationContent;
	setCoreParameter("DuplicationContent", duplicationContent);
}

std::string ModifyBackupPolicyRequest::getHighSpaceUsageProtection()const
{
	return highSpaceUsageProtection_;
}

void ModifyBackupPolicyRequest::setHighSpaceUsageProtection(const std::string& highSpaceUsageProtection)
{
	highSpaceUsageProtection_ = highSpaceUsageProtection;
	setCoreParameter("HighSpaceUsageProtection", highSpaceUsageProtection);
}

std::string ModifyBackupPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyBackupPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyBackupPolicyRequest::getDuplicationLocation()const
{
	return duplicationLocation_;
}

void ModifyBackupPolicyRequest::setDuplicationLocation(const std::string& duplicationLocation)
{
	duplicationLocation_ = duplicationLocation;
	setCoreParameter("DuplicationLocation", duplicationLocation);
}

std::string ModifyBackupPolicyRequest::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setLogBackupRetentionPeriod(const std::string& logBackupRetentionPeriod)
{
	logBackupRetentionPeriod_ = logBackupRetentionPeriod;
	setCoreParameter("LogBackupRetentionPeriod", logBackupRetentionPeriod);
}

std::string ModifyBackupPolicyRequest::getEnableBackupLog()const
{
	return enableBackupLog_;
}

void ModifyBackupPolicyRequest::setEnableBackupLog(const std::string& enableBackupLog)
{
	enableBackupLog_ = enableBackupLog;
	setCoreParameter("EnableBackupLog", enableBackupLog);
}

std::string ModifyBackupPolicyRequest::getBackupPolicyMode()const
{
	return backupPolicyMode_;
}

void ModifyBackupPolicyRequest::setBackupPolicyMode(const std::string& backupPolicyMode)
{
	backupPolicyMode_ = backupPolicyMode;
	setCoreParameter("BackupPolicyMode", backupPolicyMode);
}

