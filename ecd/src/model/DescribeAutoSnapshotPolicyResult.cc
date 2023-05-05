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

#include <alibabacloud/ecd/model/DescribeAutoSnapshotPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

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
	auto allAutoSnapshotPoliciesNode = value["AutoSnapshotPolicies"]["AutoSnapshotPolicy"];
	for (auto valueAutoSnapshotPoliciesAutoSnapshotPolicy : allAutoSnapshotPoliciesNode)
	{
		AutoSnapshotPolicy autoSnapshotPoliciesObject;
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["TimePoints"].isNull())
			autoSnapshotPoliciesObject.timePoints = valueAutoSnapshotPoliciesAutoSnapshotPolicy["TimePoints"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["CreationTime"].isNull())
			autoSnapshotPoliciesObject.creationTime = valueAutoSnapshotPoliciesAutoSnapshotPolicy["CreationTime"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["Status"].isNull())
			autoSnapshotPoliciesObject.status = valueAutoSnapshotPoliciesAutoSnapshotPolicy["Status"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["DesktopNum"].isNull())
			autoSnapshotPoliciesObject.desktopNum = std::stoi(valueAutoSnapshotPoliciesAutoSnapshotPolicy["DesktopNum"].asString());
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["CronExpression"].isNull())
			autoSnapshotPoliciesObject.cronExpression = valueAutoSnapshotPoliciesAutoSnapshotPolicy["CronExpression"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["RetentionDays"].isNull())
			autoSnapshotPoliciesObject.retentionDays = valueAutoSnapshotPoliciesAutoSnapshotPolicy["RetentionDays"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["PolicyName"].isNull())
			autoSnapshotPoliciesObject.policyName = valueAutoSnapshotPoliciesAutoSnapshotPolicy["PolicyName"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["PolicyId"].isNull())
			autoSnapshotPoliciesObject.policyId = valueAutoSnapshotPoliciesAutoSnapshotPolicy["PolicyId"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["RegionId"].isNull())
			autoSnapshotPoliciesObject.regionId = valueAutoSnapshotPoliciesAutoSnapshotPolicy["RegionId"].asString();
		autoSnapshotPolicies_.push_back(autoSnapshotPoliciesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeAutoSnapshotPolicyResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeAutoSnapshotPolicyResult::AutoSnapshotPolicy> DescribeAutoSnapshotPolicyResult::getAutoSnapshotPolicies()const
{
	return autoSnapshotPolicies_;
}

