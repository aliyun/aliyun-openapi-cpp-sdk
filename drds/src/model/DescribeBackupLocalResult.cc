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

#include <alibabacloud/drds/model/DescribeBackupLocalResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeBackupLocalResult::DescribeBackupLocalResult() :
	ServiceResult()
{}

DescribeBackupLocalResult::DescribeBackupLocalResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBackupLocalResult::~DescribeBackupLocalResult()
{}

void DescribeBackupLocalResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto backupPolicyDONode = value["BackupPolicyDO"];
	if(!backupPolicyDONode["BackupDbName"].isNull())
		backupPolicyDO_.backupDbName = backupPolicyDONode["BackupDbName"].asString();
	if(!backupPolicyDONode["LogBackupRetentionPeriod"].isNull())
		backupPolicyDO_.logBackupRetentionPeriod = std::stol(backupPolicyDONode["LogBackupRetentionPeriod"].asString());
	if(!backupPolicyDONode["DataBackupRetentionPeriod"].isNull())
		backupPolicyDO_.dataBackupRetentionPeriod = std::stol(backupPolicyDONode["DataBackupRetentionPeriod"].asString());
	if(!backupPolicyDONode["BackupType"].isNull())
		backupPolicyDO_.backupType = backupPolicyDONode["BackupType"].asString();
	if(!backupPolicyDONode["BackupLevel"].isNull())
		backupPolicyDO_.backupLevel = backupPolicyDONode["BackupLevel"].asString();
	if(!backupPolicyDONode["LocalLogRetentionHours"].isNull())
		backupPolicyDO_.localLogRetentionHours = std::stol(backupPolicyDONode["LocalLogRetentionHours"].asString());
	if(!backupPolicyDONode["HighSpaceUsageProtection"].isNull())
		backupPolicyDO_.highSpaceUsageProtection = std::stol(backupPolicyDONode["HighSpaceUsageProtection"].asString());
	if(!backupPolicyDONode["GmtModified"].isNull())
		backupPolicyDO_.gmtModified = std::stol(backupPolicyDONode["GmtModified"].asString());
	if(!backupPolicyDONode["BackupRetentionPeriod"].isNull())
		backupPolicyDO_.backupRetentionPeriod = std::stol(backupPolicyDONode["BackupRetentionPeriod"].asString());
	if(!backupPolicyDONode["BackupPolicyMode"].isNull())
		backupPolicyDO_.backupPolicyMode = backupPolicyDONode["BackupPolicyMode"].asString();
	if(!backupPolicyDONode["PreferredBackupPeriod"].isNull())
		backupPolicyDO_.preferredBackupPeriod = backupPolicyDONode["PreferredBackupPeriod"].asString();
	if(!backupPolicyDONode["LocalLogRetentionSpace"].isNull())
		backupPolicyDO_.localLogRetentionSpace = std::stol(backupPolicyDONode["LocalLogRetentionSpace"].asString());
	if(!backupPolicyDONode["BackupAppName"].isNull())
		backupPolicyDO_.backupAppName = backupPolicyDONode["BackupAppName"].asString();
	if(!backupPolicyDONode["PreferredBackupTime"].isNull())
		backupPolicyDO_.preferredBackupTime = backupPolicyDONode["PreferredBackupTime"].asString();
	if(!backupPolicyDONode["GmtCreate"].isNull())
		backupPolicyDO_.gmtCreate = std::stol(backupPolicyDONode["GmtCreate"].asString());
	if(!backupPolicyDONode["BackupMode"].isNull())
		backupPolicyDO_.backupMode = backupPolicyDONode["BackupMode"].asString();
	if(!backupPolicyDONode["BackupLog"].isNull())
		backupPolicyDO_.backupLog = backupPolicyDONode["BackupLog"].asString();
	if(!backupPolicyDONode["NextBackupActuallyTime"].isNull())
		backupPolicyDO_.nextBackupActuallyTime = backupPolicyDONode["NextBackupActuallyTime"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeBackupLocalResult::BackupPolicyDO DescribeBackupLocalResult::getBackupPolicyDO()const
{
	return backupPolicyDO_;
}

bool DescribeBackupLocalResult::getSuccess()const
{
	return success_;
}

