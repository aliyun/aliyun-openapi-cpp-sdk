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

#include <alibabacloud/ecs/model/DescribeAutoSnapshotPolicyExResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeAutoSnapshotPolicyExResult::DescribeAutoSnapshotPolicyExResult() :
	ServiceResult()
{}

DescribeAutoSnapshotPolicyExResult::DescribeAutoSnapshotPolicyExResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoSnapshotPolicyExResult::~DescribeAutoSnapshotPolicyExResult()
{}

void DescribeAutoSnapshotPolicyExResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allAutoSnapshotPolicies = value["AutoSnapshotPolicies"]["AutoSnapshotPolicy"];
	for (auto value : allAutoSnapshotPolicies)
	{
		AutoSnapshotPolicy autoSnapshotPoliciesObject;
		if(!value["AutoSnapshotPolicyId"].isNull())
			autoSnapshotPoliciesObject.autoSnapshotPolicyId = value["AutoSnapshotPolicyId"].asString();
		if(!value["RegionId"].isNull())
			autoSnapshotPoliciesObject.regionId = value["RegionId"].asString();
		if(!value["AutoSnapshotPolicyName"].isNull())
			autoSnapshotPoliciesObject.autoSnapshotPolicyName = value["AutoSnapshotPolicyName"].asString();
		if(!value["TimePoints"].isNull())
			autoSnapshotPoliciesObject.timePoints = value["TimePoints"].asString();
		if(!value["RepeatWeekdays"].isNull())
			autoSnapshotPoliciesObject.repeatWeekdays = value["RepeatWeekdays"].asString();
		if(!value["RetentionDays"].isNull())
			autoSnapshotPoliciesObject.retentionDays = std::stoi(value["RetentionDays"].asString());
		if(!value["DiskNums"].isNull())
			autoSnapshotPoliciesObject.diskNums = std::stoi(value["DiskNums"].asString());
		if(!value["VolumeNums"].isNull())
			autoSnapshotPoliciesObject.volumeNums = std::stoi(value["VolumeNums"].asString());
		if(!value["CreationTime"].isNull())
			autoSnapshotPoliciesObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			autoSnapshotPoliciesObject.status = value["Status"].asString();
		autoSnapshotPolicies_.push_back(autoSnapshotPoliciesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeAutoSnapshotPolicyExResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAutoSnapshotPolicyExResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAutoSnapshotPolicyExResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAutoSnapshotPolicyExResult::AutoSnapshotPolicy> DescribeAutoSnapshotPolicyExResult::getAutoSnapshotPolicies()const
{
	return autoSnapshotPolicies_;
}

