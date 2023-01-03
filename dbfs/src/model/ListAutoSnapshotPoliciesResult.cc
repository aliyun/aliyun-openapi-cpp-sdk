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

#include <alibabacloud/dbfs/model/ListAutoSnapshotPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

ListAutoSnapshotPoliciesResult::ListAutoSnapshotPoliciesResult() :
	ServiceResult()
{}

ListAutoSnapshotPoliciesResult::ListAutoSnapshotPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAutoSnapshotPoliciesResult::~ListAutoSnapshotPoliciesResult()
{}

void ListAutoSnapshotPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotPoliciesNode = value["SnapshotPolicies"]["SnapshotPoliciesItem"];
	for (auto valueSnapshotPoliciesSnapshotPoliciesItem : allSnapshotPoliciesNode)
	{
		SnapshotPoliciesItem snapshotPoliciesObject;
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["PolicyId"].isNull())
			snapshotPoliciesObject.policyId = valueSnapshotPoliciesSnapshotPoliciesItem["PolicyId"].asString();
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["PolicyName"].isNull())
			snapshotPoliciesObject.policyName = valueSnapshotPoliciesSnapshotPoliciesItem["PolicyName"].asString();
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["AccountId"].isNull())
			snapshotPoliciesObject.accountId = valueSnapshotPoliciesSnapshotPoliciesItem["AccountId"].asString();
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["RegionId"].isNull())
			snapshotPoliciesObject.regionId = valueSnapshotPoliciesSnapshotPoliciesItem["RegionId"].asString();
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["Status"].isNull())
			snapshotPoliciesObject.status = valueSnapshotPoliciesSnapshotPoliciesItem["Status"].asString();
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["StatusDetail"].isNull())
			snapshotPoliciesObject.statusDetail = valueSnapshotPoliciesSnapshotPoliciesItem["StatusDetail"].asString();
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["RetentionDays"].isNull())
			snapshotPoliciesObject.retentionDays = std::stoi(valueSnapshotPoliciesSnapshotPoliciesItem["RetentionDays"].asString());
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["AppliedDbfsNumber"].isNull())
			snapshotPoliciesObject.appliedDbfsNumber = std::stoi(valueSnapshotPoliciesSnapshotPoliciesItem["AppliedDbfsNumber"].asString());
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["CreatedTime"].isNull())
			snapshotPoliciesObject.createdTime = valueSnapshotPoliciesSnapshotPoliciesItem["CreatedTime"].asString();
		if(!valueSnapshotPoliciesSnapshotPoliciesItem["LastModified"].isNull())
			snapshotPoliciesObject.lastModified = valueSnapshotPoliciesSnapshotPoliciesItem["LastModified"].asString();
		auto allRepeatWeekdays = value["RepeatWeekdays"]["RepeatWeekdays"];
		for (auto value : allRepeatWeekdays)
			snapshotPoliciesObject.repeatWeekdays.push_back(value.asString());
		auto allTimePoints = value["TimePoints"]["TimePoints"];
		for (auto value : allTimePoints)
			snapshotPoliciesObject.timePoints.push_back(value.asString());
		snapshotPolicies_.push_back(snapshotPoliciesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListAutoSnapshotPoliciesResult::getTotalCount()const
{
	return totalCount_;
}

int ListAutoSnapshotPoliciesResult::getPageSize()const
{
	return pageSize_;
}

int ListAutoSnapshotPoliciesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAutoSnapshotPoliciesResult::SnapshotPoliciesItem> ListAutoSnapshotPoliciesResult::getSnapshotPolicies()const
{
	return snapshotPolicies_;
}

