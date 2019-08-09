<<<<<<< HEAD
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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
=======
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
>>>>>>> master
	auto allSnapshotLinks = value["SnapshotLinks"]["SnapshotLink"];
	for (auto value : allSnapshotLinks)
	{
		SnapshotLink snapshotLinksObject;
		if(!value["SnapshotLinkId"].isNull())
			snapshotLinksObject.snapshotLinkId = value["SnapshotLinkId"].asString();
		if(!value["RegionId"].isNull())
			snapshotLinksObject.regionId = value["RegionId"].asString();
		if(!value["InstanceId"].isNull())
			snapshotLinksObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			snapshotLinksObject.instanceName = value["InstanceName"].asString();
		if(!value["SourceDiskId"].isNull())
			snapshotLinksObject.sourceDiskId = value["SourceDiskId"].asString();
		if(!value["SourceDiskName"].isNull())
			snapshotLinksObject.sourceDiskName = value["SourceDiskName"].asString();
		if(!value["SourceDiskSize"].isNull())
			snapshotLinksObject.sourceDiskSize = std::stoi(value["SourceDiskSize"].asString());
		if(!value["SourceDiskType"].isNull())
			snapshotLinksObject.sourceDiskType = value["SourceDiskType"].asString();
		if(!value["TotalSize"].isNull())
			snapshotLinksObject.totalSize = std::stoi(value["TotalSize"].asString());
		if(!value["TotalCount"].isNull())
			snapshotLinksObject.totalCount = std::stoi(value["TotalCount"].asString());
		snapshotLinks_.push_back(snapshotLinksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

