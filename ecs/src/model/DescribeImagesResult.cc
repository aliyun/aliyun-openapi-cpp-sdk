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
	auto allImages = value["Images"]["Image"];
	for (auto value : allImages)
	{
		Image imageObject;
		imageObject.progress = value["Progress"].asString();
		imageObject.imageId = value["ImageId"].asString();
		imageObject.imageName = value["ImageName"].asString();
		imageObject.imageVersion = value["ImageVersion"].asString();
		imageObject.description = value["Description"].asString();
		imageObject.size = std::stoi(value["Size"].asString());
		imageObject.imageOwnerAlias = value["ImageOwnerAlias"].asString();
		imageObject.isSupportIoOptimized = std::stoi(value["IsSupportIoOptimized"].asString());
		imageObject.isSupportCloudinit = std::stoi(value["IsSupportCloudinit"].asString());
		imageObject.oSName = value["OSName"].asString();
		imageObject.architecture = value["Architecture"].asString();
		imageObject.status = value["Status"].asString();
		imageObject.productCode = value["ProductCode"].asString();
		imageObject.isSubscribed = std::stoi(value["IsSubscribed"].asString());
		imageObject.creationTime = value["CreationTime"].asString();
		imageObject.isSelfShared = value["IsSelfShared"].asString();
		imageObject.oSType = value["OSType"].asString();
		imageObject.platform = value["Platform"].asString();
		imageObject.usage = value["Usage"].asString();
		imageObject.isCopied = std::stoi(value["IsCopied"].asString());
		auto allDiskDeviceMappings = value["DiskDeviceMappings"]["DiskDeviceMapping"];
		for (auto value : allDiskDeviceMappings)
		{
			Image::DiskDeviceMapping diskDeviceMappingObject;
			diskDeviceMappingObject.snapshotId = value["SnapshotId"].asString();
			diskDeviceMappingObject.size = value["Size"].asString();
			diskDeviceMappingObject.device = value["Device"].asString();
			diskDeviceMappingObject.type = value["Type"].asString();
			diskDeviceMappingObject.format = value["Format"].asString();
			diskDeviceMappingObject.importOSSBucket = value["ImportOSSBucket"].asString();
			diskDeviceMappingObject.importOSSObject = value["ImportOSSObject"].asString();
			imageObject.diskDeviceMappings.push_back(diskDeviceMappingObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			Image::Tag tagObject;
			tagObject.tagKey = value["TagKey"].asString();
			tagObject.tagValue = value["TagValue"].asString();
			imageObject.tags.push_back(tagObject);
		}
		images_.push_back(imageObject);
	}
	regionId_ = value["RegionId"].asString();
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeImagesResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeImagesResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeImagesResult::getPageSize()const
{
	return pageSize_;
}

void DescribeImagesResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeImagesResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeImagesResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeImagesResult::getRegionId()const
{
	return regionId_;
}

void DescribeImagesResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

