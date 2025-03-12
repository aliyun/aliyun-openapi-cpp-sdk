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

#include <alibabacloud/ecs/model/DescribeImagesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeImagesResult::DescribeImagesResult() :
	ServiceResult()
{}

DescribeImagesResult::DescribeImagesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImagesResult::~DescribeImagesResult()
{}

void DescribeImagesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allImagesNode = value["Images"]["Image"];
	for (auto valueImagesImage : allImagesNode)
	{
		Image imagesObject;
		if(!valueImagesImage["CreationTime"].isNull())
			imagesObject.creationTime = valueImagesImage["CreationTime"].asString();
		if(!valueImagesImage["Status"].isNull())
			imagesObject.status = valueImagesImage["Status"].asString();
		if(!valueImagesImage["ImageFamily"].isNull())
			imagesObject.imageFamily = valueImagesImage["ImageFamily"].asString();
		if(!valueImagesImage["Progress"].isNull())
			imagesObject.progress = valueImagesImage["Progress"].asString();
		if(!valueImagesImage["IsCopied"].isNull())
			imagesObject.isCopied = valueImagesImage["IsCopied"].asString() == "true";
		if(!valueImagesImage["IsSupportIoOptimized"].isNull())
			imagesObject.isSupportIoOptimized = valueImagesImage["IsSupportIoOptimized"].asString() == "true";
		if(!valueImagesImage["ImageOwnerAlias"].isNull())
			imagesObject.imageOwnerAlias = valueImagesImage["ImageOwnerAlias"].asString();
		if(!valueImagesImage["IsSupportCloudinit"].isNull())
			imagesObject.isSupportCloudinit = valueImagesImage["IsSupportCloudinit"].asString() == "true";
		if(!valueImagesImage["ImageVersion"].isNull())
			imagesObject.imageVersion = valueImagesImage["ImageVersion"].asString();
		if(!valueImagesImage["Usage"].isNull())
			imagesObject.usage = valueImagesImage["Usage"].asString();
		if(!valueImagesImage["IsSelfShared"].isNull())
			imagesObject.isSelfShared = valueImagesImage["IsSelfShared"].asString();
		if(!valueImagesImage["Description"].isNull())
			imagesObject.description = valueImagesImage["Description"].asString();
		if(!valueImagesImage["Size"].isNull())
			imagesObject.size = std::stoi(valueImagesImage["Size"].asString());
		if(!valueImagesImage["ResourceGroupId"].isNull())
			imagesObject.resourceGroupId = valueImagesImage["ResourceGroupId"].asString();
		if(!valueImagesImage["Platform"].isNull())
			imagesObject.platform = valueImagesImage["Platform"].asString();
		if(!valueImagesImage["OSNameEn"].isNull())
			imagesObject.oSNameEn = valueImagesImage["OSNameEn"].asString();
		if(!valueImagesImage["ImageName"].isNull())
			imagesObject.imageName = valueImagesImage["ImageName"].asString();
		if(!valueImagesImage["OSName"].isNull())
			imagesObject.oSName = valueImagesImage["OSName"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["OSType"].isNull())
			imagesObject.oSType = valueImagesImage["OSType"].asString();
		if(!valueImagesImage["IsSubscribed"].isNull())
			imagesObject.isSubscribed = valueImagesImage["IsSubscribed"].asString() == "true";
		if(!valueImagesImage["ProductCode"].isNull())
			imagesObject.productCode = valueImagesImage["ProductCode"].asString();
		if(!valueImagesImage["Architecture"].isNull())
			imagesObject.architecture = valueImagesImage["Architecture"].asString();
		if(!valueImagesImage["BootMode"].isNull())
			imagesObject.bootMode = valueImagesImage["BootMode"].asString();
		if(!valueImagesImage["IsPublic"].isNull())
			imagesObject.isPublic = valueImagesImage["IsPublic"].asString() == "true";
		if(!valueImagesImage["ImageOwnerId"].isNull())
			imagesObject.imageOwnerId = std::stol(valueImagesImage["ImageOwnerId"].asString());
		if(!valueImagesImage["LoginAsNonRootSupported"].isNull())
			imagesObject.loginAsNonRootSupported = valueImagesImage["LoginAsNonRootSupported"].asString() == "true";
		if(!valueImagesImage["SupplierName"].isNull())
			imagesObject.supplierName = valueImagesImage["SupplierName"].asString();
		auto allDiskDeviceMappingsNode = valueImagesImage["DiskDeviceMappings"]["DiskDeviceMapping"];
		for (auto valueImagesImageDiskDeviceMappingsDiskDeviceMapping : allDiskDeviceMappingsNode)
		{
			Image::DiskDeviceMapping diskDeviceMappingsObject;
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Type"].isNull())
				diskDeviceMappingsObject.type = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Type"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["ImportOSSBucket"].isNull())
				diskDeviceMappingsObject.importOSSBucket = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["ImportOSSBucket"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Progress"].isNull())
				diskDeviceMappingsObject.progress = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Progress"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["SnapshotId"].isNull())
				diskDeviceMappingsObject.snapshotId = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["SnapshotId"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["ImportOSSObject"].isNull())
				diskDeviceMappingsObject.importOSSObject = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["ImportOSSObject"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Device"].isNull())
				diskDeviceMappingsObject.device = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Device"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Size"].isNull())
				diskDeviceMappingsObject.size = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Size"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["RemainTime"].isNull())
				diskDeviceMappingsObject.remainTime = std::stoi(valueImagesImageDiskDeviceMappingsDiskDeviceMapping["RemainTime"].asString());
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Format"].isNull())
				diskDeviceMappingsObject.format = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Format"].asString();
			if(!valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Encrypted"].isNull())
				diskDeviceMappingsObject.encrypted = valueImagesImageDiskDeviceMappingsDiskDeviceMapping["Encrypted"].asString() == "true";
			imagesObject.diskDeviceMappings.push_back(diskDeviceMappingsObject);
		}
		auto allTagsNode = valueImagesImage["Tags"]["Tag"];
		for (auto valueImagesImageTagsTag : allTagsNode)
		{
			Image::Tag tagsObject;
			if(!valueImagesImageTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueImagesImageTagsTag["TagValue"].asString();
			if(!valueImagesImageTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueImagesImageTagsTag["TagKey"].asString();
			imagesObject.tags.push_back(tagsObject);
		}
		auto detectionOptionsNode = value["DetectionOptions"];
		if(!detectionOptionsNode["Status"].isNull())
			imagesObject.detectionOptions.status = detectionOptionsNode["Status"].asString();
		auto allItemsNode = detectionOptionsNode["Items"]["Item"];
		for (auto detectionOptionsNodeItemsItem : allItemsNode)
		{
			Image::DetectionOptions::Item itemObject;
			if(!detectionOptionsNodeItemsItem["Name"].isNull())
				itemObject.name = detectionOptionsNodeItemsItem["Name"].asString();
			if(!detectionOptionsNodeItemsItem["Value"].isNull())
				itemObject.value = detectionOptionsNodeItemsItem["Value"].asString();
			if(!detectionOptionsNodeItemsItem["RiskLevel"].isNull())
				itemObject.riskLevel = detectionOptionsNodeItemsItem["RiskLevel"].asString();
			if(!detectionOptionsNodeItemsItem["RiskCode"].isNull())
				itemObject.riskCode = detectionOptionsNodeItemsItem["RiskCode"].asString();
			imagesObject.detectionOptions.items.push_back(itemObject);
		}
		auto featuresNode = value["Features"];
		if(!featuresNode["NvmeSupport"].isNull())
			imagesObject.features.nvmeSupport = featuresNode["NvmeSupport"].asString();
		if(!featuresNode["ImdsSupport"].isNull())
			imagesObject.features.imdsSupport = featuresNode["ImdsSupport"].asString();
		if(!featuresNode["CpuOnlineUpgrade"].isNull())
			imagesObject.features.cpuOnlineUpgrade = featuresNode["CpuOnlineUpgrade"].asString();
		if(!featuresNode["CpuOnlineDowngrade"].isNull())
			imagesObject.features.cpuOnlineDowngrade = featuresNode["CpuOnlineDowngrade"].asString();
		if(!featuresNode["MemoryOnlineUpgrade"].isNull())
			imagesObject.features.memoryOnlineUpgrade = featuresNode["MemoryOnlineUpgrade"].asString();
		if(!featuresNode["MemoryOnlineDowngrade"].isNull())
			imagesObject.features.memoryOnlineDowngrade = featuresNode["MemoryOnlineDowngrade"].asString();
		images_.push_back(imagesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

int DescribeImagesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeImagesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeImagesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeImagesResult::Image> DescribeImagesResult::getImages()const
{
	return images_;
}

std::string DescribeImagesResult::getRegionId()const
{
	return regionId_;
}

