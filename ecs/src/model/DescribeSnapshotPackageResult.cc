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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSnapshotPackages = value["SnapshotPackages"]["SnapshotPackage"];
	for (auto value : allSnapshotPackages)
	{
		SnapshotPackage snapshotPackagesObject;
		if(!value["StartTime"].isNull())
			snapshotPackagesObject.startTime = value["StartTime"].asString();
		if(!value["EndTime"].isNull())
			snapshotPackagesObject.endTime = value["EndTime"].asString();
		if(!value["InitCapacity"].isNull())
			snapshotPackagesObject.initCapacity = std::stol(value["InitCapacity"].asString());
		if(!value["DisplayName"].isNull())
			snapshotPackagesObject.displayName = value["DisplayName"].asString();
		snapshotPackages_.push_back(snapshotPackagesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

