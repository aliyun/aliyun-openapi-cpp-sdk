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

#include <alibabacloud/sas/model/DescribeUniBackupPolicyDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeUniBackupPolicyDetailResult::DescribeUniBackupPolicyDetailResult() :
	ServiceResult()
{}

DescribeUniBackupPolicyDetailResult::DescribeUniBackupPolicyDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUniBackupPolicyDetailResult::~DescribeUniBackupPolicyDetailResult()
{}

void DescribeUniBackupPolicyDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto uniBackupPolicyDTONode = value["UniBackupPolicyDTO"];
	if(!uniBackupPolicyDTONode["PolicyStatus"].isNull())
		uniBackupPolicyDTO_.policyStatus = uniBackupPolicyDTONode["PolicyStatus"].asString();
	if(!uniBackupPolicyDTONode["DatabaseType"].isNull())
		uniBackupPolicyDTO_.databaseType = uniBackupPolicyDTONode["DatabaseType"].asString();
	if(!uniBackupPolicyDTONode["UniBackUpCount"].isNull())
		uniBackupPolicyDTO_.uniBackUpCount = std::stoi(uniBackupPolicyDTONode["UniBackUpCount"].asString());
	if(!uniBackupPolicyDTONode["InstanceName"].isNull())
		uniBackupPolicyDTO_.instanceName = uniBackupPolicyDTONode["InstanceName"].asString();
	if(!uniBackupPolicyDTONode["Retention"].isNull())
		uniBackupPolicyDTO_.retention = std::stoi(uniBackupPolicyDTONode["Retention"].asString());
	if(!uniBackupPolicyDTONode["SpeedLimiter"].isNull())
		uniBackupPolicyDTO_.speedLimiter = std::stol(uniBackupPolicyDTONode["SpeedLimiter"].asString());
	if(!uniBackupPolicyDTONode["PolicyName"].isNull())
		uniBackupPolicyDTO_.policyName = uniBackupPolicyDTONode["PolicyName"].asString();
	if(!uniBackupPolicyDTONode["InstanceId"].isNull())
		uniBackupPolicyDTO_.instanceId = uniBackupPolicyDTONode["InstanceId"].asString();
	if(!uniBackupPolicyDTONode["PolicyId"].isNull())
		uniBackupPolicyDTO_.policyId = std::stol(uniBackupPolicyDTONode["PolicyId"].asString());
	if(!uniBackupPolicyDTONode["AgentStatus"].isNull())
		uniBackupPolicyDTO_.agentStatus = uniBackupPolicyDTONode["AgentStatus"].asString();
	if(!uniBackupPolicyDTONode["AccountName"].isNull())
		uniBackupPolicyDTO_.accountName = uniBackupPolicyDTONode["AccountName"].asString();
	auto fullPlanNode = uniBackupPolicyDTONode["FullPlan"];
	if(!fullPlanNode["StartTime"].isNull())
		uniBackupPolicyDTO_.fullPlan.startTime = fullPlanNode["StartTime"].asString();
	if(!fullPlanNode["PlanType"].isNull())
		uniBackupPolicyDTO_.fullPlan.planType = fullPlanNode["PlanType"].asString();
	if(!fullPlanNode["Interval"].isNull())
		uniBackupPolicyDTO_.fullPlan.interval = std::stoi(fullPlanNode["Interval"].asString());
		auto allDays = fullPlanNode["Days"]["day"];
		for (auto value : allDays)
			uniBackupPolicyDTO_.fullPlan.days.push_back(value.asString());
	auto incPlanNode = uniBackupPolicyDTONode["IncPlan"];
	if(!incPlanNode["StartTime"].isNull())
		uniBackupPolicyDTO_.incPlan.startTime = incPlanNode["StartTime"].asString();
	if(!incPlanNode["PlanType"].isNull())
		uniBackupPolicyDTO_.incPlan.planType = incPlanNode["PlanType"].asString();
	if(!incPlanNode["Interval"].isNull())
		uniBackupPolicyDTO_.incPlan.interval = std::stoi(incPlanNode["Interval"].asString());
		auto allDays1 = incPlanNode["Days"]["day"];
		for (auto value : allDays1)
			uniBackupPolicyDTO_.incPlan.days1.push_back(value.asString());

}

DescribeUniBackupPolicyDetailResult::UniBackupPolicyDTO DescribeUniBackupPolicyDetailResult::getUniBackupPolicyDTO()const
{
	return uniBackupPolicyDTO_;
}

