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

#include <alibabacloud/nas/model/DescribeAutoSnapshotPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::NAS;
using namespace AlibabaCloud::NAS::Model;

DescribeAutoSnapshotPoliciesResult::DescribeAutoSnapshotPoliciesResult() :
	ServiceResult()
{}

DescribeAutoSnapshotPoliciesResult::DescribeAutoSnapshotPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAutoSnapshotPoliciesResult::~DescribeAutoSnapshotPoliciesResult()
{}

void DescribeAutoSnapshotPoliciesResult::parse(const std::string &payload)
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
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["Status"].isNull())
			autoSnapshotPoliciesObject.status = valueAutoSnapshotPoliciesAutoSnapshotPolicy["Status"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["RepeatWeekdays"].isNull())
			autoSnapshotPoliciesObject.repeatWeekdays = valueAutoSnapshotPoliciesAutoSnapshotPolicy["RepeatWeekdays"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["AutoSnapshotPolicyName"].isNull())
			autoSnapshotPoliciesObject.autoSnapshotPolicyName = valueAutoSnapshotPoliciesAutoSnapshotPolicy["AutoSnapshotPolicyName"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["CreateTime"].isNull())
			autoSnapshotPoliciesObject.createTime = valueAutoSnapshotPoliciesAutoSnapshotPolicy["CreateTime"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["AutoSnapshotPolicyId"].isNull())
			autoSnapshotPoliciesObject.autoSnapshotPolicyId = valueAutoSnapshotPoliciesAutoSnapshotPolicy["AutoSnapshotPolicyId"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["RetentionDays"].isNull())
			autoSnapshotPoliciesObject.retentionDays = std::stoi(valueAutoSnapshotPoliciesAutoSnapshotPolicy["RetentionDays"].asString());
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["FileSystemNums"].isNull())
			autoSnapshotPoliciesObject.fileSystemNums = std::stoi(valueAutoSnapshotPoliciesAutoSnapshotPolicy["FileSystemNums"].asString());
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["RegionId"].isNull())
			autoSnapshotPoliciesObject.regionId = valueAutoSnapshotPoliciesAutoSnapshotPolicy["RegionId"].asString();
		if(!valueAutoSnapshotPoliciesAutoSnapshotPolicy["FileSystemType"].isNull())
			autoSnapshotPoliciesObject.fileSystemType = valueAutoSnapshotPoliciesAutoSnapshotPolicy["FileSystemType"].asString();
		autoSnapshotPolicies_.push_back(autoSnapshotPoliciesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeAutoSnapshotPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeAutoSnapshotPoliciesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeAutoSnapshotPoliciesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeAutoSnapshotPoliciesResult::AutoSnapshotPolicy> DescribeAutoSnapshotPoliciesResult::getAutoSnapshotPolicies()const
{
	return autoSnapshotPolicies_;
}

