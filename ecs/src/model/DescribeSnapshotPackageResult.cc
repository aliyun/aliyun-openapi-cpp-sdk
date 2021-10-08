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

#include <alibabacloud/ecs/model/DescribeSnapshotPackageResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSnapshotPackageResult::DescribeSnapshotPackageResult() :
	ServiceResult()
{}

DescribeSnapshotPackageResult::DescribeSnapshotPackageResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnapshotPackageResult::~DescribeSnapshotPackageResult()
{}

void DescribeSnapshotPackageResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotPackagesNode = value["SnapshotPackages"]["SnapshotPackage"];
	for (auto valueSnapshotPackagesSnapshotPackage : allSnapshotPackagesNode)
	{
		SnapshotPackage snapshotPackagesObject;
		if(!valueSnapshotPackagesSnapshotPackage["DisplayName"].isNull())
			snapshotPackagesObject.displayName = valueSnapshotPackagesSnapshotPackage["DisplayName"].asString();
		if(!valueSnapshotPackagesSnapshotPackage["EndTime"].isNull())
			snapshotPackagesObject.endTime = valueSnapshotPackagesSnapshotPackage["EndTime"].asString();
		if(!valueSnapshotPackagesSnapshotPackage["StartTime"].isNull())
			snapshotPackagesObject.startTime = valueSnapshotPackagesSnapshotPackage["StartTime"].asString();
		if(!valueSnapshotPackagesSnapshotPackage["InitCapacity"].isNull())
			snapshotPackagesObject.initCapacity = std::stol(valueSnapshotPackagesSnapshotPackage["InitCapacity"].asString());
		snapshotPackages_.push_back(snapshotPackagesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSnapshotPackageResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSnapshotPackageResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSnapshotPackageResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSnapshotPackageResult::SnapshotPackage> DescribeSnapshotPackageResult::getSnapshotPackages()const
{
	return snapshotPackages_;
}

