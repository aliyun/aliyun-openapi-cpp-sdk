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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allAutoSnapshotPolicies = value["AutoSnapshotPolicies"]["AutoSnapshotPolicy"];
	for (auto value : allAutoSnapshotPolicies)
	{
		AutoSnapshotPolicy autoSnapshotPolicyObject;
		autoSnapshotPolicyObject.autoSnapshotPolicyId = value["AutoSnapshotPolicyId"].asString();
		autoSnapshotPolicyObject.regionId = value["RegionId"].asString();
		autoSnapshotPolicyObject.autoSnapshotPolicyName = value["AutoSnapshotPolicyName"].asString();
		autoSnapshotPolicyObject.timePoints = value["TimePoints"].asString();
		autoSnapshotPolicyObject.repeatWeekdays = value["RepeatWeekdays"].asString();
		autoSnapshotPolicyObject.retentionDays = std::stoi(value["RetentionDays"].asString());
		autoSnapshotPolicyObject.diskNums = std::stoi(value["DiskNums"].asString());
		autoSnapshotPolicyObject.volumeNums = std::stoi(value["VolumeNums"].asString());
		autoSnapshotPolicyObject.creationTime = value["CreationTime"].asString();
		autoSnapshotPolicyObject.status = value["Status"].asString();
		autoSnapshotPolicies_.push_back(autoSnapshotPolicyObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeAutoSnapshotPolicyExResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeAutoSnapshotPolicyExResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeAutoSnapshotPolicyExResult::getPageSize()const
{
	return pageSize_;
}

void DescribeAutoSnapshotPolicyExResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeAutoSnapshotPolicyExResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAutoSnapshotPolicyExResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

