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

#include <alibabacloud/ecs/model/DescribeAutoSnapshotPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAutoSnapshotPolicyResult::DescribeAutoSnapshotPolicyResult() :
	ServiceResult()
{}

DescribeAutoSnapshotPolicyResult::DescribeAutoSnapshotPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoSnapshotPolicyResult::~DescribeAutoSnapshotPolicyResult()
{}

void DescribeAutoSnapshotPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAutoSnapshotPolicy = value["AutoSnapshotPolicy"];
	for (auto value : allAutoSnapshotPolicy)
	{
		AutoSnapshotPolicy autoSnapshotPolicyObject;
		if(!value["SystemDiskPolicyEnabled"].isNull())
			autoSnapshotPolicyObject.systemDiskPolicyEnabled = value["SystemDiskPolicyEnabled"].asString();
		if(!value["SystemDiskPolicyTimePeriod"].isNull())
			autoSnapshotPolicyObject.systemDiskPolicyTimePeriod = value["SystemDiskPolicyTimePeriod"].asString();
		if(!value["SystemDiskPolicyRetentionDays"].isNull())
			autoSnapshotPolicyObject.systemDiskPolicyRetentionDays = value["SystemDiskPolicyRetentionDays"].asString();
		if(!value["SystemDiskPolicyRetentionLastWeek"].isNull())
			autoSnapshotPolicyObject.systemDiskPolicyRetentionLastWeek = value["SystemDiskPolicyRetentionLastWeek"].asString();
		if(!value["DataDiskPolicyEnabled"].isNull())
			autoSnapshotPolicyObject.dataDiskPolicyEnabled = value["DataDiskPolicyEnabled"].asString();
		if(!value["DataDiskPolicyTimePeriod"].isNull())
			autoSnapshotPolicyObject.dataDiskPolicyTimePeriod = value["DataDiskPolicyTimePeriod"].asString();
		if(!value["DataDiskPolicyRetentionDays"].isNull())
			autoSnapshotPolicyObject.dataDiskPolicyRetentionDays = value["DataDiskPolicyRetentionDays"].asString();
		if(!value["DataDiskPolicyRetentionLastWeek"].isNull())
			autoSnapshotPolicyObject.dataDiskPolicyRetentionLastWeek = value["DataDiskPolicyRetentionLastWeek"].asString();
		autoSnapshotPolicy_.push_back(autoSnapshotPolicyObject);
	}
	auto allAutoSnapshotExcutionStatus = value["AutoSnapshotExcutionStatus"];
	for (auto value : allAutoSnapshotExcutionStatus)
	{
		AutoSnapshotExcutionStatus autoSnapshotExcutionStatusObject;
		if(!value["SystemDiskExcutionStatus"].isNull())
			autoSnapshotExcutionStatusObject.systemDiskExcutionStatus = value["SystemDiskExcutionStatus"].asString();
		if(!value["DataDiskExcutionStatus"].isNull())
			autoSnapshotExcutionStatusObject.dataDiskExcutionStatus = value["DataDiskExcutionStatus"].asString();
		autoSnapshotExcutionStatus_.push_back(autoSnapshotExcutionStatusObject);
	}
	if(!value["AutoSnapshotOccupation"].isNull())
		autoSnapshotOccupation_ = std::stoi(value["AutoSnapshotOccupation"].asString());

}

int DescribeAutoSnapshotPolicyResult::getAutoSnapshotOccupation()const
{
	return autoSnapshotOccupation_;
}

std::vector<DescribeAutoSnapshotPolicyResult::AutoSnapshotExcutionStatus> DescribeAutoSnapshotPolicyResult::getAutoSnapshotExcutionStatus()const
{
	return autoSnapshotExcutionStatus_;
}

std::vector<DescribeAutoSnapshotPolicyResult::AutoSnapshotPolicy> DescribeAutoSnapshotPolicyResult::getAutoSnapshotPolicy()const
{
	return autoSnapshotPolicy_;
}

