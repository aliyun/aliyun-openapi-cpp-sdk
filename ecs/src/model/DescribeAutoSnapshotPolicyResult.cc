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
	auto autoSnapshotPolicyNode = value["AutoSnapshotPolicy"];
	if(!autoSnapshotPolicyNode["SystemDiskPolicyEnabled"].isNull())
		autoSnapshotPolicy_.systemDiskPolicyEnabled = autoSnapshotPolicyNode["SystemDiskPolicyEnabled"].asString();
	if(!autoSnapshotPolicyNode["SystemDiskPolicyTimePeriod"].isNull())
		autoSnapshotPolicy_.systemDiskPolicyTimePeriod = autoSnapshotPolicyNode["SystemDiskPolicyTimePeriod"].asString();
	if(!autoSnapshotPolicyNode["SystemDiskPolicyRetentionDays"].isNull())
		autoSnapshotPolicy_.systemDiskPolicyRetentionDays = autoSnapshotPolicyNode["SystemDiskPolicyRetentionDays"].asString();
	if(!autoSnapshotPolicyNode["SystemDiskPolicyRetentionLastWeek"].isNull())
		autoSnapshotPolicy_.systemDiskPolicyRetentionLastWeek = autoSnapshotPolicyNode["SystemDiskPolicyRetentionLastWeek"].asString();
	if(!autoSnapshotPolicyNode["DataDiskPolicyEnabled"].isNull())
		autoSnapshotPolicy_.dataDiskPolicyEnabled = autoSnapshotPolicyNode["DataDiskPolicyEnabled"].asString();
	if(!autoSnapshotPolicyNode["DataDiskPolicyTimePeriod"].isNull())
		autoSnapshotPolicy_.dataDiskPolicyTimePeriod = autoSnapshotPolicyNode["DataDiskPolicyTimePeriod"].asString();
	if(!autoSnapshotPolicyNode["DataDiskPolicyRetentionDays"].isNull())
		autoSnapshotPolicy_.dataDiskPolicyRetentionDays = autoSnapshotPolicyNode["DataDiskPolicyRetentionDays"].asString();
	if(!autoSnapshotPolicyNode["DataDiskPolicyRetentionLastWeek"].isNull())
		autoSnapshotPolicy_.dataDiskPolicyRetentionLastWeek = autoSnapshotPolicyNode["DataDiskPolicyRetentionLastWeek"].asString();
	auto autoSnapshotExcutionStatusNode = value["AutoSnapshotExcutionStatus"];
	if(!autoSnapshotExcutionStatusNode["SystemDiskExcutionStatus"].isNull())
		autoSnapshotExcutionStatus_.systemDiskExcutionStatus = autoSnapshotExcutionStatusNode["SystemDiskExcutionStatus"].asString();
	if(!autoSnapshotExcutionStatusNode["DataDiskExcutionStatus"].isNull())
		autoSnapshotExcutionStatus_.dataDiskExcutionStatus = autoSnapshotExcutionStatusNode["DataDiskExcutionStatus"].asString();
	if(!value["AutoSnapshotOccupation"].isNull())
		autoSnapshotOccupation_ = std::stoi(value["AutoSnapshotOccupation"].asString());

}

int DescribeAutoSnapshotPolicyResult::getAutoSnapshotOccupation()const
{
	return autoSnapshotOccupation_;
}

DescribeAutoSnapshotPolicyResult::AutoSnapshotExcutionStatus DescribeAutoSnapshotPolicyResult::getAutoSnapshotExcutionStatus()const
{
	return autoSnapshotExcutionStatus_;
}

DescribeAutoSnapshotPolicyResult::AutoSnapshotPolicy DescribeAutoSnapshotPolicyResult::getAutoSnapshotPolicy()const
{
	return autoSnapshotPolicy_;
}

