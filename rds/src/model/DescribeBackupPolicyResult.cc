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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto duplicationLocationNode = value["DuplicationLocation"];
	if(!duplicationLocationNode["Sotrage"].isNull())
		duplicationLocation_.sotrage = duplicationLocationNode["Sotrage"].asString();
	auto locationNode = duplicationLocationNode["Location"];
	if(!locationNode["Endpoint"].isNull())
		duplicationLocation_.location.endpoint = locationNode["Endpoint"].asString();
	if(!locationNode["Bucket"].isNull())
		duplicationLocation_.location.bucket = locationNode["Bucket"].asString();
	if(!value["BackupRetentionPeriod"].isNull())
		backupRetentionPeriod_ = std::stoi(value["BackupRetentionPeriod"].asString());
	if(!value["PreferredNextBackupTime"].isNull())
		preferredNextBackupTime_ = value["PreferredNextBackupTime"].asString();
	if(!value["PreferredBackupTime"].isNull())
		preferredBackupTime_ = value["PreferredBackupTime"].asString();
	if(!value["PreferredBackupPeriod"].isNull())
		preferredBackupPeriod_ = value["PreferredBackupPeriod"].asString();
	if(!value["BackupLog"].isNull())
		backupLog_ = value["BackupLog"].asString();
	if(!value["LogBackupRetentionPeriod"].isNull())
		logBackupRetentionPeriod_ = std::stoi(value["LogBackupRetentionPeriod"].asString());
	if(!value["EnableBackupLog"].isNull())
		enableBackupLog_ = value["EnableBackupLog"].asString();
	if(!value["LocalLogRetentionHours"].isNull())
		localLogRetentionHours_ = std::stoi(value["LocalLogRetentionHours"].asString());
	if(!value["LocalLogRetentionSpace"].isNull())
		localLogRetentionSpace_ = value["LocalLogRetentionSpace"].asString();
	if(!value["Duplication"].isNull())
		duplication_ = value["Duplication"].asString();
	if(!value["DuplicationContent"].isNull())
		duplicationContent_ = value["DuplicationContent"].asString();
	if(!value["HighSpaceUsageProtection"].isNull())
		highSpaceUsageProtection_ = value["HighSpaceUsageProtection"].asString();
	if(!value["LogBackupFrequency"].isNull())
		logBackupFrequency_ = value["LogBackupFrequency"].asString();
	if(!value["CompressType"].isNull())
		compressType_ = value["CompressType"].asString();

}

std::string DescribeBackupPolicyResult::getDuplication()const
{
	return duplication_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

int DescribeBackupPolicyResult::getLocalLogRetentionHours()const
{
	return localLogRetentionHours_;
}

DescribeBackupPolicyResult::DuplicationLocation DescribeBackupPolicyResult::getDuplicationLocation()const
{
	return duplicationLocation_;
}

std::string DescribeBackupPolicyResult::getPreferredNextBackupTime()const
{
	return preferredNextBackupTime_;
}

std::string DescribeBackupPolicyResult::getHighSpaceUsageProtection()const
{
	return highSpaceUsageProtection_;
}

std::string DescribeBackupPolicyResult::getCompressType()const
{
	return compressType_;
}

std::string DescribeBackupPolicyResult::getLogBackupFrequency()const
{
	return logBackupFrequency_;
}

std::string DescribeBackupPolicyResult::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

int DescribeBackupPolicyResult::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getBackupLog()const
{
	return backupLog_;
}

std::string DescribeBackupPolicyResult::getEnableBackupLog()const
{
	return enableBackupLog_;
}

std::string DescribeBackupPolicyResult::getLocalLogRetentionSpace()const
{
	return localLogRetentionSpace_;
}

int DescribeBackupPolicyResult::getBackupRetentionPeriod()const
{
	return backupRetentionPeriod_;
}

std::string DescribeBackupPolicyResult::getDuplicationContent()const
{
	return duplicationContent_;
}

