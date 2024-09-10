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
	auto allDisksNode = value["Disks"]["Disk"];
	for (auto valueDisksDisk : allDisksNode)
	{
		Disk disksObject;
		if(!valueDisksDisk["SerialNumber"].isNull())
			disksObject.serialNumber = valueDisksDisk["SerialNumber"].asString();
		if(!valueDisksDisk["CreationTime"].isNull())
			disksObject.creationTime = valueDisksDisk["CreationTime"].asString();
		if(!valueDisksDisk["Status"].isNull())
			disksObject.status = valueDisksDisk["Status"].asString();
		if(!valueDisksDisk["Type"].isNull())
			disksObject.type = valueDisksDisk["Type"].asString();
		if(!valueDisksDisk["PerformanceLevel"].isNull())
			disksObject.performanceLevel = valueDisksDisk["PerformanceLevel"].asString();
		if(!valueDisksDisk["BdfId"].isNull())
			disksObject.bdfId = valueDisksDisk["BdfId"].asString();
		if(!valueDisksDisk["EnableAutoSnapshot"].isNull())
			disksObject.enableAutoSnapshot = valueDisksDisk["EnableAutoSnapshot"].asString() == "true";
		if(!valueDisksDisk["StorageSetId"].isNull())
			disksObject.storageSetId = valueDisksDisk["StorageSetId"].asString();
		if(!valueDisksDisk["StorageSetPartitionNumber"].isNull())
			disksObject.storageSetPartitionNumber = std::stoi(valueDisksDisk["StorageSetPartitionNumber"].asString());
		if(!valueDisksDisk["DiskId"].isNull())
			disksObject.diskId = valueDisksDisk["DiskId"].asString();
		if(!valueDisksDisk["DeleteAutoSnapshot"].isNull())
			disksObject.deleteAutoSnapshot = valueDisksDisk["DeleteAutoSnapshot"].asString() == "true";
		if(!valueDisksDisk["StorageClusterId"].isNull())
			disksObject.storageClusterId = valueDisksDisk["StorageClusterId"].asString();
		if(!valueDisksDisk["Encrypted"].isNull())
			disksObject.encrypted = valueDisksDisk["Encrypted"].asString() == "true";
		if(!valueDisksDisk["IOPSRead"].isNull())
			disksObject.iOPSRead = std::stoi(valueDisksDisk["IOPSRead"].asString());
		if(!valueDisksDisk["MountInstanceNum"].isNull())
			disksObject.mountInstanceNum = std::stoi(valueDisksDisk["MountInstanceNum"].asString());
		if(!valueDisksDisk["Description"].isNull())
			disksObject.description = valueDisksDisk["Description"].asString();
		if(!valueDisksDisk["Device"].isNull())
			disksObject.device = valueDisksDisk["Device"].asString();
		if(!valueDisksDisk["DiskName"].isNull())
			disksObject.diskName = valueDisksDisk["DiskName"].asString();
		if(!valueDisksDisk["Portable"].isNull())
			disksObject.portable = valueDisksDisk["Portable"].asString() == "true";
		if(!valueDisksDisk["ImageId"].isNull())
			disksObject.imageId = valueDisksDisk["ImageId"].asString();
		if(!valueDisksDisk["KMSKeyId"].isNull())
			disksObject.kMSKeyId = valueDisksDisk["KMSKeyId"].asString();
		if(!valueDisksDisk["DeleteWithInstance"].isNull())
			disksObject.deleteWithInstance = valueDisksDisk["DeleteWithInstance"].asString() == "true";
		if(!valueDisksDisk["DetachedTime"].isNull())
			disksObject.detachedTime = valueDisksDisk["DetachedTime"].asString();
		if(!valueDisksDisk["SourceSnapshotId"].isNull())
			disksObject.sourceSnapshotId = valueDisksDisk["SourceSnapshotId"].asString();
		if(!valueDisksDisk["AutoSnapshotPolicyId"].isNull())
			disksObject.autoSnapshotPolicyId = valueDisksDisk["AutoSnapshotPolicyId"].asString();
		if(!valueDisksDisk["EnableAutomatedSnapshotPolicy"].isNull())
			disksObject.enableAutomatedSnapshotPolicy = valueDisksDisk["EnableAutomatedSnapshotPolicy"].asString() == "true";
		if(!valueDisksDisk["IOPSWrite"].isNull())
			disksObject.iOPSWrite = std::stoi(valueDisksDisk["IOPSWrite"].asString());
		if(!valueDisksDisk["InstanceId"].isNull())
			disksObject.instanceId = valueDisksDisk["InstanceId"].asString();
		if(!valueDisksDisk["IOPS"].isNull())
			disksObject.iOPS = std::stoi(valueDisksDisk["IOPS"].asString());
		if(!valueDisksDisk["RegionId"].isNull())
			disksObject.regionId = valueDisksDisk["RegionId"].asString();
		if(!valueDisksDisk["ExpiredTime"].isNull())
			disksObject.expiredTime = valueDisksDisk["ExpiredTime"].asString();
		if(!valueDisksDisk["Size"].isNull())
			disksObject.size = std::stoi(valueDisksDisk["Size"].asString());
		if(!valueDisksDisk["ResourceGroupId"].isNull())
			disksObject.resourceGroupId = valueDisksDisk["ResourceGroupId"].asString();
		if(!valueDisksDisk["DiskChargeType"].isNull())
			disksObject.diskChargeType = valueDisksDisk["DiskChargeType"].asString();
		if(!valueDisksDisk["ZoneId"].isNull())
			disksObject.zoneId = valueDisksDisk["ZoneId"].asString();
		if(!valueDisksDisk["AttachedTime"].isNull())
			disksObject.attachedTime = valueDisksDisk["AttachedTime"].asString();
		if(!valueDisksDisk["Category"].isNull())
			disksObject.category = valueDisksDisk["Category"].asString();
		if(!valueDisksDisk["ProductCode"].isNull())
			disksObject.productCode = valueDisksDisk["ProductCode"].asString();
		if(!valueDisksDisk["MultiAttach"].isNull())
			disksObject.multiAttach = valueDisksDisk["MultiAttach"].asString();
		if(!valueDisksDisk["ProvisionedIops"].isNull())
			disksObject.provisionedIops = std::stol(valueDisksDisk["ProvisionedIops"].asString());
		if(!valueDisksDisk["BurstingEnabled"].isNull())
			disksObject.burstingEnabled = valueDisksDisk["BurstingEnabled"].asString() == "true";
		if(!valueDisksDisk["Throughput"].isNull())
			disksObject.throughput = std::stoi(valueDisksDisk["Throughput"].asString());
		if(!valueDisksDisk["ThroughputRead"].isNull())
			disksObject.throughputRead = std::stoi(valueDisksDisk["ThroughputRead"].asString());
		if(!valueDisksDisk["ThroughputWrite"].isNull())
			disksObject.throughputWrite = std::stoi(valueDisksDisk["ThroughputWrite"].asString());
		auto allOperationLocksNode = valueDisksDisk["OperationLocks"]["OperationLock"];
		for (auto valueDisksDiskOperationLocksOperationLock : allOperationLocksNode)
		{
			Disk::OperationLock operationLocksObject;
			if(!valueDisksDiskOperationLocksOperationLock["LockReason"].isNull())
				operationLocksObject.lockReason = valueDisksDiskOperationLocksOperationLock["LockReason"].asString();
			disksObject.operationLocks.push_back(operationLocksObject);
		}
		auto allMountInstancesNode = valueDisksDisk["MountInstances"]["MountInstance"];
		for (auto valueDisksDiskMountInstancesMountInstance : allMountInstancesNode)
		{
			Disk::MountInstance mountInstancesObject;
			if(!valueDisksDiskMountInstancesMountInstance["AttachedTime"].isNull())
				mountInstancesObject.attachedTime = valueDisksDiskMountInstancesMountInstance["AttachedTime"].asString();
			if(!valueDisksDiskMountInstancesMountInstance["InstanceId"].isNull())
				mountInstancesObject.instanceId = valueDisksDiskMountInstancesMountInstance["InstanceId"].asString();
			if(!valueDisksDiskMountInstancesMountInstance["Device"].isNull())
				mountInstancesObject.device = valueDisksDiskMountInstancesMountInstance["Device"].asString();
			disksObject.mountInstances.push_back(mountInstancesObject);
		}
		auto allTagsNode = valueDisksDisk["Tags"]["Tag"];
		for (auto valueDisksDiskTagsTag : allTagsNode)
		{
			Disk::Tag tagsObject;
			if(!valueDisksDiskTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueDisksDiskTagsTag["TagValue"].asString();
			if(!valueDisksDiskTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueDisksDiskTagsTag["TagKey"].asString();
			disksObject.tags.push_back(tagsObject);
		}
		auto allAttachmentsNode = valueDisksDisk["Attachments"]["Attachment"];
		for (auto valueDisksDiskAttachmentsAttachment : allAttachmentsNode)
		{
			Disk::Attachment attachmentsObject;
			if(!valueDisksDiskAttachmentsAttachment["InstanceId"].isNull())
				attachmentsObject.instanceId = valueDisksDiskAttachmentsAttachment["InstanceId"].asString();
			if(!valueDisksDiskAttachmentsAttachment["Device"].isNull())
				attachmentsObject.device = valueDisksDiskAttachmentsAttachment["Device"].asString();
			if(!valueDisksDiskAttachmentsAttachment["AttachedTime"].isNull())
				attachmentsObject.attachedTime = valueDisksDiskAttachmentsAttachment["AttachedTime"].asString();
			if(!valueDisksDiskAttachmentsAttachment["NsId"].isNull())
				attachmentsObject.nsId = std::stol(valueDisksDiskAttachmentsAttachment["NsId"].asString());
			if(!valueDisksDiskAttachmentsAttachment["Nguid"].isNull())
				attachmentsObject.nguid = valueDisksDiskAttachmentsAttachment["Nguid"].asString();
			if(!valueDisksDiskAttachmentsAttachment["Identifier"].isNull())
				attachmentsObject.identifier = valueDisksDiskAttachmentsAttachment["Identifier"].asString();
			if(!valueDisksDiskAttachmentsAttachment["TargetDevice"].isNull())
				attachmentsObject.targetDevice = valueDisksDiskAttachmentsAttachment["TargetDevice"].asString();
			if(!valueDisksDiskAttachmentsAttachment["AccessToken"].isNull())
				attachmentsObject.accessToken = valueDisksDiskAttachmentsAttachment["AccessToken"].asString();
			disksObject.attachments.push_back(attachmentsObject);
		}
		auto placementNode = value["Placement"];
		if(!placementNode["ZoneIds"].isNull())
			disksObject.placement.zoneIds = placementNode["ZoneIds"].asString();
		disks_.push_back(disksObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeDisksResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeDisksResult::getNextToken()const
{
	return nextToken_;
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

