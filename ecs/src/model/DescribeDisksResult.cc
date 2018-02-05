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

#include <alibabacloud/ecs/model/DescribeDisksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDisksResult::DescribeDisksResult() :
	ServiceResult()
{}

DescribeDisksResult::DescribeDisksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDisksResult::~DescribeDisksResult()
{}

void DescribeDisksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDisks = value["Disks"]["Disk"];
	for (auto value : allDisks)
	{
		Disk disksObject;
		if(!value["DiskId"].isNull())
			disksObject.diskId = value["DiskId"].asString();
		if(!value["RegionId"].isNull())
			disksObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			disksObject.zoneId = value["ZoneId"].asString();
		if(!value["DiskName"].isNull())
			disksObject.diskName = value["DiskName"].asString();
		if(!value["Description"].isNull())
			disksObject.description = value["Description"].asString();
		if(!value["Type"].isNull())
			disksObject.type = value["Type"].asString();
		if(!value["Category"].isNull())
			disksObject.category = value["Category"].asString();
		if(!value["Size"].isNull())
			disksObject.size = std::stoi(value["Size"].asString());
		if(!value["ImageId"].isNull())
			disksObject.imageId = value["ImageId"].asString();
		if(!value["SourceSnapshotId"].isNull())
			disksObject.sourceSnapshotId = value["SourceSnapshotId"].asString();
		if(!value["AutoSnapshotPolicyId"].isNull())
			disksObject.autoSnapshotPolicyId = value["AutoSnapshotPolicyId"].asString();
		if(!value["ProductCode"].isNull())
			disksObject.productCode = value["ProductCode"].asString();
		if(!value["Portable"].isNull())
			disksObject.portable = value["Portable"].asString() == "true";
		if(!value["Status"].isNull())
			disksObject.status = value["Status"].asString();
		if(!value["InstanceId"].isNull())
			disksObject.instanceId = value["InstanceId"].asString();
		if(!value["Device"].isNull())
			disksObject.device = value["Device"].asString();
		if(!value["DeleteWithInstance"].isNull())
			disksObject.deleteWithInstance = value["DeleteWithInstance"].asString() == "true";
		if(!value["DeleteAutoSnapshot"].isNull())
			disksObject.deleteAutoSnapshot = value["DeleteAutoSnapshot"].asString() == "true";
		if(!value["EnableAutoSnapshot"].isNull())
			disksObject.enableAutoSnapshot = value["EnableAutoSnapshot"].asString() == "true";
		if(!value["EnableAutomatedSnapshotPolicy"].isNull())
			disksObject.enableAutomatedSnapshotPolicy = value["EnableAutomatedSnapshotPolicy"].asString() == "true";
		if(!value["CreationTime"].isNull())
			disksObject.creationTime = value["CreationTime"].asString();
		if(!value["AttachedTime"].isNull())
			disksObject.attachedTime = value["AttachedTime"].asString();
		if(!value["DetachedTime"].isNull())
			disksObject.detachedTime = value["DetachedTime"].asString();
		if(!value["DiskChargeType"].isNull())
			disksObject.diskChargeType = value["DiskChargeType"].asString();
		if(!value["ExpiredTime"].isNull())
			disksObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["ResourceGroupId"].isNull())
			disksObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["Encrypted"].isNull())
			disksObject.encrypted = value["Encrypted"].asString() == "true";
		if(!value["MountInstanceNum"].isNull())
			disksObject.mountInstanceNum = std::stoi(value["MountInstanceNum"].asString());
		if(!value["IOPS"].isNull())
			disksObject.iOPS = std::stoi(value["IOPS"].asString());
		if(!value["IOPSRead"].isNull())
			disksObject.iOPSRead = std::stoi(value["IOPSRead"].asString());
		if(!value["IOPSWrite"].isNull())
			disksObject.iOPSWrite = std::stoi(value["IOPSWrite"].asString());
		auto allOperationLocks = value["OperationLocks"]["OperationLock"];
		for (auto value : allOperationLocks)
		{
			Disk::OperationLock operationLocksObject;
			if(!value["LockReason"].isNull())
				operationLocksObject.lockReason = value["LockReason"].asString();
			disksObject.operationLocks.push_back(operationLocksObject);
		}
		auto allMountInstances = value["MountInstances"]["MountInstance"];
		for (auto value : allMountInstances)
		{
			Disk::MountInstance mountInstancesObject;
			if(!value["InstanceId"].isNull())
				mountInstancesObject.instanceId = value["InstanceId"].asString();
			if(!value["Device"].isNull())
				mountInstancesObject.device = value["Device"].asString();
			if(!value["AttachedTime"].isNull())
				mountInstancesObject.attachedTime = value["AttachedTime"].asString();
			disksObject.mountInstances.push_back(mountInstancesObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Disk::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			disksObject.tags.push_back(tagsObject);
		}
		disks_.push_back(disksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeDisksResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDisksResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDisksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDisksResult::Disk> DescribeDisksResult::getDisks()const
{
	return disks_;
}

