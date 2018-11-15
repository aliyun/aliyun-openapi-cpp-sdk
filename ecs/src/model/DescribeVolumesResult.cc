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

#include <alibabacloud/ecs/model/DescribeVolumesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeVolumesResult::DescribeVolumesResult() :
	ServiceResult()
{}

DescribeVolumesResult::DescribeVolumesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVolumesResult::~DescribeVolumesResult()
{}

void DescribeVolumesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVolumes = value["Volumes"]["Volume"];
	for (auto value : allVolumes)
	{
		Volume volumesObject;
		if(!value["VolumeId"].isNull())
			volumesObject.volumeId = value["VolumeId"].asString();
		if(!value["RegionId"].isNull())
			volumesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			volumesObject.zoneId = value["ZoneId"].asString();
		if(!value["VolumeName"].isNull())
			volumesObject.volumeName = value["VolumeName"].asString();
		if(!value["Description"].isNull())
			volumesObject.description = value["Description"].asString();
		if(!value["Category"].isNull())
			volumesObject.category = value["Category"].asString();
		if(!value["Size"].isNull())
			volumesObject.size = std::stoi(value["Size"].asString());
		if(!value["SourceSnapshotId"].isNull())
			volumesObject.sourceSnapshotId = value["SourceSnapshotId"].asString();
		if(!value["AutoSnapshotPolicyId"].isNull())
			volumesObject.autoSnapshotPolicyId = value["AutoSnapshotPolicyId"].asString();
		if(!value["SnapshotLinkId"].isNull())
			volumesObject.snapshotLinkId = value["SnapshotLinkId"].asString();
		if(!value["Status"].isNull())
			volumesObject.status = value["Status"].asString();
		if(!value["EnableAutomatedSnapshotPolicy"].isNull())
			volumesObject.enableAutomatedSnapshotPolicy = value["EnableAutomatedSnapshotPolicy"].asString() == "true";
		if(!value["CreationTime"].isNull())
			volumesObject.creationTime = value["CreationTime"].asString();
		if(!value["VolumeChargeType"].isNull())
			volumesObject.volumeChargeType = value["VolumeChargeType"].asString();
		if(!value["MountInstanceNum"].isNull())
			volumesObject.mountInstanceNum = std::stoi(value["MountInstanceNum"].asString());
		if(!value["Encrypted"].isNull())
			volumesObject.encrypted = value["Encrypted"].asString() == "true";
		auto allOperationLocks = value["OperationLocks"]["OperationLock"];
		for (auto value : allOperationLocks)
		{
			Volume::OperationLock operationLocksObject;
			if(!value["LockReason"].isNull())
				operationLocksObject.lockReason = value["LockReason"].asString();
			volumesObject.operationLocks.push_back(operationLocksObject);
		}
		auto allMountInstances = value["MountInstances"]["MountInstance"];
		for (auto value : allMountInstances)
		{
			Volume::MountInstance mountInstancesObject;
			if(!value["InstanceId"].isNull())
				mountInstancesObject.instanceId = value["InstanceId"].asString();
			if(!value["Device"].isNull())
				mountInstancesObject.device = value["Device"].asString();
			if(!value["AttachedTime"].isNull())
				mountInstancesObject.attachedTime = value["AttachedTime"].asString();
			volumesObject.mountInstances.push_back(mountInstancesObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Volume::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			volumesObject.tags.push_back(tagsObject);
		}
		volumes_.push_back(volumesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVolumesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeVolumesResult::Volume> DescribeVolumesResult::getVolumes()const
{
	return volumes_;
}

int DescribeVolumesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVolumesResult::getPageNumber()const
{
	return pageNumber_;
}

