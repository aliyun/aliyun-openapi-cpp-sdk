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

#include <alibabacloud/rds/model/ModifyBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyBackupPolicyResult::ModifyBackupPolicyResult() :
	ServiceResult()
{}

ModifyBackupPolicyResult::ModifyBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyBackupPolicyResult::~ModifyBackupPolicyResult()
{}

void ModifyBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["CompressType"].isNull())
		compressType_ = value["CompressType"].asString();
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = value["DBInstanceID"].asString();
	if(!value["EnableBackupLog"].isNull())
		enableBackupLog_ = value["EnableBackupLog"].asString();
	if(!value["HighSpaceUsageProtection"].isNull())
		highSpaceUsageProtection_ = value["HighSpaceUsageProtection"].asString();
	if(!value["LocalLogRetentionHours"].isNull())
		localLogRetentionHours_ = std::stoi(value["LocalLogRetentionHours"].asString());
	if(!value["LocalLogRetentionSpace"].isNull())
		localLogRetentionSpace_ = value["LocalLogRetentionSpace"].asString();
	if(!value["LogBackupLocalRetentionNumber"].isNull())
		logBackupLocalRetentionNumber_ = std::stoi(value["LogBackupLocalRetentionNumber"].asString());

}

int ModifyBackupPolicyResult::getLogBackupLocalRetentionNumber()const
{
	return logBackupLocalRetentionNumber_;
}

std::string ModifyBackupPolicyResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string ModifyBackupPolicyResult::getEnableBackupLog()const
{
	return enableBackupLog_;
}

int ModifyBackupPolicyResult::getLocalLogRetentionHours()const
{
	return localLogRetentionHours_;
}

std::string ModifyBackupPolicyResult::getLocalLogRetentionSpace()const
{
	return localLogRetentionSpace_;
}

std::string ModifyBackupPolicyResult::getHighSpaceUsageProtection()const
{
	return highSpaceUsageProtection_;
}

std::string ModifyBackupPolicyResult::getCompressType()const
{
	return compressType_;
}

