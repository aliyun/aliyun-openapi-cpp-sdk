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

#include <alibabacloud/dds/model/DescribeAdvancedBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeAdvancedBackupPolicyResult::DescribeAdvancedBackupPolicyResult() :
	ServiceResult()
{}

DescribeAdvancedBackupPolicyResult::DescribeAdvancedBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAdvancedBackupPolicyResult::~DescribeAdvancedBackupPolicyResult()
{}

void DescribeAdvancedBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAdvancedBackupDataPoliciesNode = value["AdvancedBackupDataPolicies"]["AdvancedBackupPolicy"];
	for (auto valueAdvancedBackupDataPoliciesAdvancedBackupPolicy : allAdvancedBackupDataPoliciesNode)
	{
		AdvancedBackupPolicy advancedBackupDataPoliciesObject;
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["DestType"].isNull())
			advancedBackupDataPoliciesObject.destType = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["DestType"].asString();
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["PreferredBackupPeriod"].isNull())
			advancedBackupDataPoliciesObject.preferredBackupPeriod = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["PreferredBackupPeriod"].asString();
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["ActionType"].isNull())
			advancedBackupDataPoliciesObject.actionType = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["ActionType"].asString();
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["SrcRegion"].isNull())
			advancedBackupDataPoliciesObject.srcRegion = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["SrcRegion"].asString();
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["PreserveOneEachHour"].isNull())
			advancedBackupDataPoliciesObject.preserveOneEachHour = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["PreserveOneEachHour"].asString() == "true";
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["SrcType"].isNull())
			advancedBackupDataPoliciesObject.srcType = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["SrcType"].asString();
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["RetentionPeriod"].isNull())
			advancedBackupDataPoliciesObject.retentionPeriod = std::stoi(valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["RetentionPeriod"].asString());
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["DestRegion"].isNull())
			advancedBackupDataPoliciesObject.destRegion = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["DestRegion"].asString();
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["PolicyId"].isNull())
			advancedBackupDataPoliciesObject.policyId = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["PolicyId"].asString();
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["BackupPolicy"].isNull())
			advancedBackupDataPoliciesObject.backupPolicy = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["BackupPolicy"].asString();
		if(!valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["RetentionType"].isNull())
			advancedBackupDataPoliciesObject.retentionType = valueAdvancedBackupDataPoliciesAdvancedBackupPolicy["RetentionType"].asString();
		advancedBackupDataPolicies_.push_back(advancedBackupDataPoliciesObject);
	}
	auto allAdvancedBackupLogPoliciesNode = value["AdvancedBackupLogPolicies"]["AdvancedBackupLogPolicy"];
	for (auto valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy : allAdvancedBackupLogPoliciesNode)
	{
		AdvancedBackupLogPolicy advancedBackupLogPoliciesObject;
		if(!valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["DestType"].isNull())
			advancedBackupLogPoliciesObject.destType = valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["DestType"].asString();
		if(!valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["SrcRegion"].isNull())
			advancedBackupLogPoliciesObject.srcRegion = valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["SrcRegion"].asString();
		if(!valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["EnableLogBackup"].isNull())
			advancedBackupLogPoliciesObject.enableLogBackup = std::stoi(valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["EnableLogBackup"].asString());
		if(!valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["SrcType"].isNull())
			advancedBackupLogPoliciesObject.srcType = valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["SrcType"].asString();
		if(!valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["RetentionPeriod"].isNull())
			advancedBackupLogPoliciesObject.retentionPeriod = valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["RetentionPeriod"].asString();
		if(!valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["DestRegion"].isNull())
			advancedBackupLogPoliciesObject.destRegion = valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["DestRegion"].asString();
		if(!valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["PolicyId"].isNull())
			advancedBackupLogPoliciesObject.policyId = valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["PolicyId"].asString();
		if(!valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["RetentionType"].isNull())
			advancedBackupLogPoliciesObject.retentionType = valueAdvancedBackupLogPoliciesAdvancedBackupLogPolicy["RetentionType"].asString();
		advancedBackupLogPolicies_.push_back(advancedBackupLogPoliciesObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["SnapshotBackupType"].isNull())
		snapshotBackupType_ = value["SnapshotBackupType"].asString();
	if(!value["BackupRetentionPolicyOnClusterDeletion"].isNull())
		backupRetentionPolicyOnClusterDeletion_ = std::stoi(value["BackupRetentionPolicyOnClusterDeletion"].asString());
	if(!value["PreferredBackupTime"].isNull())
		preferredBackupTime_ = value["PreferredBackupTime"].asString();
	if(!value["BackupTamperProofEnabled"].isNull())
		backupTamperProofEnabled_ = value["BackupTamperProofEnabled"].asString() == "true";
	if(!value["PreferredNextBackupTime"].isNull())
		preferredNextBackupTime_ = value["PreferredNextBackupTime"].asString();

}

std::vector<DescribeAdvancedBackupPolicyResult::AdvancedBackupPolicy> DescribeAdvancedBackupPolicyResult::getAdvancedBackupDataPolicies()const
{
	return advancedBackupDataPolicies_;
}

std::string DescribeAdvancedBackupPolicyResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string DescribeAdvancedBackupPolicyResult::getSnapshotBackupType()const
{
	return snapshotBackupType_;
}

int DescribeAdvancedBackupPolicyResult::getBackupRetentionPolicyOnClusterDeletion()const
{
	return backupRetentionPolicyOnClusterDeletion_;
}

std::string DescribeAdvancedBackupPolicyResult::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

bool DescribeAdvancedBackupPolicyResult::getBackupTamperProofEnabled()const
{
	return backupTamperProofEnabled_;
}

std::string DescribeAdvancedBackupPolicyResult::getPreferredNextBackupTime()const
{
	return preferredNextBackupTime_;
}

std::vector<DescribeAdvancedBackupPolicyResult::AdvancedBackupLogPolicy> DescribeAdvancedBackupPolicyResult::getAdvancedBackupLogPolicies()const
{
	return advancedBackupLogPolicies_;
}

