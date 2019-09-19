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
		if(!valueImagesImage["Progress"].isNull())
			imagesObject.progress = valueImagesImage["Progress"].asString();
		if(!valueImagesImage["ImageId"].isNull())
			imagesObject.imageId = valueImagesImage["ImageId"].asString();
		if(!valueImagesImage["ImageName"].isNull())
			imagesObject.imageName = valueImagesImage["ImageName"].asString();
		if(!valueImagesImage["ImageVersion"].isNull())
			imagesObject.imageVersion = valueImagesImage["ImageVersion"].asString();
		if(!valueImagesImage["Description"].isNull())
			imagesObject.description = valueImagesImage["Description"].asString();
		if(!valueImagesImage["Size"].isNull())
			imagesObject.size = std::stoi(valueImagesImage["Size"].asString());
		if(!valueImagesImage["ImageOwnerAlias"].isNull())
			imagesObject.imageOwnerAlias = valueImagesImage["ImageOwnerAlias"].asString();
		if(!valueImagesImage["IsSupportIoOptimized"].isNull())
			imagesObject.isSupportIoOptimized = valueImagesImage["IsSupportIoOptimized"].asString() == "true";
		if(!valueImagesImage["IsSupportCloudinit"].isNull())
			imagesObject.isSupportCloudinit = valueImagesImage["IsSupportCloudinit"].asString() == "true";
		if(!valueImagesImage["OSName"].isNull())
			imagesObject.oSName = valueImagesImage["OSName"].asString();
		if(!valueImagesImage["OSNameEn"].isNull())
			imagesObject.oSNameEn = valueImagesImage["OSNameEn"].asString();
		if(!valueImagesImage["Architecture"].isNull())
			imagesObject.architecture = valueImagesImage["Architecture"].asString();
		if(!valueImagesImage["Status"].isNull())
			imagesObject.status = valueImagesImage["Status"].asString();
		if(!valueImagesImage["ProductCode"].isNull())
			imagesObject.productCode = valueImagesImage["ProductCode"].asString();
		if(!valueImagesImage["IsSubscribed"].isNull())
			imagesObject.isSubscribed = valueImagesImage["IsSubscribed"].asString() == "true";
		if(!valueImagesImage["CreationTime"].isNull())
			imagesObject.creationTime = valueImagesImage["CreationTime"].asString();
		if(!valueImagesImage["IsSelfShared"].isNull())
			imagesObject.isSelfShared = valueImagesImage["IsSelfShared"].asString();
		if(!valueImagesImage["OSType"].isNull())
			imagesObject.oSType = valueImagesImage["OSType"].asString();
		if(!valueImagesImage["Platform"].isNull())
			imagesObject.platform = valueImagesImage["Platform"].asString();
		if(!valueImagesImage["Usage"].isNull())
			imagesObject.usage = valueImagesImage["Usage"].asString();
		if(!valueImagesImage["IsCopied"].isNull())
			imagesObject.isCopied = valueImagesImage["IsCopied"].asString() == "true";
		if(!valueImagesImage["ResourceGroupId"].isNull())
			imagesObject.resourceGroupId = valueImagesImage["ResourceGroupId"].asString();
		auto allDiskDeviceMappingsNode = allImagesNode["DiskDeviceMappings"]["DiskDeviceMapping"];
		for (auto allImagesNodeDiskDeviceMappingsDiskDeviceMapping : allDiskDeviceMappingsNode)
		{
			Image::DiskDeviceMapping diskDeviceMappingsObject;
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["SnapshotId"].isNull())
				diskDeviceMappingsObject.snapshotId = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["SnapshotId"].asString();
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Size"].isNull())
				diskDeviceMappingsObject.size = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Size"].asString();
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Device"].isNull())
				diskDeviceMappingsObject.device = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Device"].asString();
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Type"].isNull())
				diskDeviceMappingsObject.type = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Type"].asString();
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Format"].isNull())
				diskDeviceMappingsObject.format = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Format"].asString();
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSBucket"].isNull())
				diskDeviceMappingsObject.importOSSBucket = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSBucket"].asString();
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSObject"].isNull())
				diskDeviceMappingsObject.importOSSObject = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["ImportOSSObject"].asString();
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Progress"].isNull())
				diskDeviceMappingsObject.progress = allImagesNodeDiskDeviceMappingsDiskDeviceMapping["Progress"].asString();
			if(!allImagesNodeDiskDeviceMappingsDiskDeviceMapping["RemainTime"].isNull())
				diskDeviceMappingsObject.remainTime = std::stoi(allImagesNodeDiskDeviceMappingsDiskDeviceMapping["RemainTime"].asString());
			imagesObject.diskDeviceMappings.push_back(diskDeviceMappingsObject);
		}
		auto allTagsNode = allImagesNode["Tags"]["Tag"];
		for (auto allImagesNodeTagsTag : allTagsNode)
		{
			Image::Tag tagsObject;
			if(!allImagesNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allImagesNodeTagsTag["TagKey"].asString();
			if(!allImagesNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allImagesNodeTagsTag["TagValue"].asString();
			imagesObject.tags.push_back(tagsObject);
		}
		images_.push_back(imagesObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

