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

#include <alibabacloud/rds/model/DescribeRCDisksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCDisksResult::DescribeRCDisksResult() :
	ServiceResult()
{}

DescribeRCDisksResult::DescribeRCDisksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCDisksResult::~DescribeRCDisksResult()
{}

void DescribeRCDisksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDisksNode = value["Disks"]["Disk"];
	for (auto valueDisksDisk : allDisksNode)
	{
		Disk disksObject;
		if(!valueDisksDisk["Category"].isNull())
			disksObject.category = valueDisksDisk["Category"].asString();
		if(!valueDisksDisk["CreationTime"].isNull())
			disksObject.creationTime = valueDisksDisk["CreationTime"].asString();
		if(!valueDisksDisk["DeleteAutoSnapshot"].isNull())
			disksObject.deleteAutoSnapshot = valueDisksDisk["DeleteAutoSnapshot"].asString() == "true";
		if(!valueDisksDisk["DeleteWithInstance"].isNull())
			disksObject.deleteWithInstance = valueDisksDisk["DeleteWithInstance"].asString() == "true";
		if(!valueDisksDisk["Description"].isNull())
			disksObject.description = valueDisksDisk["Description"].asString();
		if(!valueDisksDisk["Device"].isNull())
			disksObject.device = valueDisksDisk["Device"].asString();
		if(!valueDisksDisk["DiskChargeType"].isNull())
			disksObject.diskChargeType = valueDisksDisk["DiskChargeType"].asString();
		if(!valueDisksDisk["DiskId"].isNull())
			disksObject.diskId = valueDisksDisk["DiskId"].asString();
		if(!valueDisksDisk["DiskName"].isNull())
			disksObject.diskName = valueDisksDisk["DiskName"].asString();
		if(!valueDisksDisk["Encrypted"].isNull())
			disksObject.encrypted = valueDisksDisk["Encrypted"].asString() == "true";
		if(!valueDisksDisk["ExpiredTime"].isNull())
			disksObject.expiredTime = valueDisksDisk["ExpiredTime"].asString();
		if(!valueDisksDisk["IOPS"].isNull())
			disksObject.iOPS = std::stol(valueDisksDisk["IOPS"].asString());
		if(!valueDisksDisk["ImageId"].isNull())
			disksObject.imageId = valueDisksDisk["ImageId"].asString();
		if(!valueDisksDisk["InstanceId"].isNull())
			disksObject.instanceId = valueDisksDisk["InstanceId"].asString();
		if(!valueDisksDisk["PerformanceLevel"].isNull())
			disksObject.performanceLevel = valueDisksDisk["PerformanceLevel"].asString();
		if(!valueDisksDisk["RegionId"].isNull())
			disksObject.regionId = valueDisksDisk["RegionId"].asString();
		if(!valueDisksDisk["ResourceGroupId"].isNull())
			disksObject.resourceGroupId = valueDisksDisk["ResourceGroupId"].asString();
		if(!valueDisksDisk["SerialNumber"].isNull())
			disksObject.serialNumber = valueDisksDisk["SerialNumber"].asString();
		if(!valueDisksDisk["Size"].isNull())
			disksObject.size = std::stol(valueDisksDisk["Size"].asString());
		if(!valueDisksDisk["SourceSnapshotId"].isNull())
			disksObject.sourceSnapshotId = valueDisksDisk["SourceSnapshotId"].asString();
		if(!valueDisksDisk["Status"].isNull())
			disksObject.status = valueDisksDisk["Status"].asString();
		if(!valueDisksDisk["StorageClusterId"].isNull())
			disksObject.storageClusterId = valueDisksDisk["StorageClusterId"].asString();
		if(!valueDisksDisk["StorageSetId"].isNull())
			disksObject.storageSetId = valueDisksDisk["StorageSetId"].asString();
		if(!valueDisksDisk["Type"].isNull())
			disksObject.type = valueDisksDisk["Type"].asString();
		if(!valueDisksDisk["ZoneId"].isNull())
			disksObject.zoneId = valueDisksDisk["ZoneId"].asString();
		auto allTagNode = valueDisksDisk["Tag"]["tagItem"];
		for (auto valueDisksDiskTagtagItem : allTagNode)
		{
			Disk::TagItem tagObject;
			if(!valueDisksDiskTagtagItem["TagKey"].isNull())
				tagObject.tagKey = valueDisksDiskTagtagItem["TagKey"].asString();
			if(!valueDisksDiskTagtagItem["TagValue"].isNull())
				tagObject.tagValue = valueDisksDiskTagtagItem["TagValue"].asString();
			disksObject.tag.push_back(tagObject);
		}
		disks_.push_back(disksObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeRCDisksResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeRCDisksResult::getPageSize()const
{
	return pageSize_;
}

long DescribeRCDisksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRCDisksResult::Disk> DescribeRCDisksResult::getDisks()const
{
	return disks_;
}

