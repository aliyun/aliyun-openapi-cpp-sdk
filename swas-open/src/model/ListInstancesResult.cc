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

#include <alibabacloud/swas-open/model/ListInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

ListInstancesResult::ListInstancesResult() :
	ServiceResult()
{}

ListInstancesResult::ListInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInstancesResult::~ListInstancesResult()
{}

void ListInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["Status"].isNull())
			instancesObject.status = valueInstancesInstance["Status"].asString();
		if(!valueInstancesInstance["CreationTime"].isNull())
			instancesObject.creationTime = valueInstancesInstance["CreationTime"].asString();
		if(!valueInstancesInstance["InnerIpAddress"].isNull())
			instancesObject.innerIpAddress = valueInstancesInstance["InnerIpAddress"].asString();
		if(!valueInstancesInstance["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesInstance["ChargeType"].asString();
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		if(!valueInstancesInstance["PlanId"].isNull())
			instancesObject.planId = valueInstancesInstance["PlanId"].asString();
		if(!valueInstancesInstance["PublicIpAddress"].isNull())
			instancesObject.publicIpAddress = valueInstancesInstance["PublicIpAddress"].asString();
		if(!valueInstancesInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesInstance["RegionId"].asString();
		if(!valueInstancesInstance["ExpiredTime"].isNull())
			instancesObject.expiredTime = valueInstancesInstance["ExpiredTime"].asString();
		if(!valueInstancesInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesInstance["InstanceName"].asString();
		if(!valueInstancesInstance["BusinessStatus"].isNull())
			instancesObject.businessStatus = valueInstancesInstance["BusinessStatus"].asString();
		if(!valueInstancesInstance["DdosStatus"].isNull())
			instancesObject.ddosStatus = valueInstancesInstance["DdosStatus"].asString();
		if(!valueInstancesInstance["ImageId"].isNull())
			instancesObject.imageId = valueInstancesInstance["ImageId"].asString();
		if(!valueInstancesInstance["DisableReason"].isNull())
			instancesObject.disableReason = valueInstancesInstance["DisableReason"].asString();
		if(!valueInstancesInstance["Combination"].isNull())
			instancesObject.combination = valueInstancesInstance["Combination"].asString() == "true";
		if(!valueInstancesInstance["CombinationInstanceId"].isNull())
			instancesObject.combinationInstanceId = valueInstancesInstance["CombinationInstanceId"].asString();
		if(!valueInstancesInstance["Uuid"].isNull())
			instancesObject.uuid = valueInstancesInstance["Uuid"].asString();
		if(!valueInstancesInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesInstance["ResourceGroupId"].asString();
		if(!valueInstancesInstance["PlanType"].isNull())
			instancesObject.planType = valueInstancesInstance["PlanType"].asString();
		auto allTagsNode = valueInstancesInstance["Tags"]["tag"];
		for (auto valueInstancesInstanceTagstag : allTagsNode)
		{
			Instance::Tag tagsObject;
			if(!valueInstancesInstanceTagstag["Key"].isNull())
				tagsObject.key = valueInstancesInstanceTagstag["Key"].asString();
			if(!valueInstancesInstanceTagstag["Value"].isNull())
				tagsObject.value = valueInstancesInstanceTagstag["Value"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		auto allDisksNode = valueInstancesInstance["Disks"]["disk"];
		for (auto valueInstancesInstanceDisksdisk : allDisksNode)
		{
			Instance::Disk disksObject;
			if(!valueInstancesInstanceDisksdisk["CreationTime"].isNull())
				disksObject.creationTime = valueInstancesInstanceDisksdisk["CreationTime"].asString();
			if(!valueInstancesInstanceDisksdisk["Status"].isNull())
				disksObject.status = valueInstancesInstanceDisksdisk["Status"].asString();
			if(!valueInstancesInstanceDisksdisk["Device"].isNull())
				disksObject.device = valueInstancesInstanceDisksdisk["Device"].asString();
			if(!valueInstancesInstanceDisksdisk["Size"].isNull())
				disksObject.size = std::stoi(valueInstancesInstanceDisksdisk["Size"].asString());
			if(!valueInstancesInstanceDisksdisk["DiskName"].isNull())
				disksObject.diskName = valueInstancesInstanceDisksdisk["DiskName"].asString();
			if(!valueInstancesInstanceDisksdisk["DiskChargeType"].isNull())
				disksObject.diskChargeType = valueInstancesInstanceDisksdisk["DiskChargeType"].asString();
			if(!valueInstancesInstanceDisksdisk["DiskType"].isNull())
				disksObject.diskType = valueInstancesInstanceDisksdisk["DiskType"].asString();
			if(!valueInstancesInstanceDisksdisk["Category"].isNull())
				disksObject.category = valueInstancesInstanceDisksdisk["Category"].asString();
			if(!valueInstancesInstanceDisksdisk["DiskId"].isNull())
				disksObject.diskId = valueInstancesInstanceDisksdisk["DiskId"].asString();
			if(!valueInstancesInstanceDisksdisk["RegionId"].isNull())
				disksObject.regionId = valueInstancesInstanceDisksdisk["RegionId"].asString();
			if(!valueInstancesInstanceDisksdisk["Remark"].isNull())
				disksObject.remark = valueInstancesInstanceDisksdisk["Remark"].asString();
			if(!valueInstancesInstanceDisksdisk["ResourceGroupId"].isNull())
				disksObject.resourceGroupId = valueInstancesInstanceDisksdisk["ResourceGroupId"].asString();
			auto allDiskTagsNode = valueInstancesInstanceDisksdisk["DiskTags"]["tag"];
			for (auto valueInstancesInstanceDisksdiskDiskTagstag : allDiskTagsNode)
			{
				Instance::Disk::Tag1 diskTagsObject;
				if(!valueInstancesInstanceDisksdiskDiskTagstag["Key"].isNull())
					diskTagsObject.key = valueInstancesInstanceDisksdiskDiskTagstag["Key"].asString();
				if(!valueInstancesInstanceDisksdiskDiskTagstag["Value"].isNull())
					diskTagsObject.value = valueInstancesInstanceDisksdiskDiskTagstag["Value"].asString();
				disksObject.diskTags.push_back(diskTagsObject);
			}
			instancesObject.disks.push_back(disksObject);
		}
		auto allNetworkAttributesNode = valueInstancesInstance["NetworkAttributes"]["networkAttribute"];
		for (auto valueInstancesInstanceNetworkAttributesnetworkAttribute : allNetworkAttributesNode)
		{
			Instance::NetworkAttribute networkAttributesObject;
			if(!valueInstancesInstanceNetworkAttributesnetworkAttribute["PublicIpAddress"].isNull())
				networkAttributesObject.publicIpAddress = valueInstancesInstanceNetworkAttributesnetworkAttribute["PublicIpAddress"].asString();
			if(!valueInstancesInstanceNetworkAttributesnetworkAttribute["PrivateIpAddress"].isNull())
				networkAttributesObject.privateIpAddress = valueInstancesInstanceNetworkAttributesnetworkAttribute["PrivateIpAddress"].asString();
			if(!valueInstancesInstanceNetworkAttributesnetworkAttribute["PeakBandwidth"].isNull())
				networkAttributesObject.peakBandwidth = std::stoi(valueInstancesInstanceNetworkAttributesnetworkAttribute["PeakBandwidth"].asString());
			if(!valueInstancesInstanceNetworkAttributesnetworkAttribute["PublicIpDdosStatus"].isNull())
				networkAttributesObject.publicIpDdosStatus = valueInstancesInstanceNetworkAttributesnetworkAttribute["PublicIpDdosStatus"].asString();
			instancesObject.networkAttributes.push_back(networkAttributesObject);
		}
		auto resourceSpecNode = value["ResourceSpec"];
		if(!resourceSpecNode["DiskCategory"].isNull())
			instancesObject.resourceSpec.diskCategory = resourceSpecNode["DiskCategory"].asString();
		if(!resourceSpecNode["Cpu"].isNull())
			instancesObject.resourceSpec.cpu = std::stoi(resourceSpecNode["Cpu"].asString());
		if(!resourceSpecNode["Bandwidth"].isNull())
			instancesObject.resourceSpec.bandwidth = std::stoi(resourceSpecNode["Bandwidth"].asString());
		if(!resourceSpecNode["DiskSize"].isNull())
			instancesObject.resourceSpec.diskSize = std::stoi(resourceSpecNode["DiskSize"].asString());
		if(!resourceSpecNode["Memory"].isNull())
			instancesObject.resourceSpec.memory = resourceSpecNode["Memory"].asString();
		if(!resourceSpecNode["Flow"].isNull())
			instancesObject.resourceSpec.flow = resourceSpecNode["Flow"].asString();
		auto imageNode = value["Image"];
		if(!imageNode["OsType"].isNull())
			instancesObject.image.osType = imageNode["OsType"].asString();
		if(!imageNode["ImageName"].isNull())
			instancesObject.image.imageName = imageNode["ImageName"].asString();
		if(!imageNode["ImageVersion"].isNull())
			instancesObject.image.imageVersion = imageNode["ImageVersion"].asString();
		if(!imageNode["ImageType"].isNull())
			instancesObject.image.imageType = imageNode["ImageType"].asString();
		if(!imageNode["ImageIconUrl"].isNull())
			instancesObject.image.imageIconUrl = imageNode["ImageIconUrl"].asString();
		if(!imageNode["ImageContact"].isNull())
			instancesObject.image.imageContact = imageNode["ImageContact"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::vector<ListInstancesResult::Instance> ListInstancesResult::getInstances()const
{
	return instances_;
}

int ListInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int ListInstancesResult::getPageSize()const
{
	return pageSize_;
}

int ListInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

