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
	auto allSnapshotLinksNode = value["SnapshotLinks"]["SnapshotLink"];
	for (auto valueSnapshotLinksSnapshotLink : allSnapshotLinksNode)
	{
		SnapshotLink snapshotLinksObject;
		if(!valueSnapshotLinksSnapshotLink["InstantAccess"].isNull())
			snapshotLinksObject.instantAccess = valueSnapshotLinksSnapshotLink["InstantAccess"].asString() == "true";
		if(!valueSnapshotLinksSnapshotLink["TotalSize"].isNull())
			snapshotLinksObject.totalSize = std::stol(valueSnapshotLinksSnapshotLink["TotalSize"].asString());
		if(!valueSnapshotLinksSnapshotLink["SourceDiskName"].isNull())
			snapshotLinksObject.sourceDiskName = valueSnapshotLinksSnapshotLink["SourceDiskName"].asString();
		if(!valueSnapshotLinksSnapshotLink["SourceDiskSize"].isNull())
			snapshotLinksObject.sourceDiskSize = std::stoi(valueSnapshotLinksSnapshotLink["SourceDiskSize"].asString());
		if(!valueSnapshotLinksSnapshotLink["SourceDiskType"].isNull())
			snapshotLinksObject.sourceDiskType = valueSnapshotLinksSnapshotLink["SourceDiskType"].asString();
		if(!valueSnapshotLinksSnapshotLink["InstanceId"].isNull())
			snapshotLinksObject.instanceId = valueSnapshotLinksSnapshotLink["InstanceId"].asString();
		if(!valueSnapshotLinksSnapshotLink["SnapshotLinkId"].isNull())
			snapshotLinksObject.snapshotLinkId = valueSnapshotLinksSnapshotLink["SnapshotLinkId"].asString();
		if(!valueSnapshotLinksSnapshotLink["TotalCount"].isNull())
			snapshotLinksObject.totalCount = std::stoi(valueSnapshotLinksSnapshotLink["TotalCount"].asString());
		if(!valueSnapshotLinksSnapshotLink["RegionId"].isNull())
			snapshotLinksObject.regionId = valueSnapshotLinksSnapshotLink["RegionId"].asString();
		if(!valueSnapshotLinksSnapshotLink["SourceDiskId"].isNull())
			snapshotLinksObject.sourceDiskId = valueSnapshotLinksSnapshotLink["SourceDiskId"].asString();
		if(!valueSnapshotLinksSnapshotLink["InstanceName"].isNull())
			snapshotLinksObject.instanceName = valueSnapshotLinksSnapshotLink["InstanceName"].asString();
		if(!valueSnapshotLinksSnapshotLink["Category"].isNull())
			snapshotLinksObject.category = valueSnapshotLinksSnapshotLink["Category"].asString();
		snapshotLinks_.push_back(snapshotLinksObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeSnapshotLinksResult::SnapshotLink> DescribeSnapshotLinksResult::getSnapshotLinks()const
{
	return snapshotLinks_;
}

int DescribeSnapshotLinksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSnapshotLinksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSnapshotLinksResult::getPageNumber()const
{
	return pageNumber_;
}

