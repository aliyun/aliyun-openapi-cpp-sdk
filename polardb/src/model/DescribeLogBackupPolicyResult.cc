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

#include <alibabacloud/polardb/model/DescribeLogBackupPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeLogBackupPolicyResult::DescribeLogBackupPolicyResult() :
	ServiceResult()
{}

DescribeLogBackupPolicyResult::DescribeLogBackupPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogBackupPolicyResult::~DescribeLogBackupPolicyResult()
{}

void DescribeLogBackupPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAdvancedLogPoliciesNode = value["AdvancedLogPolicies"]["AdvancedLogPolicy"];
	for (auto valueAdvancedLogPoliciesAdvancedLogPolicy : allAdvancedLogPoliciesNode)
	{
		AdvancedLogPolicy advancedLogPoliciesObject;
		if(!valueAdvancedLogPoliciesAdvancedLogPolicy["LogRetentionType"].isNull())
			advancedLogPoliciesObject.logRetentionType = valueAdvancedLogPoliciesAdvancedLogPolicy["LogRetentionType"].asString();
		if(!valueAdvancedLogPoliciesAdvancedLogPolicy["DestType"].isNull())
			advancedLogPoliciesObject.destType = valueAdvancedLogPoliciesAdvancedLogPolicy["DestType"].asString();
		if(!valueAdvancedLogPoliciesAdvancedLogPolicy["SrcRegion"].isNull())
			advancedLogPoliciesObject.srcRegion = valueAdvancedLogPoliciesAdvancedLogPolicy["SrcRegion"].asString();
		if(!valueAdvancedLogPoliciesAdvancedLogPolicy["EnableLogBackup"].isNull())
			advancedLogPoliciesObject.enableLogBackup = std::stoi(valueAdvancedLogPoliciesAdvancedLogPolicy["EnableLogBackup"].asString());
		if(!valueAdvancedLogPoliciesAdvancedLogPolicy["SrcType"].isNull())
			advancedLogPoliciesObject.srcType = valueAdvancedLogPoliciesAdvancedLogPolicy["SrcType"].asString();
		if(!valueAdvancedLogPoliciesAdvancedLogPolicy["PolicyId"].isNull())
			advancedLogPoliciesObject.policyId = valueAdvancedLogPoliciesAdvancedLogPolicy["PolicyId"].asString();
		if(!valueAdvancedLogPoliciesAdvancedLogPolicy["LogRetentionValue"].isNull())
			advancedLogPoliciesObject.logRetentionValue = valueAdvancedLogPoliciesAdvancedLogPolicy["LogRetentionValue"].asString();
		if(!valueAdvancedLogPoliciesAdvancedLogPolicy["DestRegion"].isNull())
			advancedLogPoliciesObject.destRegion = valueAdvancedLogPoliciesAdvancedLogPolicy["DestRegion"].asString();
		advancedLogPolicies_.push_back(advancedLogPoliciesObject);
	}
	if(!value["LogBackupRetentionPeriod"].isNull())
		logBackupRetentionPeriod_ = std::stoi(value["LogBackupRetentionPeriod"].asString());
	if(!value["LogBackupAnotherRegionRetentionPeriod"].isNull())
		logBackupAnotherRegionRetentionPeriod_ = value["LogBackupAnotherRegionRetentionPeriod"].asString();
	if(!value["LogBackupAnotherRegionRegion"].isNull())
		logBackupAnotherRegionRegion_ = value["LogBackupAnotherRegionRegion"].asString();
	if(!value["EnableBackupLog"].isNull())
		enableBackupLog_ = std::stoi(value["EnableBackupLog"].asString());

}

std::string DescribeLogBackupPolicyResult::getLogBackupAnotherRegionRegion()const
{
	return logBackupAnotherRegionRegion_;
}

int DescribeLogBackupPolicyResult::getLogBackupRetentionPeriod()const
{
	return logBackupRetentionPeriod_;
}

std::string DescribeLogBackupPolicyResult::getLogBackupAnotherRegionRetentionPeriod()const
{
	return logBackupAnotherRegionRetentionPeriod_;
}

int DescribeLogBackupPolicyResult::getEnableBackupLog()const
{
	return enableBackupLog_;
}

std::vector<DescribeLogBackupPolicyResult::AdvancedLogPolicy> DescribeLogBackupPolicyResult::getAdvancedLogPolicies()const
{
	return advancedLogPolicies_;
}

