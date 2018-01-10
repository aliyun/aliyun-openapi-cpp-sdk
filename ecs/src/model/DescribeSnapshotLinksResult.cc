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

#include <alibabacloud/ecs/model/DescribeSnapshotLinksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSnapshotLinksResult::DescribeSnapshotLinksResult() :
	ServiceResult()
{}

DescribeSnapshotLinksResult::DescribeSnapshotLinksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSnapshotLinksResult::~DescribeSnapshotLinksResult()
{}

void DescribeSnapshotLinksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allSnapshotLinks = value["SnapshotLinks"]["SnapshotLink"];
	for (auto value : allSnapshotLinks)
	{
		SnapshotLink snapshotLinkObject;
		snapshotLinkObject.snapshotLinkId = value["SnapshotLinkId"].asString();
		snapshotLinkObject.regionId = value["RegionId"].asString();
		snapshotLinkObject.instanceId = value["InstanceId"].asString();
		snapshotLinkObject.instanceName = value["InstanceName"].asString();
		snapshotLinkObject.sourceDiskId = value["SourceDiskId"].asString();
		snapshotLinkObject.sourceDiskSize = std::stoi(value["SourceDiskSize"].asString());
		snapshotLinkObject.sourceDiskType = value["SourceDiskType"].asString();
		snapshotLinkObject.totalSize = std::stoi(value["TotalSize"].asString());
		snapshotLinkObject.totalCount = std::stoi(value["TotalCount"].asString());
		snapshotLinks_.push_back(snapshotLinkObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeSnapshotLinksResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeSnapshotLinksResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeSnapshotLinksResult::getPageSize()const
{
	return pageSize_;
}

void DescribeSnapshotLinksResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeSnapshotLinksResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnapshotLinksResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

