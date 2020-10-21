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

#include <alibabacloud/sgw/model/DescribeBlockVolumeSnapshotsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

DescribeBlockVolumeSnapshotsResult::DescribeBlockVolumeSnapshotsResult() :
	ServiceResult()
{}

DescribeBlockVolumeSnapshotsResult::DescribeBlockVolumeSnapshotsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBlockVolumeSnapshotsResult::~DescribeBlockVolumeSnapshotsResult()
{}

void DescribeBlockVolumeSnapshotsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSnapshotsNode = value["Snapshots"]["Snapshot"];
	for (auto valueSnapshotsSnapshot : allSnapshotsNode)
	{
		Snapshot snapshotsObject;
		if(!valueSnapshotsSnapshot["SnapshotName"].isNull())
			snapshotsObject.snapshotName = valueSnapshotsSnapshot["SnapshotName"].asString();
		if(!valueSnapshotsSnapshot["CreateTime"].isNull())
			snapshotsObject.createTime = std::stol(valueSnapshotsSnapshot["CreateTime"].asString());
		if(!valueSnapshotsSnapshot["Size"].isNull())
			snapshotsObject.size = std::stol(valueSnapshotsSnapshot["Size"].asString());
		snapshots_.push_back(snapshotsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeBlockVolumeSnapshotsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeBlockVolumeSnapshotsResult::getMessage()const
{
	return message_;
}

int DescribeBlockVolumeSnapshotsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeBlockVolumeSnapshotsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeBlockVolumeSnapshotsResult::Snapshot> DescribeBlockVolumeSnapshotsResult::getSnapshots()const
{
	return snapshots_;
}

std::string DescribeBlockVolumeSnapshotsResult::getCode()const
{
	return code_;
}

bool DescribeBlockVolumeSnapshotsResult::getSuccess()const
{
	return success_;
}

