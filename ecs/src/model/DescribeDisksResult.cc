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
		Disk diskObject;
		diskObject.diskId = value["DiskId"].asString();
		diskObject.regionId = value["RegionId"].asString();
		diskObject.zoneId = value["ZoneId"].asString();
		diskObject.diskName = value["DiskName"].asString();
		diskObject.description = value["Description"].asString();
		diskObject.type = value["Type"].asString();
		diskObject.category = value["Category"].asString();
		diskObject.size = std::stoi(value["Size"].asString());
		diskObject.imageId = value["ImageId"].asString();
		diskObject.sourceSnapshotId = value["SourceSnapshotId"].asString();
		diskObject.autoSnapshotPolicyId = value["AutoSnapshotPolicyId"].asString();
		diskObject.productCode = value["ProductCode"].asString();
		diskObject.portable = std::stoi(value["Portable"].asString());
		diskObject.status = value["Status"].asString();
		diskObject.instanceId = value["InstanceId"].asString();
		diskObject.device = value["Device"].asString();
		diskObject.deleteWithInstance = std::stoi(value["DeleteWithInstance"].asString());
		diskObject.deleteAutoSnapshot = std::stoi(value["DeleteAutoSnapshot"].asString());
		diskObject.enableAutoSnapshot = std::stoi(value["EnableAutoSnapshot"].asString());
		diskObject.enableAutomatedSnapshotPolicy = std::stoi(value["EnableAutomatedSnapshotPolicy"].asString());
		diskObject.creationTime = value["CreationTime"].asString();
		diskObject.attachedTime = value["AttachedTime"].asString();
		diskObject.detachedTime = value["DetachedTime"].asString();
		diskObject.diskChargeType = value["DiskChargeType"].asString();
		diskObject.expiredTime = value["ExpiredTime"].asString();
		diskObject.resourceGroupId = value["ResourceGroupId"].asString();
		diskObject.encrypted = std::stoi(value["Encrypted"].asString());
		diskObject.mountInstanceNum = std::stoi(value["MountInstanceNum"].asString());
		diskObject.iOPS = std::stoi(value["IOPS"].asString());
		diskObject.iOPSRead = std::stoi(value["IOPSRead"].asString());
		diskObject.iOPSWrite = std::stoi(value["IOPSWrite"].asString());
		auto allOperationLocks = value["OperationLocks"]["OperationLock"];
		for (auto value : allOperationLocks)
		{
			Disk::OperationLock operationLockObject;
			operationLockObject.lockReason = value["LockReason"].asString();
			diskObject.operationLocks.push_back(operationLockObject);
		}
		auto allMountInstances = value["MountInstances"]["MountInstance"];
		for (auto value : allMountInstances)
		{
			Disk::MountInstance mountInstanceObject;
			mountInstanceObject.instanceId = value["InstanceId"].asString();
			mountInstanceObject.device = value["Device"].asString();
			mountInstanceObject.attachedTime = value["AttachedTime"].asString();
			diskObject.mountInstances.push_back(mountInstanceObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Disk::Tag tagObject;
			tagObject.tagKey = value["TagKey"].asString();
			tagObject.tagValue = value["TagValue"].asString();
			diskObject.tags.push_back(tagObject);
		}
		disks_.push_back(diskObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeDisksResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeDisksResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeDisksResult::getPageSize()const
{
	return pageSize_;
}

void DescribeDisksResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeDisksResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDisksResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

